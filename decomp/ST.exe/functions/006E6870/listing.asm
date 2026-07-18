FUN_006e6870:
006E6870  55                        PUSH EBP
006E6871  8B EC                     MOV EBP,ESP
006E6873  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006E6876  56                        PUSH ESI
006E6877  8B B1 1C 04 00 00         MOV ESI,dword ptr [ECX + 0x41c]
006E687D  33 C0                     XOR EAX,EAX
006E687F  3B D6                     CMP EDX,ESI
006E6881  7D 29                     JGE 0x006e68ac
006E6883  8B 81 20 04 00 00         MOV EAX,dword ptr [ECX + 0x420]
006E6889  8A 4C 90 03               MOV CL,byte ptr [EAX + EDX*0x4 + 0x3]
006E688D  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
006E6890  8D 54 90 03               LEA EDX,[EAX + EDX*0x4 + 0x3]
006E6894  8A C1                     MOV AL,CL
006E6896  83 E0 01                  AND EAX,0x1
006E6899  85 F6                     TEST ESI,ESI
006E689B  74 0A                     JZ 0x006e68a7
006E689D  80 C9 01                  OR CL,0x1
006E68A0  5E                        POP ESI
006E68A1  88 0A                     MOV byte ptr [EDX],CL
006E68A3  5D                        POP EBP
006E68A4  C2 08 00                  RET 0x8
LAB_006e68a7:
006E68A7  80 E1 FE                  AND CL,0xfe
006E68AA  88 0A                     MOV byte ptr [EDX],CL
LAB_006e68ac:
006E68AC  5E                        POP ESI
006E68AD  5D                        POP EBP
006E68AE  C2 08 00                  RET 0x8
