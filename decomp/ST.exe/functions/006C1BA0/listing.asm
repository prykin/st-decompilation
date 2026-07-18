FUN_006c1ba0:
006C1BA0  55                        PUSH EBP
006C1BA1  8B EC                     MOV EBP,ESP
006C1BA3  A1 B4 68 85 00            MOV EAX,[0x008568b4]
006C1BA8  85 C0                     TEST EAX,EAX
006C1BAA  0F 84 CD 00 00 00         JZ 0x006c1c7d
006C1BB0  53                        PUSH EBX
006C1BB1  56                        PUSH ESI
006C1BB2  57                        PUSH EDI
006C1BB3  68 98 68 85 00            PUSH 0x856898
006C1BB8  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
006C1BBE  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006C1BC1  85 FF                     TEST EDI,EDI
006C1BC3  0F 8C A6 00 00 00         JL 0x006c1c6f
006C1BC9  83 FF 20                  CMP EDI,0x20
006C1BCC  0F 8D 9D 00 00 00         JGE 0x006c1c6f
006C1BD2  8D 34 7F                  LEA ESI,[EDI + EDI*0x2]
006C1BD5  C1 E6 04                  SHL ESI,0x4
006C1BD8  03 F7                     ADD ESI,EDI
006C1BDA  C1 E6 02                  SHL ESI,0x2
006C1BDD  8B 86 F8 4F 85 00         MOV EAX,dword ptr [ESI + 0x854ff8]
006C1BE3  8D 9E F8 4F 85 00         LEA EBX,[ESI + 0x854ff8]
006C1BE9  A8 01                     TEST AL,0x1
006C1BEB  89 5D 08                  MOV dword ptr [EBP + 0x8],EBX
006C1BEE  74 7F                     JZ 0x006c1c6f
006C1BF0  24 F7                     AND AL,0xf7
006C1BF2  89 03                     MOV dword ptr [EBX],EAX
006C1BF4  8B 86 04 50 85 00         MOV EAX,dword ptr [ESI + 0x855004]
006C1BFA  85 C0                     TEST EAX,EAX
006C1BFC  74 66                     JZ 0x006c1c64
006C1BFE  8B 08                     MOV ECX,dword ptr [EAX]
006C1C00  50                        PUSH EAX
006C1C01  FF 51 48                  CALL dword ptr [ECX + 0x48]
006C1C04  8B 86 08 50 85 00         MOV EAX,dword ptr [ESI + 0x855008]
006C1C0A  85 C0                     TEST EAX,EAX
006C1C0C  74 10                     JZ 0x006c1c1e
006C1C0E  8B 10                     MOV EDX,dword ptr [EAX]
006C1C10  50                        PUSH EAX
006C1C11  FF 52 08                  CALL dword ptr [EDX + 0x8]
006C1C14  C7 86 08 50 85 00 00 00 00 00  MOV dword ptr [ESI + 0x855008],0x0
LAB_006c1c1e:
006C1C1E  8B B6 04 50 85 00         MOV ESI,dword ptr [ESI + 0x855004]
006C1C24  56                        PUSH ESI
006C1C25  8B 06                     MOV EAX,dword ptr [ESI]
006C1C27  FF 50 08                  CALL dword ptr [EAX + 0x8]
006C1C2A  8B 35 F4 4F 85 00         MOV ESI,dword ptr [0x00854ff4]
006C1C30  85 F6                     TEST ESI,ESI
006C1C32  74 30                     JZ 0x006c1c64
LAB_006c1c34:
006C1C34  8B 46 38                  MOV EAX,dword ptr [ESI + 0x38]
006C1C37  85 C0                     TEST EAX,EAX
006C1C39  7D 17                     JGE 0x006c1c52
LAB_006c1c3b:
006C1C3B  8B 1E                     MOV EBX,dword ptr [ESI]
006C1C3D  56                        PUSH ESI
006C1C3E  68 F4 4F 85 00            PUSH 0x854ff4
006C1C43  E8 78 7C FF FF            CALL 0x006b98c0
006C1C48  56                        PUSH ESI
006C1C49  E8 42 42 FE FF            CALL 0x006a5e90
006C1C4E  8B F3                     MOV ESI,EBX
006C1C50  EB 0B                     JMP 0x006c1c5d
LAB_006c1c52:
006C1C52  3B 7E 34                  CMP EDI,dword ptr [ESI + 0x34]
006C1C55  7C 04                     JL 0x006c1c5b
006C1C57  3B F8                     CMP EDI,EAX
006C1C59  7E E0                     JLE 0x006c1c3b
LAB_006c1c5b:
006C1C5B  8B 36                     MOV ESI,dword ptr [ESI]
LAB_006c1c5d:
006C1C5D  85 F6                     TEST ESI,ESI
006C1C5F  75 D3                     JNZ 0x006c1c34
006C1C61  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
LAB_006c1c64:
006C1C64  B9 31 00 00 00            MOV ECX,0x31
006C1C69  33 C0                     XOR EAX,EAX
006C1C6B  8B FB                     MOV EDI,EBX
006C1C6D  F3 AB                     STOSD.REP ES:EDI
LAB_006c1c6f:
006C1C6F  68 98 68 85 00            PUSH 0x856898
006C1C74  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
006C1C7A  5F                        POP EDI
006C1C7B  5E                        POP ESI
006C1C7C  5B                        POP EBX
LAB_006c1c7d:
006C1C7D  5D                        POP EBP
006C1C7E  C2 04 00                  RET 0x4
