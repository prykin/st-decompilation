MMMObjTy::PaintSlBut:
005B6560  55                        PUSH EBP
005B6561  8B EC                     MOV EBP,ESP
005B6563  83 EC 48                  SUB ESP,0x48
005B6566  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005B656B  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005B656E  56                        PUSH ESI
005B656F  8D 55 BC                  LEA EDX,[EBP + -0x44]
005B6572  8D 4D B8                  LEA ECX,[EBP + -0x48]
005B6575  6A 00                     PUSH 0x0
005B6577  52                        PUSH EDX
005B6578  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
005B657B  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005B6581  E8 6A 72 17 00            CALL 0x0072d7f0
005B6586  8B F0                     MOV ESI,EAX
005B6588  83 C4 08                  ADD ESP,0x8
005B658B  85 F6                     TEST ESI,ESI
005B658D  0F 85 9A 00 00 00         JNZ 0x005b662d
005B6593  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
005B6596  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005B6599  33 C9                     XOR ECX,ECX
005B659B  66 8B 4E 14               MOV CX,word ptr [ESI + 0x14]
005B659F  83 F9 03                  CMP ECX,0x3
005B65A2  77 37                     JA 0x005b65db
switchD_005b65a4::switchD:
005B65A4  FF 24 8D 74 66 5B 00      JMP dword ptr [ECX*0x4 + 0x5b6674]
switchD_005b65a4::caseD_1:
005B65AB  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
005B65AE  81 E1 FF 00 00 00         AND ECX,0xff
005B65B4  8D 0C 49                  LEA ECX,[ECX + ECX*0x2]
005B65B7  EB 1F                     JMP 0x005b65d8
switchD_005b65a4::caseD_0:
005B65B9  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
005B65BC  81 E1 FF 00 00 00         AND ECX,0xff
005B65C2  8D 54 49 02               LEA EDX,[ECX + ECX*0x2 + 0x2]
005B65C6  89 50 08                  MOV dword ptr [EAX + 0x8],EDX
005B65C9  EB 10                     JMP 0x005b65db
switchD_005b65a4::caseD_2:
005B65CB  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
005B65CE  81 E1 FF 00 00 00         AND ECX,0xff
005B65D4  8D 4C 49 01               LEA ECX,[ECX + ECX*0x2 + 0x1]
LAB_005b65d8:
005B65D8  89 48 08                  MOV dword ptr [EAX + 0x8],ECX
switchD_005b65a4::default:
005B65DB  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
005B65DE  83 F9 FF                  CMP ECX,-0x1
005B65E1  74 16                     JZ 0x005b65f9
005B65E3  8B 50 20                  MOV EDX,dword ptr [EAX + 0x20]
005B65E6  52                        PUSH EDX
005B65E7  8B 50 1C                  MOV EDX,dword ptr [EAX + 0x1c]
005B65EA  52                        PUSH EDX
005B65EB  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
005B65EE  8B 40 48                  MOV EAX,dword ptr [EAX + 0x48]
005B65F1  52                        PUSH EDX
005B65F2  51                        PUSH ECX
005B65F3  50                        PUSH EAX
005B65F4  E8 37 D1 0F 00            CALL 0x006b3730
LAB_005b65f9:
005B65F9  33 C0                     XOR EAX,EAX
005B65FB  66 8B 46 14               MOV AX,word ptr [ESI + 0x14]
005B65FF  83 E8 02                  SUB EAX,0x2
005B6602  74 0B                     JZ 0x005b660f
005B6604  48                        DEC EAX
005B6605  75 16                     JNZ 0x005b661d
005B6607  6A FF                     PUSH -0x1
005B6609  6A 01                     PUSH 0x1
005B660B  6A 09                     PUSH 0x9
005B660D  EB 06                     JMP 0x005b6615
LAB_005b660f:
005B660F  6A FF                     PUSH -0x1
005B6611  6A 01                     PUSH 0x1
005B6613  6A 0A                     PUSH 0xa
LAB_005b6615:
005B6615  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
005B6618  E8 D4 E5 E4 FF            CALL 0x00404bf1
LAB_005b661d:
005B661D  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
005B6620  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005B6626  5E                        POP ESI
005B6627  8B E5                     MOV ESP,EBP
005B6629  5D                        POP EBP
005B662A  C2 0C 00                  RET 0xc
LAB_005b662d:
005B662D  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
005B6630  68 00 CB 7C 00            PUSH 0x7ccb00
005B6635  68 CC 4C 7A 00            PUSH 0x7a4ccc
005B663A  56                        PUSH ESI
005B663B  6A 00                     PUSH 0x0
005B663D  68 21 01 00 00            PUSH 0x121
005B6642  68 38 CA 7C 00            PUSH 0x7cca38
005B6647  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005B664D  E8 7E 6E 0F 00            CALL 0x006ad4d0
005B6652  83 C4 18                  ADD ESP,0x18
005B6655  85 C0                     TEST EAX,EAX
005B6657  74 01                     JZ 0x005b665a
005B6659  CC                        INT3
LAB_005b665a:
005B665A  68 21 01 00 00            PUSH 0x121
005B665F  68 38 CA 7C 00            PUSH 0x7cca38
005B6664  6A 00                     PUSH 0x0
005B6666  56                        PUSH ESI
005B6667  E8 D4 F7 0E 00            CALL 0x006a5e40
005B666C  5E                        POP ESI
005B666D  8B E5                     MOV ESP,EBP
005B666F  5D                        POP EBP
005B6670  C2 0C 00                  RET 0xc
