FUN_004fae90:
004FAE90  55                        PUSH EBP
004FAE91  8B EC                     MOV EBP,ESP
004FAE93  83 EC 10                  SUB ESP,0x10
004FAE96  66 83 B9 3F 02 00 00 02   CMP word ptr [ECX + 0x23f],0x2
004FAE9E  8B 51 4C                  MOV EDX,dword ptr [ECX + 0x4c]
004FAEA1  53                        PUSH EBX
004FAEA2  8B 99 D0 00 00 00         MOV EBX,dword ptr [ECX + 0xd0]
004FAEA8  56                        PUSH ESI
004FAEA9  8B B1 A4 00 00 00         MOV ESI,dword ptr [ECX + 0xa4]
004FAEAF  57                        PUSH EDI
004FAEB0  8B 79 78                  MOV EDI,dword ptr [ECX + 0x78]
004FAEB3  0F 84 D2 00 00 00         JZ 0x004faf8b
004FAEB9  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004FAEBC  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
004FAEBF  25 FF FF 00 00            AND EAX,0xffff
004FAEC4  81 E1 FF FF 00 00         AND ECX,0xffff
004FAECA  3B C2                     CMP EAX,EDX
004FAECC  0F 8C B9 00 00 00         JL 0x004faf8b
004FAED2  03 FA                     ADD EDI,EDX
004FAED4  3B C7                     CMP EAX,EDI
004FAED6  0F 8D AF 00 00 00         JGE 0x004faf8b
004FAEDC  3B CE                     CMP ECX,ESI
004FAEDE  0F 8C A7 00 00 00         JL 0x004faf8b
004FAEE4  03 DE                     ADD EBX,ESI
004FAEE6  3B CB                     CMP ECX,EBX
004FAEE8  0F 8D 9D 00 00 00         JGE 0x004faf8b
004FAEEE  8B 3D 84 87 80 00         MOV EDI,dword ptr [0x00808784]
004FAEF4  85 FF                     TEST EDI,EDI
004FAEF6  0F 85 8F 00 00 00         JNZ 0x004faf8b
004FAEFC  8B 3D 88 87 80 00         MOV EDI,dword ptr [0x00808788]
004FAF02  85 FF                     TEST EDI,EDI
004FAF04  0F 85 81 00 00 00         JNZ 0x004faf8b
004FAF0A  8B 3D 8C 87 80 00         MOV EDI,dword ptr [0x0080878c]
004FAF10  85 FF                     TEST EDI,EDI
004FAF12  75 77                     JNZ 0x004faf8b
004FAF14  8B 3D 90 87 80 00         MOV EDI,dword ptr [0x00808790]
004FAF1A  85 FF                     TEST EDI,EDI
004FAF1C  75 6D                     JNZ 0x004faf8b
004FAF1E  8D 7D FC                  LEA EDI,[EBP + -0x4]
004FAF21  2B CE                     SUB ECX,ESI
004FAF23  57                        PUSH EDI
004FAF24  8D 7D 08                  LEA EDI,[EBP + 0x8]
004FAF27  2B C2                     SUB EAX,EDX
004FAF29  83 E9 07                  SUB ECX,0x7
004FAF2C  57                        PUSH EDI
004FAF2D  83 E8 05                  SUB EAX,0x5
004FAF30  51                        PUSH ECX
004FAF31  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
004FAF37  50                        PUSH EAX
004FAF38  E8 83 B9 1E 00            CALL 0x006e68c0
004FAF3D  85 C0                     TEST EAX,EAX
004FAF3F  74 4A                     JZ 0x004faf8b
004FAF41  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004FAF44  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004FAF47  8D 55 0E                  LEA EDX,[EBP + 0xe]
004FAF4A  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
004FAF4D  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004FAF53  52                        PUSH EDX
004FAF54  6A 00                     PUSH 0x0
004FAF56  6A 00                     PUSH 0x0
004FAF58  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
004FAF5B  E8 CD A1 F0 FF            CALL 0x0040512d
004FAF60  85 C0                     TEST EAX,EAX
004FAF62  7C 27                     JL 0x004faf8b
004FAF64  0F BF 45 0E               MOVSX EAX,word ptr [EBP + 0xe]
004FAF68  85 C0                     TEST EAX,EAX
004FAF6A  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
004FAF6D  7D 07                     JGE 0x004faf76
004FAF6F  C7 45 F8 02 00 00 00      MOV dword ptr [EBP + -0x8],0x2
LAB_004faf76:
004FAF76  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004FAF7C  6A FF                     PUSH -0x1
004FAF7E  8D 45 F0                  LEA EAX,[EBP + -0x10]
004FAF81  6A 00                     PUSH 0x0
004FAF83  50                        PUSH EAX
004FAF84  6A 14                     PUSH 0x14
004FAF86  E8 A8 8C F0 FF            CALL 0x00403c33
LAB_004faf8b:
004FAF8B  5F                        POP EDI
004FAF8C  5E                        POP ESI
004FAF8D  5B                        POP EBX
004FAF8E  8B E5                     MOV ESP,EBP
004FAF90  5D                        POP EBP
004FAF91  C2 08 00                  RET 0x8
