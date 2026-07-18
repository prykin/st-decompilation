FUN_0052bda0:
0052BDA0  55                        PUSH EBP
0052BDA1  8B EC                     MOV EBP,ESP
0052BDA3  83 EC 08                  SUB ESP,0x8
0052BDA6  8A 45 08                  MOV AL,byte ptr [EBP + 0x8]
0052BDA9  56                        PUSH ESI
0052BDAA  8B F1                     MOV ESI,ECX
0052BDAC  3A 05 4D 87 80 00         CMP AL,byte ptr [0x0080874d]
0052BDB2  0F 85 EC 00 00 00         JNZ 0x0052bea4
0052BDB8  A1 97 8A 80 00            MOV EAX,[0x00808a97]
0052BDBD  83 F8 FF                  CMP EAX,-0x1
0052BDC0  75 05                     JNZ 0x0052bdc7
0052BDC2  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0052BDC5  EB 03                     JMP 0x0052bdca
LAB_0052bdc7:
0052BDC7  2B 45 0C                  SUB EAX,dword ptr [EBP + 0xc]
LAB_0052bdca:
0052BDCA  53                        PUSH EBX
0052BDCB  57                        PUSH EDI
0052BDCC  50                        PUSH EAX
0052BDCD  8D 4D F8                  LEA ECX,[EBP + -0x8]
0052BDD0  68 44 6F 7C 00            PUSH 0x7c6f44
0052BDD5  51                        PUSH ECX
0052BDD6  89 86 9E 00 00 00         MOV dword ptr [ESI + 0x9e],EAX
0052BDDC  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
0052BDE2  A1 97 8A 80 00            MOV EAX,[0x00808a97]
0052BDE7  83 C4 0C                  ADD ESP,0xc
0052BDEA  83 F8 FF                  CMP EAX,-0x1
0052BDED  75 04                     JNZ 0x0052bdf3
0052BDEF  32 C0                     XOR AL,AL
0052BDF1  EB 13                     JMP 0x0052be06
LAB_0052bdf3:
0052BDF3  8B BE 9E 00 00 00         MOV EDI,dword ptr [ESI + 0x9e]
0052BDF9  BA 14 00 00 00            MOV EDX,0x14
0052BDFE  3B D7                     CMP EDX,EDI
0052BE00  1A C0                     SBB AL,AL
0052BE02  24 FE                     AND AL,0xfe
0052BE04  04 02                     ADD AL,0x2
LAB_0052be06:
0052BE06  8A 0D 4E 87 80 00         MOV CL,byte ptr [0x0080874e]
0052BE0C  88 45 08                  MOV byte ptr [EBP + 0x8],AL
0052BE0F  80 F9 03                  CMP CL,0x3
0052BE12  75 05                     JNZ 0x0052be19
0052BE14  FE C0                     INC AL
0052BE16  88 45 08                  MOV byte ptr [EBP + 0x8],AL
LAB_0052be19:
0052BE19  8B 46 7E                  MOV EAX,dword ptr [ESI + 0x7e]
0052BE1C  8B 48 14                  MOV ECX,dword ptr [EAX + 0x14]
0052BE1F  85 C9                     TEST ECX,ECX
0052BE21  75 18                     JNZ 0x0052be3b
0052BE23  66 8B 48 0E               MOV CX,word ptr [EAX + 0xe]
0052BE27  0F AF 48 04               IMUL ECX,dword ptr [EAX + 0x4]
0052BE2B  83 C1 1F                  ADD ECX,0x1f
0052BE2E  C1 E9 03                  SHR ECX,0x3
0052BE31  81 E1 FC FF FF 1F         AND ECX,0x1ffffffc
0052BE37  0F AF 48 08               IMUL ECX,dword ptr [EAX + 0x8]
LAB_0052be3b:
0052BE3B  33 DB                     XOR EBX,EBX
0052BE3D  50                        PUSH EAX
0052BE3E  8A 5E 69                  MOV BL,byte ptr [ESI + 0x69]
0052BE41  89 4D 0C                  MOV dword ptr [EBP + 0xc],ECX
0052BE44  E8 57 91 18 00            CALL 0x006b4fa0
0052BE49  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0052BE4C  8B F8                     MOV EDI,EAX
0052BE4E  8A C3                     MOV AL,BL
0052BE50  8A FB                     MOV BH,BL
0052BE52  8B C3                     MOV EAX,EBX
0052BE54  8B D1                     MOV EDX,ECX
0052BE56  C1 E0 10                  SHL EAX,0x10
0052BE59  66 8B C3                  MOV AX,BX
0052BE5C  C1 E9 02                  SHR ECX,0x2
0052BE5F  F3 AB                     STOSD.REP ES:EDI
0052BE61  8B CA                     MOV ECX,EDX
0052BE63  83 E1 03                  AND ECX,0x3
0052BE66  F3 AA                     STOSB.REP ES:EDI
0052BE68  8B 46 64                  MOV EAX,dword ptr [ESI + 0x64]
0052BE6B  8B 4E 60                  MOV ECX,dword ptr [ESI + 0x60]
0052BE6E  8B 56 7E                  MOV EDX,dword ptr [ESI + 0x7e]
0052BE71  50                        PUSH EAX
0052BE72  51                        PUSH ECX
0052BE73  8B 4E 6E                  MOV ECX,dword ptr [ESI + 0x6e]
0052BE76  6A 00                     PUSH 0x0
0052BE78  6A 00                     PUSH 0x0
0052BE7A  6A 00                     PUSH 0x0
0052BE7C  52                        PUSH EDX
0052BE7D  E8 0E 4C 1E 00            CALL 0x00710a90
0052BE82  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0052BE85  8D 4D F8                  LEA ECX,[EBP + -0x8]
0052BE88  25 FF 00 00 00            AND EAX,0xff
0052BE8D  50                        PUSH EAX
0052BE8E  6A FF                     PUSH -0x1
0052BE90  6A FF                     PUSH -0x1
0052BE92  51                        PUSH ECX
0052BE93  8B 4E 6E                  MOV ECX,dword ptr [ESI + 0x6e]
0052BE96  E8 25 5B 1E 00            CALL 0x007119c0
0052BE9B  8B CE                     MOV ECX,ESI
0052BE9D  E8 2B 75 ED FF            CALL 0x004033cd
0052BEA2  5F                        POP EDI
0052BEA3  5B                        POP EBX
LAB_0052bea4:
0052BEA4  5E                        POP ESI
0052BEA5  8B E5                     MOV ESP,EBP
0052BEA7  5D                        POP EBP
0052BEA8  C2 08 00                  RET 0x8
