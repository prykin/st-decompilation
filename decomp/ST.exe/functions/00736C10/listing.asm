_strlen:
00736C10  8B 4C 24 04               MOV ECX,dword ptr [ESP + 0x4]
00736C14  F7 C1 03 00 00 00         TEST ECX,0x3
00736C1A  74 14                     JZ 0x00736c30
LAB_00736c1c:
00736C1C  8A 01                     MOV AL,byte ptr [ECX]
00736C1E  41                        INC ECX
00736C1F  84 C0                     TEST AL,AL
00736C21  74 40                     JZ 0x00736c63
00736C23  F7 C1 03 00 00 00         TEST ECX,0x3
00736C29  75 F1                     JNZ 0x00736c1c
00736C2B  05 00 00 00 00            ADD EAX,0x0
LAB_00736c30:
00736C30  8B 01                     MOV EAX,dword ptr [ECX]
00736C32  BA FF FE FE 7E            MOV EDX,0x7efefeff
00736C37  03 D0                     ADD EDX,EAX
00736C39  83 F0 FF                  XOR EAX,0xffffffff
00736C3C  33 C2                     XOR EAX,EDX
00736C3E  83 C1 04                  ADD ECX,0x4
00736C41  A9 00 01 01 81            TEST EAX,0x81010100
00736C46  74 E8                     JZ 0x00736c30
00736C48  8B 41 FC                  MOV EAX,dword ptr [ECX + -0x4]
00736C4B  84 C0                     TEST AL,AL
00736C4D  74 32                     JZ 0x00736c81
00736C4F  84 E4                     TEST AH,AH
00736C51  74 24                     JZ 0x00736c77
00736C53  A9 00 00 FF 00            TEST EAX,0xff0000
00736C58  74 13                     JZ 0x00736c6d
00736C5A  A9 00 00 00 FF            TEST EAX,0xff000000
00736C5F  74 02                     JZ 0x00736c63
00736C61  EB CD                     JMP 0x00736c30
LAB_00736c63:
00736C63  8D 41 FF                  LEA EAX,[ECX + -0x1]
00736C66  8B 4C 24 04               MOV ECX,dword ptr [ESP + 0x4]
00736C6A  2B C1                     SUB EAX,ECX
00736C6C  C3                        RET
LAB_00736c6d:
00736C6D  8D 41 FE                  LEA EAX,[ECX + -0x2]
00736C70  8B 4C 24 04               MOV ECX,dword ptr [ESP + 0x4]
00736C74  2B C1                     SUB EAX,ECX
00736C76  C3                        RET
LAB_00736c77:
00736C77  8D 41 FD                  LEA EAX,[ECX + -0x3]
00736C7A  8B 4C 24 04               MOV ECX,dword ptr [ESP + 0x4]
00736C7E  2B C1                     SUB EAX,ECX
00736C80  C3                        RET
LAB_00736c81:
00736C81  8D 41 FC                  LEA EAX,[ECX + -0x4]
00736C84  8B 4C 24 04               MOV ECX,dword ptr [ESP + 0x4]
00736C88  2B C1                     SUB EAX,ECX
00736C8A  C3                        RET
