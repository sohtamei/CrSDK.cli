const fs = require('fs');

const PWD = process.cwd().replace('/mnt/c','C:');

const target = process.argv[2];

/*
	const std::map<std::uint64_t, std::string> map_CrPlaybackMedia 
	{
		{ SDK::CrPlaybackMedia::CrPlaybackMedia_Slot1,	"Slot1" },
		{ SDK::CrPlaybackMedia::CrPlaybackMedia_Slot2,	"Slot2" },
	};

enum CrPlaybackMedia : CrInt8u
{
CrPlaybackMedia_Slot1,
CrPlaybackMedia_Slot2,
};
*/


// " と " の間の\nを\\nに変換
const lines = fs.readFileSync(target, 'utf8').replace(/\r/g,'').split('\n');

let enumName = '';

for(let i = 0; i < lines.length; i++) {
	let line = lines[i].replace(/\/\/.*/g, '')		// //
	.replace(/\t/g, '')
	.replace(/,/g, ' ')
	.replace(/:/g, ' ')
	;

	words = line.split(' ');
	switch(words[0]) {
	case 'enum':
		enumName = words[1];
		console.log('const std::map<std::uint64_t, std::string> map_' + enumName);
		break;
	case '{':
		console.log(line);
		break;
	case '};':
		console.log(line);
		console.log();
		break;
	default:
		if(words[0].slice(0,2) == 'Cr') {
			let pos1 = -1;
			
			if(pos1 = words[0].indexOf('CrMovie_Recording_State'), pos1 >= 0) {
				pos1 = 'CrMovie_Recording_State'.length;

			} else if(pos1 = words[0].indexOf('CrAPS_C_or_Full_Switching'), pos1 >= 0) {
				pos1 = 'CrAPS_C_or_Full_Switching'.length;
			} else {
				pos1 = 0;
			}

			const pos2 = words[0].slice(pos1).indexOf('_');
			if(pos2 >= 0) {
				console.log('\t{ SDK::' + enumName + '::' + words[0] + ',\t"'+ words[0].slice(pos1+pos2+1) + '" },');
			}
		}
	}

}

