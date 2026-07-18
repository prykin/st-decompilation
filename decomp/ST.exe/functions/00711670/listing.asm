FUN_00711670:
00711670  55                        PUSH EBP
00711671  8B EC                     MOV EBP,ESP
00711673  83 EC 08                  SUB ESP,0x8
00711676  53                        PUSH EBX
00711677  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
0071167A  85 DB                     TEST EBX,EBX
0071167C  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0071167F  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
00711686  74 5F                     JZ 0x007116e7
00711688  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0071168B  8B 4B 08                  MOV ECX,dword ptr [EBX + 0x8]
0071168E  83 FA FF                  CMP EDX,-0x1
00711691  75 02                     JNZ 0x00711695
00711693  8B D1                     MOV EDX,ECX
LAB_00711695:
00711695  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00711698  3B C1                     CMP EAX,ECX
0071169A  7D 4B                     JGE 0x007116e7
0071169C  85 D2                     TEST EDX,EDX
0071169E  74 47                     JZ 0x007116e7
007116A0  56                        PUSH ESI
007116A1  8D 34 10                  LEA ESI,[EAX + EDX*0x1]
007116A4  3B F1                     CMP ESI,ECX
007116A6  57                        PUSH EDI
007116A7  7E 04                     JLE 0x007116ad
007116A9  2B C8                     SUB ECX,EAX
007116AB  8B D1                     MOV EDX,ECX
LAB_007116ad:
007116AD  8D 3C 10                  LEA EDI,[EAX + EDX*0x1]
007116B0  8B F0                     MOV ESI,EAX
007116B2  3B C7                     CMP EAX,EDI
007116B4  7D 25                     JGE 0x007116db
LAB_007116b6:
007116B6  3B 73 08                  CMP ESI,dword ptr [EBX + 0x8]
007116B9  7D 08                     JGE 0x007116c3
007116BB  8B 43 14                  MOV EAX,dword ptr [EBX + 0x14]
007116BE  8B 04 B0                  MOV EAX,dword ptr [EAX + ESI*0x4]
007116C1  EB 02                     JMP 0x007116c5
LAB_007116c3:
007116C3  33 C0                     XOR EAX,EAX
LAB_007116c5:
007116C5  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
007116C8  50                        PUSH EAX
007116C9  E8 42 FA FF FF            CALL 0x00711110
007116CE  3B 45 FC                  CMP EAX,dword ptr [EBP + -0x4]
007116D1  7E 03                     JLE 0x007116d6
007116D3  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_007116d6:
007116D6  46                        INC ESI
007116D7  3B F7                     CMP ESI,EDI
007116D9  7C DB                     JL 0x007116b6
LAB_007116db:
007116DB  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
007116DE  5F                        POP EDI
007116DF  5E                        POP ESI
007116E0  5B                        POP EBX
007116E1  8B E5                     MOV ESP,EBP
007116E3  5D                        POP EBP
007116E4  C2 0C 00                  RET 0xc
LAB_007116e7:
007116E7  33 C0                     XOR EAX,EAX
007116E9  5B                        POP EBX
007116EA  8B E5                     MOV ESP,EBP
007116EC  5D                        POP EBP
007116ED  C2 0C 00                  RET 0xc
