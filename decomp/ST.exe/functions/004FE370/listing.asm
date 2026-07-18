CPanelTy::PaintName:
004FE370  55                        PUSH EBP
004FE371  8B EC                     MOV EBP,ESP
004FE373  83 EC 48                  SUB ESP,0x48
004FE376  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
004FE37B  56                        PUSH ESI
004FE37C  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
004FE37F  57                        PUSH EDI
004FE380  8D 55 BC                  LEA EDX,[EBP + -0x44]
004FE383  8D 4D B8                  LEA ECX,[EBP + -0x48]
004FE386  6A 00                     PUSH 0x0
004FE388  52                        PUSH EDX
004FE389  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
004FE38C  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004FE392  E8 59 F4 22 00            CALL 0x0072d7f0
004FE397  8B F0                     MOV ESI,EAX
004FE399  83 C4 08                  ADD ESP,0x8
004FE39C  85 F6                     TEST ESI,ESI
004FE39E  0F 85 BB 00 00 00         JNZ 0x004fe45f
004FE3A4  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
004FE3A7  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
004FE3AA  85 FF                     TEST EDI,EDI
004FE3AC  74 08                     JZ 0x004fe3b6
004FE3AE  8B 86 84 01 00 00         MOV EAX,dword ptr [ESI + 0x184]
004FE3B4  EB 06                     JMP 0x004fe3bc
LAB_004fe3b6:
004FE3B6  8B 86 9C 01 00 00         MOV EAX,dword ptr [ESI + 0x19c]
LAB_004fe3bc:
004FE3BC  8B 8E B8 01 00 00         MOV ECX,dword ptr [ESI + 0x1b8]
004FE3C2  6A 24                     PUSH 0x24
004FE3C4  6A 4E                     PUSH 0x4e
004FE3C6  6A 00                     PUSH 0x0
004FE3C8  6A 01                     PUSH 0x1
004FE3CA  6A 00                     PUSH 0x0
004FE3CC  50                        PUSH EAX
004FE3CD  E8 BE 26 21 00            CALL 0x00710a90
004FE3D2  85 FF                     TEST EDI,EDI
004FE3D4  74 08                     JZ 0x004fe3de
004FE3D6  8A 86 6F 0B 00 00         MOV AL,byte ptr [ESI + 0xb6f]
004FE3DC  EB 06                     JMP 0x004fe3e4
LAB_004fe3de:
004FE3DE  8A 86 5D 0C 00 00         MOV AL,byte ptr [ESI + 0xc5d]
LAB_004fe3e4:
004FE3E4  84 C0                     TEST AL,AL
004FE3E6  74 14                     JZ 0x004fe3fc
004FE3E8  85 FF                     TEST EDI,EDI
004FE3EA  74 08                     JZ 0x004fe3f4
004FE3EC  8D 86 6F 0B 00 00         LEA EAX,[ESI + 0xb6f]
004FE3F2  EB 45                     JMP 0x004fe439
LAB_004fe3f4:
004FE3F4  8D 86 5D 0C 00 00         LEA EAX,[ESI + 0xc5d]
004FE3FA  EB 3D                     JMP 0x004fe439
LAB_004fe3fc:
004FE3FC  85 FF                     TEST EDI,EDI
004FE3FE  74 08                     JZ 0x004fe408
004FE400  8A 8E 6A 0B 00 00         MOV CL,byte ptr [ESI + 0xb6a]
004FE406  EB 06                     JMP 0x004fe40e
LAB_004fe408:
004FE408  8A 8E 58 0C 00 00         MOV CL,byte ptr [ESI + 0xc58]
LAB_004fe40e:
004FE40E  85 FF                     TEST EDI,EDI
004FE410  74 08                     JZ 0x004fe41a
004FE412  8B 86 66 0B 00 00         MOV EAX,dword ptr [ESI + 0xb66]
004FE418  EB 06                     JMP 0x004fe420
LAB_004fe41a:
004FE41A  8B 86 54 0C 00 00         MOV EAX,dword ptr [ESI + 0xc54]
LAB_004fe420:
004FE420  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
004FE426  52                        PUSH EDX
004FE427  6A 00                     PUSH 0x0
004FE429  51                        PUSH ECX
004FE42A  50                        PUSH EAX
004FE42B  E8 54 52 F0 FF            CALL 0x00403684
004FE430  83 C4 0C                  ADD ESP,0xc
004FE433  50                        PUSH EAX
004FE434  E8 07 1D 1B 00            CALL 0x006b0140
LAB_004fe439:
004FE439  8B 8E B8 01 00 00         MOV ECX,dword ptr [ESI + 0x1b8]
004FE43F  6A FF                     PUSH -0x1
004FE441  6A FF                     PUSH -0x1
004FE443  6A 00                     PUSH 0x0
004FE445  6A FF                     PUSH -0x1
004FE447  6A FE                     PUSH -0x2
004FE449  50                        PUSH EAX
004FE44A  E8 21 37 21 00            CALL 0x00711b70
004FE44F  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
004FE452  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004FE457  5F                        POP EDI
004FE458  5E                        POP ESI
004FE459  8B E5                     MOV ESP,EBP
004FE45B  5D                        POP EBP
004FE45C  C2 04 00                  RET 0x4
LAB_004fe45f:
004FE45F  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
004FE462  68 F4 23 7C 00            PUSH 0x7c23f4
004FE467  68 CC 4C 7A 00            PUSH 0x7a4ccc
004FE46C  56                        PUSH ESI
004FE46D  6A 00                     PUSH 0x0
004FE46F  6A 1E                     PUSH 0x1e
004FE471  68 CC 23 7C 00            PUSH 0x7c23cc
004FE476  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004FE47C  E8 4F F0 1A 00            CALL 0x006ad4d0
004FE481  83 C4 18                  ADD ESP,0x18
004FE484  85 C0                     TEST EAX,EAX
004FE486  74 01                     JZ 0x004fe489
004FE488  CC                        INT3
LAB_004fe489:
004FE489  6A 1E                     PUSH 0x1e
004FE48B  68 CC 23 7C 00            PUSH 0x7c23cc
004FE490  6A 00                     PUSH 0x0
004FE492  56                        PUSH ESI
004FE493  E8 A8 79 1A 00            CALL 0x006a5e40
004FE498  5F                        POP EDI
004FE499  5E                        POP ESI
004FE49A  8B E5                     MOV ESP,EBP
004FE49C  5D                        POP EBP
004FE49D  C2 04 00                  RET 0x4
