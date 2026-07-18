PrividerTy::GetMessage:
005BC5E0  55                        PUSH EBP
005BC5E1  8B EC                     MOV EBP,ESP
005BC5E3  81 EC 88 00 00 00         SUB ESP,0x88
005BC5E9  53                        PUSH EBX
005BC5EA  56                        PUSH ESI
005BC5EB  8B F1                     MOV ESI,ECX
005BC5ED  57                        PUSH EDI
005BC5EE  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
005BC5F1  8B 4E 10                  MOV ECX,dword ptr [ESI + 0x10]
005BC5F4  E8 B7 8B 12 00            CALL 0x006e51b0
005BC5F9  33 FF                     XOR EDI,EDI
005BC5FB  89 46 61                  MOV dword ptr [ESI + 0x61],EAX
005BC5FE  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005BC603  8D 95 7C FF FF FF         LEA EDX,[EBP + 0xffffff7c]
005BC609  8D 8D 78 FF FF FF         LEA ECX,[EBP + 0xffffff78]
005BC60F  57                        PUSH EDI
005BC610  52                        PUSH EDX
005BC611  89 85 78 FF FF FF         MOV dword ptr [EBP + 0xffffff78],EAX
005BC617  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005BC61D  E8 CE 11 17 00            CALL 0x0072d7f0
005BC622  8B F0                     MOV ESI,EAX
005BC624  83 C4 08                  ADD ESP,0x8
005BC627  3B F7                     CMP ESI,EDI
005BC629  0F 85 6D 09 00 00         JNZ 0x005bcf9c
005BC62F  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
005BC632  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
005BC635  53                        PUSH EBX
005BC636  8B CE                     MOV ECX,ESI
005BC638  E8 26 5F E4 FF            CALL 0x00402563
005BC63D  8B 43 10                  MOV EAX,dword ptr [EBX + 0x10]
005BC640  3D 40 69 00 00            CMP EAX,0x6940
005BC645  0F 87 68 03 00 00         JA 0x005bc9b3
005BC64B  0F 84 56 03 00 00         JZ 0x005bc9a7
005BC651  3D 1F 61 00 00            CMP EAX,0x611f
005BC656  0F 87 88 00 00 00         JA 0x005bc6e4
005BC65C  0F 84 4F 02 00 00         JZ 0x005bc8b1
005BC662  83 F8 05                  CMP EAX,0x5
005BC665  77 4E                     JA 0x005bc6b5
005BC667  74 3F                     JZ 0x005bc6a8
005BC669  2B C7                     SUB EAX,EDI
005BC66B  74 2F                     JZ 0x005bc69c
005BC66D  83 E8 02                  SUB EAX,0x2
005BC670  74 13                     JZ 0x005bc685
005BC672  48                        DEC EAX
005BC673  0F 85 06 09 00 00         JNZ 0x005bcf7f
005BC679  8B CE                     MOV ECX,ESI
005BC67B  E8 77 5C E4 FF            CALL 0x004022f7
005BC680  E9 FA 08 00 00            JMP 0x005bcf7f
LAB_005bc685:
005BC685  8B 43 14                  MOV EAX,dword ptr [EBX + 0x14]
005BC688  8A 48 18                  MOV CL,byte ptr [EAX + 0x18]
005BC68B  8A 50 14                  MOV DL,byte ptr [EAX + 0x14]
005BC68E  51                        PUSH ECX
005BC68F  52                        PUSH EDX
005BC690  8B CE                     MOV ECX,ESI
005BC692  E8 F7 74 E4 FF            CALL 0x00403b8e
005BC697  E9 E3 08 00 00            JMP 0x005bcf7f
LAB_005bc69c:
005BC69C  8B CE                     MOV ECX,ESI
005BC69E  E8 F8 7B E4 FF            CALL 0x0040429b
005BC6A3  E9 D7 08 00 00            JMP 0x005bcf7f
LAB_005bc6a8:
005BC6A8  57                        PUSH EDI
005BC6A9  8B CE                     MOV ECX,ESI
005BC6AB  E8 A2 97 E4 FF            CALL 0x00405e52
005BC6B0  E9 CA 08 00 00            JMP 0x005bcf7f
LAB_005bc6b5:
005BC6B5  2D 09 61 00 00            SUB EAX,0x6109
005BC6BA  0F 84 F1 01 00 00         JZ 0x005bc8b1
005BC6C0  48                        DEC EAX
005BC6C1  0F 85 B8 08 00 00         JNZ 0x005bcf7f
005BC6C7  8B CE                     MOV ECX,ESI
005BC6C9  C7 46 45 00 02 00 00      MOV dword ptr [ESI + 0x45],0x200
005BC6D0  89 7E 49                  MOV dword ptr [ESI + 0x49],EDI
005BC6D3  C7 46 4D 0A 61 00 00      MOV dword ptr [ESI + 0x4d],0x610a
005BC6DA  E8 D9 86 E4 FF            CALL 0x00404db8
005BC6DF  E9 9B 08 00 00            JMP 0x005bcf7f
LAB_005bc6e4:
005BC6E4  3D 01 65 00 00            CMP EAX,0x6501
005BC6E9  0F 87 F5 01 00 00         JA 0x005bc8e4
005BC6EF  0F 84 AE 05 00 00         JZ 0x005bcca3
005BC6F5  3D 21 61 00 00            CMP EAX,0x6121
005BC6FA  0F 84 B1 01 00 00         JZ 0x005bc8b1
005BC700  3D 1F 63 00 00            CMP EAX,0x631f
005BC705  0F 84 FC 00 00 00         JZ 0x005bc807
005BC70B  3D FF 64 00 00            CMP EAX,0x64ff
005BC710  0F 85 69 08 00 00         JNZ 0x005bcf7f
005BC716  C6 86 71 1A 00 00 00      MOV byte ptr [ESI + 0x1a71],0x0
005BC71D  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005BC723  E8 12 91 E4 FF            CALL 0x0040583a
005BC728  85 C0                     TEST EAX,EAX
005BC72A  0F 85 4F 08 00 00         JNZ 0x005bcf7f
005BC730  89 46 31                  MOV dword ptr [ESI + 0x31],EAX
005BC733  8B 86 73 1A 00 00         MOV EAX,dword ptr [ESI + 0x1a73]
005BC739  8D 7E 1D                  LEA EDI,[ESI + 0x1d]
005BC73C  8B CE                     MOV ECX,ESI
005BC73E  57                        PUSH EDI
005BC73F  50                        PUSH EAX
005BC740  6A 02                     PUSH 0x2
005BC742  C7 46 2D 20 00 00 00      MOV dword ptr [ESI + 0x2d],0x20
005BC749  E8 32 99 12 00            CALL 0x006e6080
005BC74E  C7 46 2D 28 00 00 00      MOV dword ptr [ESI + 0x2d],0x28
005BC755  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005BC75B  57                        PUSH EDI
005BC75C  8B 91 8E 06 00 00         MOV EDX,dword ptr [ECX + 0x68e]
005BC762  33 C9                     XOR ECX,ECX
005BC764  8B 42 04                  MOV EAX,dword ptr [EDX + 0x4]
005BC767  8B 96 73 1A 00 00         MOV EDX,dword ptr [ESI + 0x1a73]
005BC76D  85 C0                     TEST EAX,EAX
005BC76F  0F 9C C1                  SETL CL
005BC772  49                        DEC ECX
005BC773  52                        PUSH EDX
005BC774  23 C1                     AND EAX,ECX
005BC776  6A 02                     PUSH 0x2
005BC778  8B CE                     MOV ECX,ESI
005BC77A  89 46 31                  MOV dword ptr [ESI + 0x31],EAX
005BC77D  E8 FE 98 12 00            CALL 0x006e6080
005BC782  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005BC787  8B 88 8E 06 00 00         MOV ECX,dword ptr [EAX + 0x68e]
005BC78D  8B 41 04                  MOV EAX,dword ptr [ECX + 0x4]
005BC790  85 C0                     TEST EAX,EAX
005BC792  7E 1F                     JLE 0x005bc7b3
005BC794  8B 96 73 1A 00 00         MOV EDX,dword ptr [ESI + 0x1a73]
005BC79A  57                        PUSH EDI
005BC79B  52                        PUSH EDX
005BC79C  6A 02                     PUSH 0x2
005BC79E  8B CE                     MOV ECX,ESI
005BC7A0  C7 46 2D 20 00 00 00      MOV dword ptr [ESI + 0x2d],0x20
005BC7A7  C7 46 31 01 00 00 00      MOV dword ptr [ESI + 0x31],0x1
005BC7AE  E8 CD 98 12 00            CALL 0x006e6080
LAB_005bc7b3:
005BC7B3  8B 96 5B 1A 00 00         MOV EDX,dword ptr [ESI + 0x1a5b]
005BC7B9  8B 82 E6 02 00 00         MOV EAX,dword ptr [EDX + 0x2e6]
005BC7BF  85 C0                     TEST EAX,EAX
005BC7C1  0F 84 B8 07 00 00         JZ 0x005bcf7f
005BC7C7  B9 06 00 00 00            MOV ECX,0x6
005BC7CC  33 C0                     XOR EAX,EAX
005BC7CE  8D 7D BC                  LEA EDI,[EBP + -0x44]
005BC7D1  F3 AB                     STOSD.REP ES:EDI
005BC7D3  66 AB                     STOSW ES:EDI
005BC7D5  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005BC7DA  8B 88 8E 06 00 00         MOV ECX,dword ptr [EAX + 0x68e]
005BC7E0  33 C0                     XOR EAX,EAX
005BC7E2  8B 79 04                  MOV EDI,dword ptr [ECX + 0x4]
005BC7E5  8D 4D BC                  LEA ECX,[EBP + -0x44]
005BC7E8  85 FF                     TEST EDI,EDI
005BC7EA  0F 9E C0                  SETLE AL
005BC7ED  48                        DEC EAX
005BC7EE  51                        PUSH ECX
005BC7EF  83 E0 02                  AND EAX,0x2
005BC7F2  48                        DEC EAX
005BC7F3  66 89 45 BE               MOV word ptr [EBP + -0x42],AX
005BC7F7  8B 8A E6 02 00 00         MOV ECX,dword ptr [EDX + 0x2e6]
005BC7FD  E8 4F 83 E4 FF            CALL 0x00404b51
005BC802  E9 78 07 00 00            JMP 0x005bcf7f
LAB_005bc807:
005BC807  8B 96 8E 1C 00 00         MOV EDX,dword ptr [ESI + 0x1c8e]
005BC80D  68 FF 00 00 00            PUSH 0xff
005BC812  6A 16                     PUSH 0x16
005BC814  68 2C 02 00 00            PUSH 0x22c
005BC819  6A 16                     PUSH 0x16
005BC81B  6A 03                     PUSH 0x3
005BC81D  57                        PUSH EDI
005BC81E  52                        PUSH EDX
005BC81F  E8 4C 79 0F 00            CALL 0x006b4170
005BC824  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005BC82A  8B 86 8E 1C 00 00         MOV EAX,dword ptr [ESI + 0x1c8e]
005BC830  6A 16                     PUSH 0x16
005BC832  68 26 02 00 00            PUSH 0x226
005BC837  8B 49 30                  MOV ECX,dword ptr [ECX + 0x30]
005BC83A  6A 16                     PUSH 0x16
005BC83C  6A 05                     PUSH 0x5
005BC83E  57                        PUSH EDI
005BC83F  50                        PUSH EAX
005BC840  E8 4B 42 15 00            CALL 0x00710a90
005BC845  8B 53 14                  MOV EDX,dword ptr [EBX + 0x14]
005BC848  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005BC84E  6A 03                     PUSH 0x3
005BC850  6A FF                     PUSH -0x1
005BC852  8B 02                     MOV EAX,dword ptr [EDX]
005BC854  8B 49 30                  MOV ECX,dword ptr [ECX + 0x30]
005BC857  57                        PUSH EDI
005BC858  50                        PUSH EAX
005BC859  E8 62 51 15 00            CALL 0x007119c0
005BC85E  66 8B 4B 18               MOV CX,word ptr [EBX + 0x18]
005BC862  66 81 F9 FF FF            CMP CX,0xffff
005BC867  75 06                     JNZ 0x005bc86f
005BC869  66 39 4B 1A               CMP word ptr [EBX + 0x1a],CX
005BC86D  74 2A                     JZ 0x005bc899
LAB_005bc86f:
005BC86F  33 C0                     XOR EAX,EAX
005BC871  81 E1 FF FF 00 00         AND ECX,0xffff
005BC877  66 8B 43 1A               MOV AX,word ptr [EBX + 0x1a]
005BC87B  6A 0D                     PUSH 0xd
005BC87D  83 C1 05                  ADD ECX,0x5
005BC880  6A 09                     PUSH 0x9
005BC882  8D 50 28                  LEA EDX,[EAX + 0x28]
005BC885  83 C0 19                  ADD EAX,0x19
005BC888  52                        PUSH EDX
005BC889  51                        PUSH ECX
005BC88A  50                        PUSH EAX
005BC88B  8B 86 8E 1C 00 00         MOV EAX,dword ptr [ESI + 0x1c8e]
005BC891  51                        PUSH ECX
005BC892  57                        PUSH EDI
005BC893  50                        PUSH EAX
005BC894  E8 77 92 0F 00            CALL 0x006b5b10
LAB_005bc899:
005BC899  8B 8E 8A 1C 00 00         MOV ECX,dword ptr [ESI + 0x1c8a]
005BC89F  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005BC8A5  51                        PUSH ECX
005BC8A6  52                        PUSH EDX
005BC8A7  E8 24 6D 0F 00            CALL 0x006b35d0
005BC8AC  E9 CE 06 00 00            JMP 0x005bcf7f
LAB_005bc8b1:
005BC8B1  8B 8E 5B 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a5b]
005BC8B7  E8 54 8C E4 FF            CALL 0x00405510
005BC8BC  C7 46 45 00 02 00 00      MOV dword ptr [ESI + 0x45],0x200
005BC8C3  89 7E 49                  MOV dword ptr [ESI + 0x49],EDI
005BC8C6  8B 43 10                  MOV EAX,dword ptr [EBX + 0x10]
005BC8C9  89 46 4D                  MOV dword ptr [ESI + 0x4d],EAX
005BC8CC  8B 4B 14                  MOV ECX,dword ptr [EBX + 0x14]
005BC8CF  89 4E 51                  MOV dword ptr [ESI + 0x51],ECX
005BC8D2  8B 53 18                  MOV EDX,dword ptr [EBX + 0x18]
005BC8D5  8B CE                     MOV ECX,ESI
005BC8D7  89 56 55                  MOV dword ptr [ESI + 0x55],EDX
005BC8DA  E8 D9 84 E4 FF            CALL 0x00404db8
005BC8DF  E9 9B 06 00 00            JMP 0x005bcf7f
LAB_005bc8e4:
005BC8E4  3D 02 65 00 00            CMP EAX,0x6502
005BC8E9  74 17                     JZ 0x005bc902
005BC8EB  3D 3F 69 00 00            CMP EAX,0x693f
005BC8F0  0F 85 89 06 00 00         JNZ 0x005bcf7f
005BC8F6  8B CE                     MOV ECX,ESI
005BC8F8  E8 60 8F E4 FF            CALL 0x0040585d
005BC8FD  E9 7D 06 00 00            JMP 0x005bcf7f
LAB_005bc902:
005BC902  8B 86 61 1A 00 00         MOV EAX,dword ptr [ESI + 0x1a61]
005BC908  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005BC90E  50                        PUSH EAX
005BC90F  E8 B6 86 E4 FF            CALL 0x00404fca
005BC914  85 C0                     TEST EAX,EAX
005BC916  0F 85 9D 03 00 00         JNZ 0x005bccb9
005BC91C  8B 8E 61 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a61]
005BC922  88 86 71 1A 00 00         MOV byte ptr [ESI + 0x1a71],AL
005BC928  51                        PUSH ECX
005BC929  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005BC92F  E8 2C 5A E4 FF            CALL 0x00402360
005BC934  85 C0                     TEST EAX,EAX
005BC936  0F 85 43 06 00 00         JNZ 0x005bcf7f
005BC93C  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005BC942  E8 F3 8E E4 FF            CALL 0x0040583a
005BC947  85 C0                     TEST EAX,EAX
005BC949  0F 85 30 06 00 00         JNZ 0x005bcf7f
005BC94F  57                        PUSH EDI
005BC950  8B CE                     MOV ECX,ESI
005BC952  A2 7E 87 80 00            MOV [0x0080877e],AL
005BC957  E8 30 83 E4 FF            CALL 0x00404c8c
005BC95C  8B 86 5B 1A 00 00         MOV EAX,dword ptr [ESI + 0x1a5b]
005BC962  39 B8 E6 02 00 00         CMP dword ptr [EAX + 0x2e6],EDI
005BC968  74 2D                     JZ 0x005bc997
005BC96A  33 D2                     XOR EDX,EDX
005BC96C  8D 4D E8                  LEA ECX,[EBP + -0x18]
005BC96F  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
005BC972  C6 45 EA 01               MOV byte ptr [EBP + -0x16],0x1
005BC976  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
005BC979  C6 45 EF 01               MOV byte ptr [EBP + -0x11],0x1
005BC97D  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
005BC980  C6 45 E9 01               MOV byte ptr [EBP + -0x17],0x1
005BC984  88 55 F4                  MOV byte ptr [EBP + -0xc],DL
005BC987  C6 45 E8 01               MOV byte ptr [EBP + -0x18],0x1
005BC98B  51                        PUSH ECX
005BC98C  8B 88 E6 02 00 00         MOV ECX,dword ptr [EAX + 0x2e6]
005BC992  E8 04 51 E4 FF            CALL 0x00401a9b
LAB_005bc997:
005BC997  C6 46 65 05               MOV byte ptr [ESI + 0x65],0x5
005BC99B  C6 86 60 1A 00 00 01      MOV byte ptr [ESI + 0x1a60],0x1
005BC9A2  E9 D8 05 00 00            JMP 0x005bcf7f
LAB_005bc9a7:
005BC9A7  8B CE                     MOV ECX,ESI
005BC9A9  E8 B5 51 E4 FF            CALL 0x00401b63
005BC9AE  E9 CC 05 00 00            JMP 0x005bcf7f
LAB_005bc9b3:
005BC9B3  3D 60 81 00 00            CMP EAX,0x8160
005BC9B8  0F 87 70 04 00 00         JA 0x005bce2e
005BC9BE  0F 84 5E 04 00 00         JZ 0x005bce22
005BC9C4  05 BE 96 FF FF            ADD EAX,0xffff96be
005BC9C9  83 F8 10                  CMP EAX,0x10
005BC9CC  0F 87 AD 05 00 00         JA 0x005bcf7f
005BC9D2  33 D2                     XOR EDX,EDX
005BC9D4  8A 90 08 D0 5B 00         MOV DL,byte ptr [EAX + 0x5bd008]
switchD_005bc9da::switchD:
005BC9DA  FF 24 95 EC CF 5B 00      JMP dword ptr [EDX*0x4 + 0x5bcfec]
switchD_005bc9da::caseD_6943:
005BC9E1  C6 05 7E 87 80 00 01      MOV byte ptr [0x0080877e],0x1
005BC9E8  8B 43 14                  MOV EAX,dword ptr [EBX + 0x14]
005BC9EB  57                        PUSH EDI
005BC9EC  50                        PUSH EAX
005BC9ED  68 42 69 00 00            PUSH 0x6942
005BC9F2  8B CE                     MOV ECX,ESI
005BC9F4  E8 C7 6C E4 FF            CALL 0x004036c0
005BC9F9  6A 01                     PUSH 0x1
005BC9FB  8B CE                     MOV ECX,ESI
005BC9FD  E8 8A 82 E4 FF            CALL 0x00404c8c
005BCA02  8B 8E 5B 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a5b]
005BCA08  8B 89 E6 02 00 00         MOV ECX,dword ptr [ECX + 0x2e6]
005BCA0E  E9 62 03 00 00            JMP 0x005bcd75
switchD_005bc9da::caseD_6942:
005BCA13  C7 46 45 00 02 00 00      MOV dword ptr [ESI + 0x45],0x200
005BCA1A  89 7E 49                  MOV dword ptr [ESI + 0x49],EDI
005BCA1D  C7 46 4D 02 61 00 00      MOV dword ptr [ESI + 0x4d],0x6102
005BCA24  8B 53 14                  MOV EDX,dword ptr [EBX + 0x14]
005BCA27  8B CE                     MOV ECX,ESI
005BCA29  89 56 51                  MOV dword ptr [ESI + 0x51],EDX
005BCA2C  E8 87 83 E4 FF            CALL 0x00404db8
005BCA31  E9 49 05 00 00            JMP 0x005bcf7f
switchD_005bc9da::caseD_6951:
005BCA36  57                        PUSH EDI
005BCA37  57                        PUSH EDI
005BCA38  68 0A 61 00 00            PUSH 0x610a
005BCA3D  8B CE                     MOV ECX,ESI
005BCA3F  C6 05 7E 87 80 00 01      MOV byte ptr [0x0080877e],0x1
005BCA46  E8 75 6C E4 FF            CALL 0x004036c0
005BCA4B  6A 01                     PUSH 0x1
005BCA4D  8B CE                     MOV ECX,ESI
005BCA4F  E8 38 82 E4 FF            CALL 0x00404c8c
005BCA54  8B 86 5B 1A 00 00         MOV EAX,dword ptr [ESI + 0x1a5b]
005BCA5A  8B 88 E6 02 00 00         MOV ECX,dword ptr [EAX + 0x2e6]
005BCA60  E9 10 03 00 00            JMP 0x005bcd75
switchD_005bc9da::caseD_6952:
005BCA65  C6 86 71 1A 00 00 00      MOV byte ptr [ESI + 0x1a71],0x0
005BCA6C  A1 30 2A 80 00            MOV EAX,[0x00802a30]
005BCA71  85 C0                     TEST EAX,EAX
005BCA73  BF 01 00 00 00            MOV EDI,0x1
005BCA78  C6 05 7E 87 80 00 01      MOV byte ptr [0x0080877e],0x1
005BCA7F  74 54                     JZ 0x005bcad5
005BCA81  8B F8                     MOV EDI,EAX
005BCA83  8B 8F C9 00 00 00         MOV ECX,dword ptr [EDI + 0xc9]
005BCA89  8B 97 C5 00 00 00         MOV EDX,dword ptr [EDI + 0xc5]
005BCA8F  51                        PUSH ECX
005BCA90  52                        PUSH EDX
005BCA91  6A 00                     PUSH 0x0
005BCA93  8B CF                     MOV ECX,EDI
005BCA95  C6 87 93 04 00 00 01      MOV byte ptr [EDI + 0x493],0x1
005BCA9C  66 C7 87 94 04 00 00 FF FF  MOV word ptr [EDI + 0x494],0xffff
005BCAA5  E8 D4 85 E4 FF            CALL 0x0040507e
005BCAAA  8B 87 C9 00 00 00         MOV EAX,dword ptr [EDI + 0xc9]
005BCAB0  8B 8F C5 00 00 00         MOV ECX,dword ptr [EDI + 0xc5]
005BCAB6  50                        PUSH EAX
005BCAB7  51                        PUSH ECX
005BCAB8  8B CF                     MOV ECX,EDI
005BCABA  E8 5F 59 E4 FF            CALL 0x0040241e
005BCABF  C6 87 D2 00 00 00 00      MOV byte ptr [EDI + 0xd2],0x0
005BCAC6  C7 87 DF 04 00 00 FF FF FF FF  MOV dword ptr [EDI + 0x4df],0xffffffff
005BCAD0  BF 01 00 00 00            MOV EDI,0x1
LAB_005bcad5:
005BCAD5  8A 86 5F 1A 00 00         MOV AL,byte ptr [ESI + 0x1a5f]
005BCADB  6A 00                     PUSH 0x0
005BCADD  84 C0                     TEST AL,AL
005BCADF  75 3A                     JNZ 0x005bcb1b
005BCAE1  8B 53 14                  MOV EDX,dword ptr [EBX + 0x14]
005BCAE4  8B CE                     MOV ECX,ESI
005BCAE6  52                        PUSH EDX
005BCAE7  68 42 69 00 00            PUSH 0x6942
005BCAEC  E8 CF 6B E4 FF            CALL 0x004036c0
005BCAF1  57                        PUSH EDI
005BCAF2  8B CE                     MOV ECX,ESI
005BCAF4  E8 93 81 E4 FF            CALL 0x00404c8c
005BCAF9  8B 86 5B 1A 00 00         MOV EAX,dword ptr [ESI + 0x1a5b]
005BCAFF  8B 88 E6 02 00 00         MOV ECX,dword ptr [EAX + 0x2e6]
005BCB05  85 C9                     TEST ECX,ECX
005BCB07  0F 84 72 04 00 00         JZ 0x005bcf7f
005BCB0D  57                        PUSH EDI
005BCB0E  6A 00                     PUSH 0x0
005BCB10  57                        PUSH EDI
005BCB11  E8 8F 54 E4 FF            CALL 0x00401fa5
005BCB16  E9 64 04 00 00            JMP 0x005bcf7f
LAB_005bcb1b:
005BCB1B  8B CE                     MOV ECX,ESI
005BCB1D  E8 6A 81 E4 FF            CALL 0x00404c8c
005BCB22  8B 86 5B 1A 00 00         MOV EAX,dword ptr [ESI + 0x1a5b]
005BCB28  8B 88 E6 02 00 00         MOV ECX,dword ptr [EAX + 0x2e6]
005BCB2E  85 C9                     TEST ECX,ECX
005BCB30  74 29                     JZ 0x005bcb5b
005BCB32  33 C9                     XOR ECX,ECX
005BCB34  8D 55 D8                  LEA EDX,[EBP + -0x28]
005BCB37  89 4D D8                  MOV dword ptr [EBP + -0x28],ECX
005BCB3A  C6 45 DA 01               MOV byte ptr [EBP + -0x26],0x1
005BCB3E  89 4D DC                  MOV dword ptr [EBP + -0x24],ECX
005BCB41  C6 45 D9 01               MOV byte ptr [EBP + -0x27],0x1
005BCB45  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
005BCB48  C6 45 DD 01               MOV byte ptr [EBP + -0x23],0x1
005BCB4C  88 4D E4                  MOV byte ptr [EBP + -0x1c],CL
005BCB4F  8B 88 E6 02 00 00         MOV ECX,dword ptr [EAX + 0x2e6]
005BCB55  52                        PUSH EDX
005BCB56  E8 40 4F E4 FF            CALL 0x00401a9b
LAB_005bcb5b:
005BCB5B  8B 86 8A 1C 00 00         MOV EAX,dword ptr [ESI + 0x1c8a]
005BCB61  C6 46 65 05               MOV byte ptr [ESI + 0x65],0x5
005BCB65  C6 86 60 1A 00 00 00      MOV byte ptr [ESI + 0x1a60],0x0
005BCB6C  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005BCB72  50                        PUSH EAX
005BCB73  51                        PUSH ECX
005BCB74  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
005BCB7B  E8 B0 68 0F 00            CALL 0x006b3430
005BCB80  8B 96 5B 1A 00 00         MOV EDX,dword ptr [ESI + 0x1a5b]
005BCB86  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005BCB8C  81 C2 40 01 00 00         ADD EDX,0x140
005BCB92  8D 45 FC                  LEA EAX,[EBP + -0x4]
005BCB95  52                        PUSH EDX
005BCB96  6A 2E                     PUSH 0x2e
005BCB98  68 2E 02 00 00            PUSH 0x22e
005BCB9D  68 13 2F 40 00            PUSH 0x402f13
005BCBA2  6A 32                     PUSH 0x32
005BCBA4  50                        PUSH EAX
005BCBA5  51                        PUSH ECX
005BCBA6  E8 85 57 0F 00            CALL 0x006b2330
005BCBAB  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
005BCBAE  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005BCBB3  68 97 01 00 00            PUSH 0x197
005BCBB8  6A 79                     PUSH 0x79
005BCBBA  6A FF                     PUSH -0x1
005BCBBC  52                        PUSH EDX
005BCBBD  50                        PUSH EAX
005BCBBE  E8 7D 6A 0F 00            CALL 0x006b3640
005BCBC3  6A 33                     PUSH 0x33
005BCBC5  E8 66 19 17 00            CALL 0x0072e530
005BCBCA  83 C4 04                  ADD ESP,0x4
005BCBCD  85 C0                     TEST EAX,EAX
005BCBCF  74 33                     JZ 0x005bcc04
005BCBD1  83 CA FF                  OR EDX,0xffffffff
005BCBD4  33 C9                     XOR ECX,ECX
005BCBD6  C6 40 02 01               MOV byte ptr [EAX + 0x2],0x1
005BCBDA  C6 00 00                  MOV byte ptr [EAX],0x0
005BCBDD  89 50 03                  MOV dword ptr [EAX + 0x3],EDX
005BCBE0  C6 40 01 02               MOV byte ptr [EAX + 0x1],0x2
005BCBE4  89 48 07                  MOV dword ptr [EAX + 0x7],ECX
005BCBE7  89 48 0B                  MOV dword ptr [EAX + 0xb],ECX
005BCBEA  89 48 0F                  MOV dword ptr [EAX + 0xf],ECX
005BCBED  89 78 1B                  MOV dword ptr [EAX + 0x1b],EDI
005BCBF0  89 78 13                  MOV dword ptr [EAX + 0x13],EDI
005BCBF3  89 50 17                  MOV dword ptr [EAX + 0x17],EDX
005BCBF6  89 48 27                  MOV dword ptr [EAX + 0x27],ECX
005BCBF9  89 48 23                  MOV dword ptr [EAX + 0x23],ECX
005BCBFC  89 78 2F                  MOV dword ptr [EAX + 0x2f],EDI
005BCBFF  89 78 2B                  MOV dword ptr [EAX + 0x2b],EDI
005BCC02  EB 04                     JMP 0x005bcc08
LAB_005bcc04:
005BCC04  33 C0                     XOR EAX,EAX
005BCC06  33 C9                     XOR ECX,ECX
LAB_005bcc08:
005BCC08  3B C1                     CMP EAX,ECX
005BCC0A  89 86 9A 1C 00 00         MOV dword ptr [ESI + 0x1c9a],EAX
005BCC10  74 74                     JZ 0x005bcc86
005BCC12  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005BCC18  6A 00                     PUSH 0x0
005BCC1A  57                        PUSH EDI
005BCC1B  6A 10                     PUSH 0x10
005BCC1D  57                        PUSH EDI
005BCC1E  6A 2E                     PUSH 0x2e
005BCC20  68 2E 02 00 00            PUSH 0x22e
005BCC25  68 97 01 00 00            PUSH 0x197
005BCC2A  6A 79                     PUSH 0x79
005BCC2C  51                        PUSH ECX
005BCC2D  E8 BE 2D 10 00            CALL 0x006bf9f0
005BCC32  8B 8E 9A 1C 00 00         MOV ECX,dword ptr [ESI + 0x1c9a]
005BCC38  50                        PUSH EAX
005BCC39  68 97 01 00 00            PUSH 0x197
005BCC3E  6A 79                     PUSH 0x79
005BCC40  57                        PUSH EDI
005BCC41  E8 57 79 E4 FF            CALL 0x0040459d
005BCC46  85 C0                     TEST EAX,EAX
005BCC48  74 3C                     JZ 0x005bcc86
005BCC4A  8B 86 9A 1C 00 00         MOV EAX,dword ptr [ESI + 0x1c9a]
005BCC50  8B 50 13                  MOV EDX,dword ptr [EAX + 0x13]
005BCC53  C6 40 02 01               MOV byte ptr [EAX + 0x2],0x1
005BCC57  89 50 17                  MOV dword ptr [EAX + 0x17],EDX
005BCC5A  8B 86 9A 1C 00 00         MOV EAX,dword ptr [ESI + 0x1c9a]
005BCC60  8B 40 03                  MOV EAX,dword ptr [EAX + 0x3]
005BCC63  85 C0                     TEST EAX,EAX
005BCC65  7C 0C                     JL 0x005bcc73
005BCC67  50                        PUSH EAX
005BCC68  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005BCC6D  50                        PUSH EAX
005BCC6E  E8 BD 67 0F 00            CALL 0x006b3430
LAB_005bcc73:
005BCC73  8B 8E 8A 1C 00 00         MOV ECX,dword ptr [ESI + 0x1c8a]
005BCC79  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005BCC7F  51                        PUSH ECX
005BCC80  52                        PUSH EDX
005BCC81  E8 6A 6E 0F 00            CALL 0x006b3af0
LAB_005bcc86:
005BCC86  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005BCC89  83 F8 FF                  CMP EAX,-0x1
005BCC8C  0F 84 ED 02 00 00         JZ 0x005bcf7f
005BCC92  50                        PUSH EAX
005BCC93  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005BCC98  50                        PUSH EAX
005BCC99  E8 12 6F 0F 00            CALL 0x006b3bb0
005BCC9E  E9 DC 02 00 00            JMP 0x005bcf7f
switchD_005bc9da::caseD_6949:
005BCCA3  8B 8E 61 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a61]
005BCCA9  51                        PUSH ECX
005BCCAA  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005BCCB0  E8 15 83 E4 FF            CALL 0x00404fca
005BCCB5  85 C0                     TEST EAX,EAX
005BCCB7  74 16                     JZ 0x005bcccf
LAB_005bccb9:
005BCCB9  8B 16                     MOV EDX,dword ptr [ESI]
005BCCBB  8D 46 3D                  LEA EAX,[ESI + 0x3d]
005BCCBE  50                        PUSH EAX
005BCCBF  8B CE                     MOV ECX,ESI
005BCCC1  C7 46 4D 51 69 00 00      MOV dword ptr [ESI + 0x4d],0x6951
005BCCC8  FF 12                     CALL dword ptr [EDX]
005BCCCA  E9 B0 02 00 00            JMP 0x005bcf7f
LAB_005bcccf:
005BCCCF  8B 8E 61 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a61]
005BCCD5  51                        PUSH ECX
005BCCD6  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005BCCDC  E8 7F 56 E4 FF            CALL 0x00402360
005BCCE1  85 C0                     TEST EAX,EAX
005BCCE3  0F 85 96 02 00 00         JNZ 0x005bcf7f
005BCCE9  8B 86 92 1C 00 00         MOV EAX,dword ptr [ESI + 0x1c92]
005BCCEF  39 78 08                  CMP dword ptr [EAX + 0x8],EDI
005BCCF2  7E 07                     JLE 0x005bccfb
005BCCF4  8B 50 14                  MOV EDX,dword ptr [EAX + 0x14]
005BCCF7  8B 02                     MOV EAX,dword ptr [EDX]
005BCCF9  EB 02                     JMP 0x005bccfd
LAB_005bccfb:
005BCCFB  33 C0                     XOR EAX,EAX
LAB_005bccfd:
005BCCFD  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005BCD03  50                        PUSH EAX
005BCD04  57                        PUSH EDI
005BCD05  E8 20 7D E4 FF            CALL 0x00404a2a
005BCD0A  85 C0                     TEST EAX,EAX
005BCD0C  74 29                     JZ 0x005bcd37
005BCD0E  8B 86 5B 1A 00 00         MOV EAX,dword ptr [ESI + 0x1a5b]
005BCD14  8B 88 E6 02 00 00         MOV ECX,dword ptr [EAX + 0x2e6]
005BCD1A  3B CF                     CMP ECX,EDI
005BCD1C  0F 84 5D 02 00 00         JZ 0x005bcf7f
005BCD22  57                        PUSH EDI
005BCD23  57                        PUSH EDI
005BCD24  57                        PUSH EDI
005BCD25  57                        PUSH EDI
005BCD26  57                        PUSH EDI
005BCD27  57                        PUSH EDI
005BCD28  68 34 21 00 00            PUSH 0x2134
005BCD2D  E8 76 72 E4 FF            CALL 0x00403fa8
005BCD32  E9 48 02 00 00            JMP 0x005bcf7f
LAB_005bcd37:
005BCD37  C6 05 7E 87 80 00 01      MOV byte ptr [0x0080877e],0x1
005BCD3E  8B 4B 10                  MOV ECX,dword ptr [EBX + 0x10]
005BCD41  81 E9 01 65 00 00         SUB ECX,0x6501
005BCD47  6A 11                     PUSH 0x11
005BCD49  F7 D9                     NEG ECX
005BCD4B  1B C9                     SBB ECX,ECX
005BCD4D  83 E1 08                  AND ECX,0x8
005BCD50  83 C1 04                  ADD ECX,0x4
005BCD53  51                        PUSH ECX
005BCD54  68 1F 61 00 00            PUSH 0x611f
005BCD59  8B CE                     MOV ECX,ESI
005BCD5B  E8 60 69 E4 FF            CALL 0x004036c0
005BCD60  6A 01                     PUSH 0x1
005BCD62  8B CE                     MOV ECX,ESI
005BCD64  E8 23 7F E4 FF            CALL 0x00404c8c
005BCD69  8B 96 5B 1A 00 00         MOV EDX,dword ptr [ESI + 0x1a5b]
005BCD6F  8B 8A E6 02 00 00         MOV ECX,dword ptr [EDX + 0x2e6]
LAB_005bcd75:
005BCD75  3B CF                     CMP ECX,EDI
005BCD77  0F 84 02 02 00 00         JZ 0x005bcf7f
005BCD7D  6A 01                     PUSH 0x1
005BCD7F  57                        PUSH EDI
005BCD80  6A 01                     PUSH 0x1
005BCD82  E8 1E 52 E4 FF            CALL 0x00401fa5
005BCD87  E9 F3 01 00 00            JMP 0x005bcf7f
switchD_005bc9da::caseD_694e:
005BCD8C  8B 86 61 1A 00 00         MOV EAX,dword ptr [ESI + 0x1a61]
005BCD92  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005BCD98  68 A0 16 80 00            PUSH 0x8016a0
005BCD9D  50                        PUSH EAX
005BCD9E  E8 87 7C E4 FF            CALL 0x00404a2a
005BCDA3  85 C0                     TEST EAX,EAX
005BCDA5  0F 85 D4 01 00 00         JNZ 0x005bcf7f
005BCDAB  8B 4E 61                  MOV ECX,dword ptr [ESI + 0x61]
005BCDAE  C6 86 71 1A 00 00 01      MOV byte ptr [ESI + 0x1a71],0x1
005BCDB5  89 8E 69 1A 00 00         MOV dword ptr [ESI + 0x1a69],ECX
005BCDBB  89 BE 6D 1A 00 00         MOV dword ptr [ESI + 0x1a6d],EDI
005BCDC1  A1 30 2A 80 00            MOV EAX,[0x00802a30]
005BCDC6  3B C7                     CMP EAX,EDI
005BCDC8  0F 84 B1 01 00 00         JZ 0x005bcf7f
005BCDCE  8B F8                     MOV EDI,EAX
005BCDD0  8B CF                     MOV ECX,EDI
005BCDD2  8B 97 C9 00 00 00         MOV EDX,dword ptr [EDI + 0xc9]
005BCDD8  8B 87 C5 00 00 00         MOV EAX,dword ptr [EDI + 0xc5]
005BCDDE  52                        PUSH EDX
005BCDDF  50                        PUSH EAX
005BCDE0  6A 00                     PUSH 0x0
005BCDE2  C6 87 93 04 00 00 05      MOV byte ptr [EDI + 0x493],0x5
005BCDE9  66 C7 87 94 04 00 00 FF FF  MOV word ptr [EDI + 0x494],0xffff
005BCDF2  E8 87 82 E4 FF            CALL 0x0040507e
005BCDF7  8B 8F C9 00 00 00         MOV ECX,dword ptr [EDI + 0xc9]
005BCDFD  8B 97 C5 00 00 00         MOV EDX,dword ptr [EDI + 0xc5]
005BCE03  51                        PUSH ECX
005BCE04  52                        PUSH EDX
005BCE05  8B CF                     MOV ECX,EDI
005BCE07  E8 12 56 E4 FF            CALL 0x0040241e
005BCE0C  C6 87 D2 00 00 00 00      MOV byte ptr [EDI + 0xd2],0x0
005BCE13  C7 87 DF 04 00 00 FF FF FF FF  MOV dword ptr [EDI + 0x4df],0xffffffff
005BCE1D  E9 5D 01 00 00            JMP 0x005bcf7f
LAB_005bce22:
005BCE22  C7 43 18 13 00 00 00      MOV dword ptr [EBX + 0x18],0x13
005BCE29  E9 51 01 00 00            JMP 0x005bcf7f
LAB_005bce2e:
005BCE2E  05 9F 7E FF FF            ADD EAX,0xffff7e9f
005BCE33  83 F8 05                  CMP EAX,0x5
005BCE36  0F 87 43 01 00 00         JA 0x005bcf7f
switchD_005bce3c::switchD:
005BCE3C  FF 24 85 1C D0 5B 00      JMP dword ptr [EAX*0x4 + 0x5bd01c]
switchD_005bce3c::caseD_8163:
005BCE43  8B 43 14                  MOV EAX,dword ptr [EBX + 0x14]
005BCE46  C6 86 71 1A 00 00 00      MOV byte ptr [ESI + 0x1a71],0x0
005BCE4D  89 86 61 1A 00 00         MOV dword ptr [ESI + 0x1a61],EAX
005BCE53  E9 27 01 00 00            JMP 0x005bcf7f
switchD_005bce3c::caseD_8161:
005BCE58  8B 86 82 1C 00 00         MOV EAX,dword ptr [ESI + 0x1c82]
005BCE5E  33 D2                     XOR EDX,EDX
005BCE60  66 8B 53 1A               MOV DX,word ptr [EBX + 0x1a]
005BCE64  57                        PUSH EDI
005BCE65  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
005BCE68  6A 13                     PUSH 0x13
005BCE6A  51                        PUSH ECX
005BCE6B  52                        PUSH EDX
005BCE6C  57                        PUSH EDI
005BCE6D  57                        PUSH EDI
005BCE6E  50                        PUSH EAX
005BCE6F  E8 FC 72 0F 00            CALL 0x006b4170
005BCE74  8B 86 82 1C 00 00         MOV EAX,dword ptr [ESI + 0x1c82]
005BCE7A  33 D2                     XOR EDX,EDX
005BCE7C  66 8B 53 1A               MOV DX,word ptr [EBX + 0x1a]
005BCE80  6A 13                     PUSH 0x13
005BCE82  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
005BCE85  83 E9 04                  SUB ECX,0x4
005BCE88  51                        PUSH ECX
005BCE89  52                        PUSH EDX
005BCE8A  6A 04                     PUSH 0x4
005BCE8C  57                        PUSH EDI
005BCE8D  50                        PUSH EAX
005BCE8E  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005BCE93  8B 48 30                  MOV ECX,dword ptr [EAX + 0x30]
005BCE96  E8 F5 3B 15 00            CALL 0x00710a90
005BCE9B  8A 86 5F 1A 00 00         MOV AL,byte ptr [ESI + 0x1a5f]
005BCEA1  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
005BCEA7  84 C0                     TEST AL,AL
005BCEA9  75 0C                     JNZ 0x005bceb7
005BCEAB  8B 8A 8A 06 00 00         MOV ECX,dword ptr [EDX + 0x68a]
005BCEB1  3B CF                     CMP ECX,EDI
005BCEB3  74 34                     JZ 0x005bcee9
005BCEB5  EB 0A                     JMP 0x005bcec1
LAB_005bceb7:
005BCEB7  8B 8A 8E 06 00 00         MOV ECX,dword ptr [EDX + 0x68e]
005BCEBD  3B CF                     CMP ECX,EDI
005BCEBF  74 28                     JZ 0x005bcee9
LAB_005bcec1:
005BCEC1  66 8B 43 16               MOV AX,word ptr [EBX + 0x16]
005BCEC5  66 F7 D8                  NEG AX
005BCEC8  1B C0                     SBB EAX,EAX
005BCECA  83 E0 02                  AND EAX,0x2
005BCECD  40                        INC EAX
005BCECE  50                        PUSH EAX
005BCECF  33 C0                     XOR EAX,EAX
005BCED1  66 8B 43 14               MOV AX,word ptr [EBX + 0x14]
005BCED5  6A FF                     PUSH -0x1
005BCED7  6A 02                     PUSH 0x2
005BCED9  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
005BCEDC  8B 4C 81 08               MOV ECX,dword ptr [ECX + EAX*0x4 + 0x8]
005BCEE0  51                        PUSH ECX
005BCEE1  8B 4A 30                  MOV ECX,dword ptr [EDX + 0x30]
005BCEE4  E8 D7 4A 15 00            CALL 0x007119c0
LAB_005bcee9:
005BCEE9  33 C9                     XOR ECX,ECX
005BCEEB  B8 F3 1A CA 6B            MOV EAX,0x6bca1af3
005BCEF0  66 8B 4B 1A               MOV CX,word ptr [EBX + 0x1a]
005BCEF4  8D 51 67                  LEA EDX,[ECX + 0x67]
005BCEF7  52                        PUSH EDX
005BCEF8  F7 E9                     IMUL ECX
005BCEFA  C1 FA 03                  SAR EDX,0x3
005BCEFD  8B C2                     MOV EAX,EDX
005BCEFF  6A 7A                     PUSH 0x7a
005BCF01  C1 E8 1F                  SHR EAX,0x1f
005BCF04  03 D0                     ADD EDX,EAX
005BCF06  6A FE                     PUSH -0x2
005BCF08  8B 8C 96 2A 1C 00 00      MOV ECX,dword ptr [ESI + EDX*0x4 + 0x1c2a]
005BCF0F  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005BCF15  51                        PUSH ECX
005BCF16  52                        PUSH EDX
005BCF17  E8 24 67 0F 00            CALL 0x006b3640
005BCF1C  EB 61                     JMP 0x005bcf7f
switchD_005bce3c::caseD_8164:
005BCF1E  57                        PUSH EDI
005BCF1F  8D 86 77 1A 00 00         LEA EAX,[ESI + 0x1a77]
005BCF25  53                        PUSH EBX
005BCF26  50                        PUSH EAX
005BCF27  8B CE                     MOV ECX,ESI
005BCF29  E8 A6 62 E4 FF            CALL 0x004031d4
005BCF2E  EB 4F                     JMP 0x005bcf7f
switchD_005bce3c::caseD_8165:
005BCF30  57                        PUSH EDI
005BCF31  8D 8E 08 1B 00 00         LEA ECX,[ESI + 0x1b08]
005BCF37  53                        PUSH EBX
005BCF38  51                        PUSH ECX
005BCF39  8B CE                     MOV ECX,ESI
005BCF3B  E8 94 62 E4 FF            CALL 0x004031d4
005BCF40  EB 3D                     JMP 0x005bcf7f
switchD_005bce3c::caseD_8166:
005BCF42  8B 53 18                  MOV EDX,dword ptr [EBX + 0x18]
005BCF45  33 C0                     XOR EAX,EAX
005BCF47  66 8B 43 16               MOV AX,word ptr [EBX + 0x16]
005BCF4B  8B 4A 04                  MOV ECX,dword ptr [EDX + 0x4]
005BCF4E  03 C8                     ADD ECX,EAX
005BCF50  89 8E B9 1B 00 00         MOV dword ptr [ESI + 0x1bb9],ECX
005BCF56  8B 86 9D 1B 00 00         MOV EAX,dword ptr [ESI + 0x1b9d]
005BCF5C  83 F8 FF                  CMP EAX,-0x1
005BCF5F  74 1E                     JZ 0x005bcf7f
005BCF61  8B D1                     MOV EDX,ECX
005BCF63  8B 8E B5 1B 00 00         MOV ECX,dword ptr [ESI + 0x1bb5]
005BCF69  52                        PUSH EDX
005BCF6A  8B 96 A1 1B 00 00         MOV EDX,dword ptr [ESI + 0x1ba1]
005BCF70  51                        PUSH ECX
005BCF71  52                        PUSH EDX
005BCF72  50                        PUSH EAX
005BCF73  8B 86 E1 1B 00 00         MOV EAX,dword ptr [ESI + 0x1be1]
005BCF79  50                        PUSH EAX
005BCF7A  E8 B1 67 0F 00            CALL 0x006b3730
switchD_005bc9da::caseD_6944:
005BCF7F  8B 8D 78 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff78]
005BCF85  53                        PUSH EBX
005BCF86  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005BCF8C  8B CE                     MOV ECX,ESI
005BCF8E  E8 ED 42 E4 FF            CALL 0x00401280
005BCF93  5F                        POP EDI
005BCF94  5E                        POP ESI
005BCF95  5B                        POP EBX
005BCF96  8B E5                     MOV ESP,EBP
005BCF98  5D                        POP EBP
005BCF99  C2 04 00                  RET 0x4
LAB_005bcf9c:
005BCF9C  8B 95 78 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff78]
005BCFA2  68 A4 CE 7C 00            PUSH 0x7ccea4
005BCFA7  68 CC 4C 7A 00            PUSH 0x7a4ccc
005BCFAC  56                        PUSH ESI
005BCFAD  57                        PUSH EDI
005BCFAE  68 4C 03 00 00            PUSH 0x34c
005BCFB3  68 28 CD 7C 00            PUSH 0x7ccd28
005BCFB8  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005BCFBE  E8 0D 05 0F 00            CALL 0x006ad4d0
005BCFC3  83 C4 18                  ADD ESP,0x18
005BCFC6  85 C0                     TEST EAX,EAX
005BCFC8  74 01                     JZ 0x005bcfcb
005BCFCA  CC                        INT3
LAB_005bcfcb:
005BCFCB  68 4C 03 00 00            PUSH 0x34c
005BCFD0  68 28 CD 7C 00            PUSH 0x7ccd28
005BCFD5  57                        PUSH EDI
005BCFD6  56                        PUSH ESI
005BCFD7  E8 64 8E 0E 00            CALL 0x006a5e40
005BCFDC  5F                        POP EDI
005BCFDD  5E                        POP ESI
005BCFDE  B8 FF FF 00 00            MOV EAX,0xffff
005BCFE3  5B                        POP EBX
005BCFE4  8B E5                     MOV ESP,EBP
005BCFE6  5D                        POP EBP
005BCFE7  C2 04 00                  RET 0x4
