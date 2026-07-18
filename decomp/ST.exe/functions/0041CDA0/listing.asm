FUN_0041cda0:
0041CDA0  55                        PUSH EBP
0041CDA1  8B EC                     MOV EBP,ESP
0041CDA3  A0 4D 87 80 00            MOV AL,[0x0080874d]
0041CDA8  56                        PUSH ESI
0041CDA9  3C FF                     CMP AL,0xff
0041CDAB  57                        PUSH EDI
0041CDAC  74 64                     JZ 0x0041ce12
0041CDAE  8B 81 F8 00 00 00         MOV EAX,dword ptr [ECX + 0xf8]
0041CDB4  85 C0                     TEST EAX,EAX
0041CDB6  74 5A                     JZ 0x0041ce12
0041CDB8  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0041CDBB  85 F6                     TEST ESI,ESI
0041CDBD  7C 4B                     JL 0x0041ce0a
0041CDBF  8B 41 20                  MOV EAX,dword ptr [ECX + 0x20]
0041CDC2  3B F0                     CMP ESI,EAX
0041CDC4  7D 44                     JGE 0x0041ce0a
0041CDC6  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
0041CDC9  85 FF                     TEST EDI,EDI
0041CDCB  7C 3D                     JL 0x0041ce0a
0041CDCD  3B 79 24                  CMP EDI,dword ptr [ECX + 0x24]
0041CDD0  7D 38                     JGE 0x0041ce0a
0041CDD2  8B 51 38                  MOV EDX,dword ptr [ECX + 0x38]
0041CDD5  85 D2                     TEST EDX,EDX
0041CDD7  74 31                     JZ 0x0041ce0a
0041CDD9  0F AF C7                  IMUL EAX,EDI
0041CDDC  8D 3C 30                  LEA EDI,[EAX + ESI*0x1]
0041CDDF  8D 14 7A                  LEA EDX,[EDX + EDI*0x2]
0041CDE2  85 D2                     TEST EDX,EDX
0041CDE4  74 24                     JZ 0x0041ce0a
0041CDE6  53                        PUSH EBX
0041CDE7  8A 5A 01                  MOV BL,byte ptr [EDX + 0x1]
0041CDEA  84 DB                     TEST BL,BL
0041CDEC  5B                        POP EBX
0041CDED  74 1B                     JZ 0x0041ce0a
0041CDEF  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
0041CDF2  83 FA 08                  CMP EDX,0x8
0041CDF5  73 1B                     JNC 0x0041ce12
0041CDF7  8B 4C 91 54               MOV ECX,dword ptr [ECX + EDX*0x4 + 0x54]
0041CDFB  85 C9                     TEST ECX,ECX
0041CDFD  74 13                     JZ 0x0041ce12
0041CDFF  03 C8                     ADD ECX,EAX
0041CE01  33 C0                     XOR EAX,EAX
0041CE03  8A 04 31                  MOV AL,byte ptr [ECX + ESI*0x1]
0041CE06  85 C0                     TEST EAX,EAX
0041CE08  7E 08                     JLE 0x0041ce12
LAB_0041ce0a:
0041CE0A  5F                        POP EDI
0041CE0B  33 C0                     XOR EAX,EAX
0041CE0D  5E                        POP ESI
0041CE0E  5D                        POP EBP
0041CE0F  C2 10 00                  RET 0x10
LAB_0041ce12:
0041CE12  5F                        POP EDI
0041CE13  B8 01 00 00 00            MOV EAX,0x1
0041CE18  5E                        POP ESI
0041CE19  5D                        POP EBP
0041CE1A  C2 10 00                  RET 0x10
