FSGSTy::InitFSGS:
00595E40  55                        PUSH EBP
00595E41  8B EC                     MOV EBP,ESP
00595E43  81 EC 4C 04 00 00         SUB ESP,0x44c
00595E49  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00595E4E  53                        PUSH EBX
00595E4F  56                        PUSH ESI
00595E50  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00595E53  33 DB                     XOR EBX,EBX
00595E55  57                        PUSH EDI
00595E56  8D 55 B8                  LEA EDX,[EBP + -0x48]
00595E59  8D 4D B4                  LEA ECX,[EBP + -0x4c]
00595E5C  53                        PUSH EBX
00595E5D  52                        PUSH EDX
00595E5E  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
00595E61  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00595E67  E8 84 79 19 00            CALL 0x0072d7f0
00595E6C  8B F0                     MOV ESI,EAX
00595E6E  83 C4 08                  ADD ESP,0x8
00595E71  3B F3                     CMP ESI,EBX
00595E73  0F 85 3F 07 00 00         JNZ 0x005965b8
00595E79  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
00595E7C  8B 8E 5B 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a5b]
00595E82  E8 85 FA E6 FF            CALL 0x0040590c
00595E87  89 35 4C 17 81 00         MOV dword ptr [0x0081174c],ESI
00595E8D  88 1D A0 67 80 00         MOV byte ptr [0x008067a0],BL
00595E93  8B 8E 5B 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a5b]
00595E99  E8 6C D4 E6 FF            CALL 0x0040330a
00595E9E  A1 30 2A 80 00            MOV EAX,[0x00802a30]
00595EA3  88 1D 99 2A 80 00         MOV byte ptr [0x00802a99],BL
00595EA9  3B C3                     CMP EAX,EBX
00595EAB  74 28                     JZ 0x00595ed5
00595EAD  39 98 A9 00 00 00         CMP dword ptr [EAX + 0xa9],EBX
00595EB3  74 14                     JZ 0x00595ec9
00595EB5  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
00595EB8  83 F9 FF                  CMP ECX,-0x1
00595EBB  74 18                     JZ 0x00595ed5
00595EBD  8B 40 60                  MOV EAX,dword ptr [EAX + 0x60]
00595EC0  51                        PUSH ECX
00595EC1  50                        PUSH EAX
00595EC2  E8 29 DC 11 00            CALL 0x006b3af0
00595EC7  EB 0C                     JMP 0x00595ed5
LAB_00595ec9:
00595EC9  8B 88 AD 00 00 00         MOV ECX,dword ptr [EAX + 0xad]
00595ECF  51                        PUSH ECX
00595ED0  E8 3B 2C 12 00            CALL 0x006b8b10
LAB_00595ed5:
00595ED5  8B 96 5B 1A 00 00         MOV EDX,dword ptr [ESI + 0x1a5b]
00595EDB  8B 8A E6 02 00 00         MOV ECX,dword ptr [EDX + 0x2e6]
00595EE1  3B CB                     CMP ECX,EBX
00595EE3  74 17                     JZ 0x00595efc
00595EE5  E8 44 E7 E6 FF            CALL 0x0040462e
00595EEA  8B 86 5B 1A 00 00         MOV EAX,dword ptr [ESI + 0x1a5b]
00595EF0  8B 88 E6 02 00 00         MOV ECX,dword ptr [EAX + 0x2e6]
00595EF6  89 99 AB 1C 00 00         MOV dword ptr [ECX + 0x1cab],EBX
LAB_00595efc:
00595EFC  8B 15 80 67 80 00         MOV EDX,dword ptr [0x00806780]
00595F02  BF 01 00 00 00            MOV EDI,0x1
00595F07  57                        PUSH EDI
00595F08  53                        PUSH EBX
00595F09  68 9C C0 7C 00            PUSH 0x7cc09c
00595F0E  52                        PUSH EDX
00595F0F  E8 DC 4A 17 00            CALL 0x0070a9f0
00595F14  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
00595F1A  53                        PUSH EBX
00595F1B  53                        PUSH EBX
00595F1C  57                        PUSH EDI
00595F1D  89 41 2C                  MOV dword ptr [ECX + 0x2c],EAX
00595F20  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
00595F26  53                        PUSH EBX
00595F27  6A FF                     PUSH -0x1
00595F29  8B 42 2C                  MOV EAX,dword ptr [EDX + 0x2c]
00595F2C  68 90 C0 7C 00            PUSH 0x7cc090
00595F31  89 46 5D                  MOV dword ptr [ESI + 0x5d],EAX
00595F34  8B 0D 84 67 80 00         MOV ECX,dword ptr [0x00806784]
00595F3A  6A 0B                     PUSH 0xb
00595F3C  51                        PUSH ECX
00595F3D  E8 AE 3B 17 00            CALL 0x00709af0
00595F42  53                        PUSH EBX
00595F43  53                        PUSH EBX
00595F44  57                        PUSH EDI
00595F45  53                        PUSH EBX
00595F46  89 86 83 1A 00 00         MOV dword ptr [ESI + 0x1a83],EAX
00595F4C  8B 15 84 67 80 00         MOV EDX,dword ptr [0x00806784]
00595F52  6A FF                     PUSH -0x1
00595F54  68 84 C0 7C 00            PUSH 0x7cc084
00595F59  6A 0B                     PUSH 0xb
00595F5B  52                        PUSH EDX
00595F5C  E8 8F 3B 17 00            CALL 0x00709af0
00595F61  83 C4 50                  ADD ESP,0x50
00595F64  89 86 87 1A 00 00         MOV dword ptr [ESI + 0x1a87],EAX
00595F6A  A1 84 67 80 00            MOV EAX,[0x00806784]
00595F6F  53                        PUSH EBX
00595F70  53                        PUSH EBX
00595F71  57                        PUSH EDI
00595F72  53                        PUSH EBX
00595F73  6A FF                     PUSH -0x1
00595F75  68 7C C0 7C 00            PUSH 0x7cc07c
00595F7A  6A 0B                     PUSH 0xb
00595F7C  50                        PUSH EAX
00595F7D  E8 6E 3B 17 00            CALL 0x00709af0
00595F82  83 C4 20                  ADD ESP,0x20
00595F85  89 86 8B 1A 00 00         MOV dword ptr [ESI + 0x1a8b],EAX
00595F8B  8B 56 5D                  MOV EDX,dword ptr [ESI + 0x5d]
00595F8E  8D 8D B4 FB FF FF         LEA ECX,[EBP + 0xfffffbb4]
00595F94  53                        PUSH EBX
00595F95  51                        PUSH ECX
00595F96  52                        PUSH EDX
00595F97  E8 C4 63 12 00            CALL 0x006bc360
00595F9C  8B 86 5B 1A 00 00         MOV EAX,dword ptr [ESI + 0x1a5b]
00595FA2  8D 95 B4 FB FF FF         LEA EDX,[EBP + 0xfffffbb4]
00595FA8  C7 80 40 01 00 00 0F 00 00 00  MOV dword ptr [EAX + 0x140],0xf
00595FB2  8B 8E 5B 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a5b]
00595FB8  81 C1 44 01 00 00         ADD ECX,0x144
00595FBE  51                        PUSH ECX
00595FBF  6A 15                     PUSH 0x15
00595FC1  68 8B 00 00 00            PUSH 0x8b
00595FC6  68 00 01 00 00            PUSH 0x100
00595FCB  53                        PUSH EBX
00595FCC  52                        PUSH EDX
00595FCD  E8 AE 27 18 00            CALL 0x00718780
00595FD2  8B 46 5D                  MOV EAX,dword ptr [ESI + 0x5d]
00595FD5  83 C4 18                  ADD ESP,0x18
00595FD8  50                        PUSH EAX
00595FD9  E8 82 0A 13 00            CALL 0x006c6a60
00595FDE  89 86 67 1A 00 00         MOV dword ptr [ESI + 0x1a67],EAX
00595FE4  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
00595FE7  89 86 5B 1F 00 00         MOV dword ptr [ESI + 0x1f5b],EAX
00595FED  89 86 3B 1F 00 00         MOV dword ptr [ESI + 0x1f3b],EAX
00595FF3  B8 02 00 00 00            MOV EAX,0x2
00595FF8  89 86 5F 1F 00 00         MOV dword ptr [ESI + 0x1f5f],EAX
00595FFE  89 86 3F 1F 00 00         MOV dword ptr [ESI + 0x1f3f],EAX
00596004  8B 4E 5D                  MOV ECX,dword ptr [ESI + 0x5d]
00596007  89 8E 7F 1F 00 00         MOV dword ptr [ESI + 0x1f7f],ECX
0059600D  89 9E 93 1F 00 00         MOV dword ptr [ESI + 0x1f93],EBX
00596013  8B 15 AC 32 80 00         MOV EDX,dword ptr [0x008032ac]
00596019  89 96 8F 1F 00 00         MOV dword ptr [ESI + 0x1f8f],EDX
0059601F  6A 05                     PUSH 0x5
00596021  68 0C 01 00 00            PUSH 0x10c
00596026  C7 86 87 1F 00 00 0F 00 00 00  MOV dword ptr [ESI + 0x1f87],0xf
00596030  6A 05                     PUSH 0x5
00596032  89 BE 8B 1F 00 00         MOV dword ptr [ESI + 0x1f8b],EDI
00596038  53                        PUSH EBX
00596039  C7 86 83 1F 00 00 4D 00 00 00  MOV dword ptr [ESI + 0x1f83],0x4d
00596043  E8 48 82 11 00            CALL 0x006ae290
00596048  89 86 B3 1F 00 00         MOV dword ptr [ESI + 0x1fb3],EAX
0059604E  8B 86 5B 1A 00 00         MOV EAX,dword ptr [ESI + 0x1a5b]
00596054  8B 48 30                  MOV ECX,dword ptr [EAX + 0x30]
00596057  89 8E 6F 1A 00 00         MOV dword ptr [ESI + 0x1a6f],ECX
0059605D  8B 96 5B 1A 00 00         MOV EDX,dword ptr [ESI + 0x1a5b]
00596063  8B 42 34                  MOV EAX,dword ptr [EDX + 0x34]
00596066  89 86 73 1A 00 00         MOV dword ptr [ESI + 0x1a73],EAX
0059606C  8A 0D D9 7D 80 00         MOV CL,byte ptr [0x00807dd9]
00596072  8B 56 5D                  MOV EDX,dword ptr [ESI + 0x5d]
00596075  51                        PUSH ECX
00596076  53                        PUSH EBX
00596077  52                        PUSH EDX
00596078  E8 B9 BF E6 FF            CALL 0x00402036
0059607D  89 86 77 1A 00 00         MOV dword ptr [ESI + 0x1a77],EAX
00596083  89 78 7E                  MOV dword ptr [EAX + 0x7e],EDI
00596086  05 9E 00 00 00            ADD EAX,0x9e
0059608B  53                        PUSH EBX
0059608C  68 70 C0 7C 00            PUSH 0x7cc070
00596091  66 89 18                  MOV word ptr [EAX],BX
00596094  8A 0D F0 6F 7C 00         MOV CL,byte ptr [0x007c6ff0]
0059609A  88 08                     MOV byte ptr [EAX],CL
0059609C  8B 15 80 67 80 00         MOV EDX,dword ptr [0x00806780]
005960A2  52                        PUSH EDX
005960A3  68 9D 01 00 00            PUSH 0x19d
005960A8  E8 03 6E 17 00            CALL 0x0070ceb0
005960AD  89 86 7B 1A 00 00         MOV dword ptr [ESI + 0x1a7b],EAX
005960B3  89 78 58                  MOV dword ptr [EAX + 0x58],EDI
005960B6  89 58 5C                  MOV dword ptr [EAX + 0x5c],EBX
005960B9  A1 80 67 80 00            MOV EAX,[0x00806780]
005960BE  53                        PUSH EBX
005960BF  68 64 C0 7C 00            PUSH 0x7cc064
005960C4  50                        PUSH EAX
005960C5  68 9D 01 00 00            PUSH 0x19d
005960CA  E8 E1 6D 17 00            CALL 0x0070ceb0
005960CF  89 86 7F 1A 00 00         MOV dword ptr [ESI + 0x1a7f],EAX
005960D5  89 78 58                  MOV dword ptr [EAX + 0x58],EDI
005960D8  89 58 5C                  MOV dword ptr [EAX + 0x5c],EBX
005960DB  8B 46 5D                  MOV EAX,dword ptr [ESI + 0x5d]
005960DE  83 C4 2C                  ADD ESP,0x2c
005960E1  8D 48 28                  LEA ECX,[EAX + 0x28]
005960E4  57                        PUSH EDI
005960E5  51                        PUSH ECX
005960E6  50                        PUSH EAX
005960E7  E8 F4 EE 11 00            CALL 0x006b4fe0
005960EC  8B 56 5D                  MOV EDX,dword ptr [ESI + 0x5d]
005960EF  50                        PUSH EAX
005960F0  33 C0                     XOR EAX,EAX
005960F2  66 8B 42 0E               MOV AX,word ptr [EDX + 0xe]
005960F6  50                        PUSH EAX
005960F7  6A 59                     PUSH 0x59
005960F9  68 4D 02 00 00            PUSH 0x24d
005960FE  E8 BD EF 11 00            CALL 0x006b50c0
00596103  89 86 97 1A 00 00         MOV dword ptr [ESI + 0x1a97],EAX
00596109  8B 48 14                  MOV ECX,dword ptr [EAX + 0x14]
0059610C  3B CB                     CMP ECX,EBX
0059610E  75 1A                     JNZ 0x0059612a
00596110  33 C9                     XOR ECX,ECX
00596112  66 8B 48 0E               MOV CX,word ptr [EAX + 0xe]
00596116  0F AF 48 04               IMUL ECX,dword ptr [EAX + 0x4]
0059611A  83 C1 1F                  ADD ECX,0x1f
0059611D  C1 E9 03                  SHR ECX,0x3
00596120  81 E1 FC FF FF 1F         AND ECX,0x1ffffffc
00596126  0F AF 48 08               IMUL ECX,dword ptr [EAX + 0x8]
LAB_0059612a:
0059612A  50                        PUSH EAX
0059612B  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0059612E  E8 6D EE 11 00            CALL 0x006b4fa0
00596133  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00596136  8B F8                     MOV EDI,EAX
00596138  8B D1                     MOV EDX,ECX
0059613A  83 C8 FF                  OR EAX,0xffffffff
0059613D  C1 E9 02                  SHR ECX,0x2
00596140  F3 AB                     STOSD.REP ES:EDI
00596142  8B CA                     MOV ECX,EDX
00596144  53                        PUSH EBX
00596145  83 E1 03                  AND ECX,0x3
00596148  53                        PUSH EBX
00596149  F3 AA                     STOSB.REP ES:EDI
0059614B  8B 86 93 1A 00 00         MOV EAX,dword ptr [ESI + 0x1a93]
00596151  50                        PUSH EAX
00596152  6A 02                     PUSH 0x2
00596154  68 58 C0 7C 00            PUSH 0x7cc058
00596159  E8 A2 CA 15 00            CALL 0x006f2c00
0059615E  8B 0D 80 67 80 00         MOV ECX,dword ptr [0x00806780]
00596164  83 C4 0C                  ADD ESP,0xc
00596167  50                        PUSH EAX
00596168  6A 06                     PUSH 0x6
0059616A  51                        PUSH ECX
0059616B  E8 30 44 17 00            CALL 0x0070a5a0
00596170  8B 96 97 1A 00 00         MOV EDX,dword ptr [ESI + 0x1a97]
00596176  50                        PUSH EAX
00596177  6A 06                     PUSH 0x6
00596179  53                        PUSH EBX
0059617A  53                        PUSH EBX
0059617B  52                        PUSH EDX
0059617C  E8 A8 D0 E6 FF            CALL 0x00403229
00596181  8B 86 97 1A 00 00         MOV EAX,dword ptr [ESI + 0x1a97]
00596187  83 C4 28                  ADD ESP,0x28
0059618A  8D BE 8F 1A 00 00         LEA EDI,[ESI + 0x1a8f]
00596190  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
00596193  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
00596196  50                        PUSH EAX
00596197  A1 A8 75 80 00            MOV EAX,[0x008075a8]
0059619C  51                        PUSH ECX
0059619D  52                        PUSH EDX
0059619E  68 F6 23 40 00            PUSH 0x4023f6
005961A3  6A 31                     PUSH 0x31
005961A5  57                        PUSH EDI
005961A6  50                        PUSH EAX
005961A7  E8 84 C1 11 00            CALL 0x006b2330
005961AC  8B 0D 30 67 80 00         MOV ECX,dword ptr [0x00806730]
005961B2  8B 17                     MOV EDX,dword ptr [EDI]
005961B4  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005961B9  81 C1 B3 FD FF FF         ADD ECX,0xfffffdb3
005961BF  53                        PUSH EBX
005961C0  51                        PUSH ECX
005961C1  6A FF                     PUSH -0x1
005961C3  52                        PUSH EDX
005961C4  50                        PUSH EAX
005961C5  E8 76 D4 11 00            CALL 0x006b3640
005961CA  8B 46 5D                  MOV EAX,dword ptr [ESI + 0x5d]
005961CD  6A 01                     PUSH 0x1
005961CF  8D 48 28                  LEA ECX,[EAX + 0x28]
005961D2  51                        PUSH ECX
005961D3  50                        PUSH EAX
005961D4  E8 07 EE 11 00            CALL 0x006b4fe0
005961D9  8B 56 5D                  MOV EDX,dword ptr [ESI + 0x5d]
005961DC  50                        PUSH EAX
005961DD  33 C0                     XOR EAX,EAX
005961DF  66 8B 42 0E               MOV AX,word ptr [EDX + 0xe]
005961E3  50                        PUSH EAX
005961E4  68 06 01 00 00            PUSH 0x106
005961E9  68 B8 01 00 00            PUSH 0x1b8
005961EE  E8 CD EE 11 00            CALL 0x006b50c0
005961F3  89 86 C0 1A 00 00         MOV dword ptr [ESI + 0x1ac0],EAX
005961F9  88 9E BB 1A 00 00         MOV byte ptr [ESI + 0x1abb],BL
005961FF  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
00596202  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
00596205  50                        PUSH EAX
00596206  51                        PUSH ECX
00596207  52                        PUSH EDX
00596208  8D BE BC 1A 00 00         LEA EDI,[ESI + 0x1abc]
0059620E  68 F6 23 40 00            PUSH 0x4023f6
00596213  6A 31                     PUSH 0x31
00596215  57                        PUSH EDI
00596216  A1 A8 75 80 00            MOV EAX,[0x008075a8]
0059621B  50                        PUSH EAX
0059621C  E8 0F C1 11 00            CALL 0x006b2330
00596221  8B 0F                     MOV ECX,dword ptr [EDI]
00596223  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
00596229  68 AA 00 00 00            PUSH 0xaa
0059622E  68 B4 00 00 00            PUSH 0xb4
00596233  6A FF                     PUSH -0x1
00596235  51                        PUSH ECX
00596236  52                        PUSH EDX
00596237  E8 04 D4 11 00            CALL 0x006b3640
0059623C  8B 07                     MOV EAX,dword ptr [EDI]
0059623E  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
00596244  50                        PUSH EAX
00596245  51                        PUSH ECX
00596246  E8 A5 D8 11 00            CALL 0x006b3af0
0059624B  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
00596251  53                        PUSH EBX
00596252  53                        PUSH EBX
00596253  53                        PUSH EBX
00596254  8D BE 28 1B 00 00         LEA EDI,[ESI + 0x1b28]
0059625A  6A 07                     PUSH 0x7
0059625C  6A 31                     PUSH 0x31
0059625E  52                        PUSH EDX
0059625F  8B CF                     MOV ECX,EDI
00596261  E8 3A F6 17 00            CALL 0x007158a0
00596266  8B 0D 84 67 80 00         MOV ECX,dword ptr [0x00806784]
0059626C  8B 07                     MOV EAX,dword ptr [EDI]
0059626E  6A FF                     PUSH -0x1
00596270  68 4C C0 7C 00            PUSH 0x7cc04c
00596275  53                        PUSH EBX
00596276  6A 07                     PUSH 0x7
00596278  51                        PUSH ECX
00596279  8B CF                     MOV ECX,EDI
0059627B  FF 50 04                  CALL dword ptr [EAX + 0x4]
0059627E  89 9E 30 1B 00 00         MOV dword ptr [ESI + 0x1b30],EBX
00596284  8B 47 04                  MOV EAX,dword ptr [EDI + 0x4]
00596287  83 F8 FF                  CMP EAX,-0x1
0059628A  74 0A                     JZ 0x00596296
0059628C  8B 57 48                  MOV EDX,dword ptr [EDI + 0x48]
0059628F  50                        PUSH EAX
00596290  52                        PUSH EDX
00596291  E8 5A D8 11 00            CALL 0x006b3af0
LAB_00596296:
00596296  A1 A8 75 80 00            MOV EAX,[0x008075a8]
0059629B  53                        PUSH EBX
0059629C  53                        PUSH EBX
0059629D  53                        PUSH EBX
0059629E  8D BE B9 1B 00 00         LEA EDI,[ESI + 0x1bb9]
005962A4  6A 07                     PUSH 0x7
005962A6  6A 31                     PUSH 0x31
005962A8  50                        PUSH EAX
005962A9  8B CF                     MOV ECX,EDI
005962AB  E8 F0 F5 17 00            CALL 0x007158a0
005962B0  A1 84 67 80 00            MOV EAX,[0x00806784]
005962B5  8B 17                     MOV EDX,dword ptr [EDI]
005962B7  6A FF                     PUSH -0x1
005962B9  68 40 C0 7C 00            PUSH 0x7cc040
005962BE  53                        PUSH EBX
005962BF  6A 07                     PUSH 0x7
005962C1  50                        PUSH EAX
005962C2  8B CF                     MOV ECX,EDI
005962C4  FF 52 04                  CALL dword ptr [EDX + 0x4]
005962C7  89 9E C1 1B 00 00         MOV dword ptr [ESI + 0x1bc1],EBX
005962CD  8B 47 04                  MOV EAX,dword ptr [EDI + 0x4]
005962D0  83 F8 FF                  CMP EAX,-0x1
005962D3  74 0A                     JZ 0x005962df
005962D5  8B 4F 48                  MOV ECX,dword ptr [EDI + 0x48]
005962D8  50                        PUSH EAX
005962D9  51                        PUSH ECX
005962DA  E8 11 D8 11 00            CALL 0x006b3af0
LAB_005962df:
005962DF  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005962E5  53                        PUSH EBX
005962E6  53                        PUSH EBX
005962E7  53                        PUSH EBX
005962E8  8D BE 4A 1C 00 00         LEA EDI,[ESI + 0x1c4a]
005962EE  6A 07                     PUSH 0x7
005962F0  6A 31                     PUSH 0x31
005962F2  52                        PUSH EDX
005962F3  8B CF                     MOV ECX,EDI
005962F5  E8 A6 F5 17 00            CALL 0x007158a0
005962FA  8B 0D 84 67 80 00         MOV ECX,dword ptr [0x00806784]
00596300  8B 07                     MOV EAX,dword ptr [EDI]
00596302  6A FF                     PUSH -0x1
00596304  68 34 C0 7C 00            PUSH 0x7cc034
00596309  53                        PUSH EBX
0059630A  6A 07                     PUSH 0x7
0059630C  51                        PUSH ECX
0059630D  8B CF                     MOV ECX,EDI
0059630F  FF 50 04                  CALL dword ptr [EAX + 0x4]
00596312  89 9E 52 1C 00 00         MOV dword ptr [ESI + 0x1c52],EBX
00596318  8B 47 04                  MOV EAX,dword ptr [EDI + 0x4]
0059631B  83 F8 FF                  CMP EAX,-0x1
0059631E  74 0A                     JZ 0x0059632a
00596320  8B 57 48                  MOV EDX,dword ptr [EDI + 0x48]
00596323  50                        PUSH EAX
00596324  52                        PUSH EDX
00596325  E8 C6 D7 11 00            CALL 0x006b3af0
LAB_0059632a:
0059632A  A1 A8 75 80 00            MOV EAX,[0x008075a8]
0059632F  53                        PUSH EBX
00596330  53                        PUSH EBX
00596331  53                        PUSH EBX
00596332  8D BE DB 1C 00 00         LEA EDI,[ESI + 0x1cdb]
00596338  6A 07                     PUSH 0x7
0059633A  6A 31                     PUSH 0x31
0059633C  50                        PUSH EAX
0059633D  8B CF                     MOV ECX,EDI
0059633F  E8 5C F5 17 00            CALL 0x007158a0
00596344  A1 84 67 80 00            MOV EAX,[0x00806784]
00596349  8B 17                     MOV EDX,dword ptr [EDI]
0059634B  6A FF                     PUSH -0x1
0059634D  68 4C C0 7C 00            PUSH 0x7cc04c
00596352  53                        PUSH EBX
00596353  6A 07                     PUSH 0x7
00596355  50                        PUSH EAX
00596356  8B CF                     MOV ECX,EDI
00596358  FF 52 04                  CALL dword ptr [EDX + 0x4]
0059635B  89 9E E3 1C 00 00         MOV dword ptr [ESI + 0x1ce3],EBX
00596361  8B 47 04                  MOV EAX,dword ptr [EDI + 0x4]
00596364  83 F8 FF                  CMP EAX,-0x1
00596367  74 0A                     JZ 0x00596373
00596369  8B 4F 48                  MOV ECX,dword ptr [EDI + 0x48]
0059636C  50                        PUSH EAX
0059636D  51                        PUSH ECX
0059636E  E8 7D D7 11 00            CALL 0x006b3af0
LAB_00596373:
00596373  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
00596379  53                        PUSH EBX
0059637A  53                        PUSH EBX
0059637B  53                        PUSH EBX
0059637C  8D BE 6C 1D 00 00         LEA EDI,[ESI + 0x1d6c]
00596382  6A 07                     PUSH 0x7
00596384  6A 31                     PUSH 0x31
00596386  52                        PUSH EDX
00596387  8B CF                     MOV ECX,EDI
00596389  E8 12 F5 17 00            CALL 0x007158a0
0059638E  8B 0D 84 67 80 00         MOV ECX,dword ptr [0x00806784]
00596394  8B 07                     MOV EAX,dword ptr [EDI]
00596396  6A FF                     PUSH -0x1
00596398  68 40 C0 7C 00            PUSH 0x7cc040
0059639D  53                        PUSH EBX
0059639E  6A 07                     PUSH 0x7
005963A0  51                        PUSH ECX
005963A1  8B CF                     MOV ECX,EDI
005963A3  FF 50 04                  CALL dword ptr [EAX + 0x4]
005963A6  89 9E 74 1D 00 00         MOV dword ptr [ESI + 0x1d74],EBX
005963AC  8B 47 04                  MOV EAX,dword ptr [EDI + 0x4]
005963AF  83 F8 FF                  CMP EAX,-0x1
005963B2  74 0A                     JZ 0x005963be
005963B4  8B 57 48                  MOV EDX,dword ptr [EDI + 0x48]
005963B7  50                        PUSH EAX
005963B8  52                        PUSH EDX
005963B9  E8 32 D7 11 00            CALL 0x006b3af0
LAB_005963be:
005963BE  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005963C3  53                        PUSH EBX
005963C4  53                        PUSH EBX
005963C5  53                        PUSH EBX
005963C6  8D BE FD 1D 00 00         LEA EDI,[ESI + 0x1dfd]
005963CC  6A 07                     PUSH 0x7
005963CE  6A 31                     PUSH 0x31
005963D0  50                        PUSH EAX
005963D1  8B CF                     MOV ECX,EDI
005963D3  E8 C8 F4 17 00            CALL 0x007158a0
005963D8  A1 84 67 80 00            MOV EAX,[0x00806784]
005963DD  8B 17                     MOV EDX,dword ptr [EDI]
005963DF  6A FF                     PUSH -0x1
005963E1  68 34 C0 7C 00            PUSH 0x7cc034
005963E6  53                        PUSH EBX
005963E7  6A 07                     PUSH 0x7
005963E9  50                        PUSH EAX
005963EA  8B CF                     MOV ECX,EDI
005963EC  FF 52 04                  CALL dword ptr [EDX + 0x4]
005963EF  89 9E 05 1E 00 00         MOV dword ptr [ESI + 0x1e05],EBX
005963F5  8B 47 04                  MOV EAX,dword ptr [EDI + 0x4]
005963F8  83 F8 FF                  CMP EAX,-0x1
005963FB  74 0A                     JZ 0x00596407
005963FD  8B 4F 48                  MOV ECX,dword ptr [EDI + 0x48]
00596400  50                        PUSH EAX
00596401  51                        PUSH ECX
00596402  E8 E9 D6 11 00            CALL 0x006b3af0
LAB_00596407:
00596407  6A 0A                     PUSH 0xa
00596409  6A 0A                     PUSH 0xa
0059640B  53                        PUSH EBX
0059640C  89 9E FB 1C 00 00         MOV dword ptr [ESI + 0x1cfb],EBX
00596412  89 9E F7 1C 00 00         MOV dword ptr [ESI + 0x1cf7],EBX
00596418  89 9E 48 1B 00 00         MOV dword ptr [ESI + 0x1b48],EBX
0059641E  89 9E 44 1B 00 00         MOV dword ptr [ESI + 0x1b44],EBX
00596424  89 9E 8C 1D 00 00         MOV dword ptr [ESI + 0x1d8c],EBX
0059642A  89 9E 88 1D 00 00         MOV dword ptr [ESI + 0x1d88],EBX
00596430  89 9E D9 1B 00 00         MOV dword ptr [ESI + 0x1bd9],EBX
00596436  89 9E D5 1B 00 00         MOV dword ptr [ESI + 0x1bd5],EBX
0059643C  89 9E 1D 1E 00 00         MOV dword ptr [ESI + 0x1e1d],EBX
00596442  89 9E 19 1E 00 00         MOV dword ptr [ESI + 0x1e19],EBX
00596448  89 9E 6A 1C 00 00         MOV dword ptr [ESI + 0x1c6a],EBX
0059644E  89 9E 66 1C 00 00         MOV dword ptr [ESI + 0x1c66],EBX
00596454  E8 97 F0 11 00            CALL 0x006b54f0
00596459  68 1C C0 7C 00            PUSH 0x7cc01c
0059645E  50                        PUSH EAX
0059645F  89 86 08 1B 00 00         MOV dword ptr [ESI + 0x1b08],EAX
00596465  E8 36 F6 11 00            CALL 0x006b5aa0
0059646A  8B 96 08 1B 00 00         MOV EDX,dword ptr [ESI + 0x1b08]
00596470  68 0C C0 7C 00            PUSH 0x7cc00c
00596475  52                        PUSH EDX
00596476  E8 25 F6 11 00            CALL 0x006b5aa0
0059647B  6A 01                     PUSH 0x1
0059647D  8B CE                     MOV ECX,ESI
0059647F  E8 C9 D6 E6 FF            CALL 0x00403b4d
00596484  8B 46 5D                  MOV EAX,dword ptr [ESI + 0x5d]
00596487  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
0059648D  8B 15 9C 75 80 00         MOV EDX,dword ptr [0x0080759c]
00596493  53                        PUSH EBX
00596494  6A 02                     PUSH 0x2
00596496  6A 0A                     PUSH 0xa
00596498  50                        PUSH EAX
00596499  51                        PUSH ECX
0059649A  52                        PUSH EDX
0059649B  E8 EA DF E6 FF            CALL 0x0040448a
005964A0  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
005964A3  83 C4 18                  ADD ESP,0x18
005964A6  80 F9 06                  CMP CL,0x6
005964A9  72 18                     JC 0x005964c3
005964AB  80 F9 08                  CMP CL,0x8
005964AE  77 13                     JA 0x005964c3
005964B0  6A 64                     PUSH 0x64
005964B2  6A 64                     PUSH 0x64
005964B4  53                        PUSH EBX
005964B5  E8 36 F0 11 00            CALL 0x006b54f0
005964BA  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
005964BD  89 86 9E 1E 00 00         MOV dword ptr [ESI + 0x1e9e],EAX
LAB_005964c3:
005964C3  8B C1                     MOV EAX,ECX
005964C5  88 9E 62 1A 00 00         MOV byte ptr [ESI + 0x1a62],BL
005964CB  25 FF 00 00 00            AND EAX,0xff
005964D0  83 E8 06                  SUB EAX,0x6
005964D3  74 2C                     JZ 0x00596501
005964D5  48                        DEC EAX
005964D6  74 1F                     JZ 0x005964f7
005964D8  48                        DEC EAX
005964D9  74 12                     JZ 0x005964ed
005964DB  6A 06                     PUSH 0x6
005964DD  8B CE                     MOV ECX,ESI
005964DF  E8 48 B6 E6 FF            CALL 0x00401b2c
005964E4  C6 86 62 1A 00 00 01      MOV byte ptr [ESI + 0x1a62],0x1
005964EB  EB 23                     JMP 0x00596510
LAB_005964ed:
005964ED  88 8E 5F 1A 00 00         MOV byte ptr [ESI + 0x1a5f],CL
005964F3  6A 0A                     PUSH 0xa
005964F5  EB 12                     JMP 0x00596509
LAB_005964f7:
005964F7  88 8E 5F 1A 00 00         MOV byte ptr [ESI + 0x1a5f],CL
005964FD  6A 07                     PUSH 0x7
005964FF  EB 08                     JMP 0x00596509
LAB_00596501:
00596501  88 8E 5F 1A 00 00         MOV byte ptr [ESI + 0x1a5f],CL
00596507  6A 08                     PUSH 0x8
LAB_00596509:
00596509  8B CE                     MOV ECX,ESI
0059650B  E8 1C B6 E6 FF            CALL 0x00401b2c
LAB_00596510:
00596510  8B 3D 30 2A 80 00         MOV EDI,dword ptr [0x00802a30]
00596516  3B FB                     CMP EDI,EBX
00596518  74 4B                     JZ 0x00596565
0059651A  8B 87 C9 00 00 00         MOV EAX,dword ptr [EDI + 0xc9]
00596520  8B 8F C5 00 00 00         MOV ECX,dword ptr [EDI + 0xc5]
00596526  50                        PUSH EAX
00596527  51                        PUSH ECX
00596528  53                        PUSH EBX
00596529  8B CF                     MOV ECX,EDI
0059652B  C6 87 93 04 00 00 01      MOV byte ptr [EDI + 0x493],0x1
00596532  66 C7 87 94 04 00 00 FF FF  MOV word ptr [EDI + 0x494],0xffff
0059653B  E8 3E EB E6 FF            CALL 0x0040507e
00596540  8B 97 C9 00 00 00         MOV EDX,dword ptr [EDI + 0xc9]
00596546  8B 87 C5 00 00 00         MOV EAX,dword ptr [EDI + 0xc5]
0059654C  52                        PUSH EDX
0059654D  50                        PUSH EAX
0059654E  8B CF                     MOV ECX,EDI
00596550  E8 C9 BE E6 FF            CALL 0x0040241e
00596555  88 9F D2 00 00 00         MOV byte ptr [EDI + 0xd2],BL
0059655B  C7 87 DF 04 00 00 FF FF FF FF  MOV dword ptr [EDI + 0x4df],0xffffffff
LAB_00596565:
00596565  8B 8E 5B 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a5b]
0059656B  8B 89 E6 02 00 00         MOV ECX,dword ptr [ECX + 0x2e6]
00596571  3B CB                     CMP ECX,EBX
00596573  74 1A                     JZ 0x0059658f
00596575  E8 17 EC E6 FF            CALL 0x00405191
0059657A  8B 96 5B 1A 00 00         MOV EDX,dword ptr [ESI + 0x1a5b]
00596580  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
00596583  8B 82 E6 02 00 00         MOV EAX,dword ptr [EDX + 0x2e6]
00596589  89 88 AB 1C 00 00         MOV dword ptr [EAX + 0x1cab],ECX
LAB_0059658f:
0059658F  53                        PUSH EBX
00596590  B9 58 76 80 00            MOV ECX,0x807658
00596595  E8 02 CD E6 FF            CALL 0x0040329c
0059659A  6A FF                     PUSH -0x1
0059659C  53                        PUSH EBX
0059659D  6A 0B                     PUSH 0xb
0059659F  8B CE                     MOV ECX,ESI
005965A1  E8 4B E6 E6 FF            CALL 0x00404bf1
005965A6  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
005965A9  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005965AF  5F                        POP EDI
005965B0  5E                        POP ESI
005965B1  5B                        POP EBX
005965B2  8B E5                     MOV ESP,EBP
005965B4  5D                        POP EBP
005965B5  C2 04 00                  RET 0x4
LAB_005965b8:
005965B8  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
005965BB  68 F8 BF 7C 00            PUSH 0x7cbff8
005965C0  68 CC 4C 7A 00            PUSH 0x7a4ccc
005965C5  56                        PUSH ESI
005965C6  53                        PUSH EBX
005965C7  68 5D 01 00 00            PUSH 0x15d
005965CC  68 70 BF 7C 00            PUSH 0x7cbf70
005965D1  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005965D6  E8 F5 6E 11 00            CALL 0x006ad4d0
005965DB  83 C4 18                  ADD ESP,0x18
005965DE  85 C0                     TEST EAX,EAX
005965E0  74 01                     JZ 0x005965e3
005965E2  CC                        INT3
LAB_005965e3:
005965E3  68 5D 01 00 00            PUSH 0x15d
005965E8  68 70 BF 7C 00            PUSH 0x7cbf70
005965ED  53                        PUSH EBX
005965EE  56                        PUSH ESI
005965EF  E8 4C F8 10 00            CALL 0x006a5e40
005965F4  5F                        POP EDI
005965F5  5E                        POP ESI
005965F6  5B                        POP EBX
005965F7  8B E5                     MOV ESP,EBP
005965F9  5D                        POP EBP
005965FA  C2 04 00                  RET 0x4
