FUN_004c28b0:
004C28B0  55                        PUSH EBP
004C28B1  8B EC                     MOV EBP,ESP
004C28B3  56                        PUSH ESI
004C28B4  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
004C28B7  57                        PUSH EDI
004C28B8  8B F9                     MOV EDI,ECX
004C28BA  8B CE                     MOV ECX,ESI
004C28BC  33 C0                     XOR EAX,EAX
004C28BE  89 01                     MOV dword ptr [ECX],EAX
004C28C0  89 41 04                  MOV dword ptr [ECX + 0x4],EAX
004C28C3  66 89 41 08               MOV word ptr [ECX + 0x8],AX
004C28C7  88 41 0A                  MOV byte ptr [ECX + 0xa],AL
004C28CA  C6 06 01                  MOV byte ptr [ESI],0x1
004C28CD  8A 97 3D 02 00 00         MOV DL,byte ptr [EDI + 0x23d]
004C28D3  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004C28D9  52                        PUSH EDX
004C28DA  E8 D8 20 F4 FF            CALL 0x004049b7
004C28DF  88 46 06                  MOV byte ptr [ESI + 0x6],AL
004C28E2  8B 87 45 02 00 00         MOV EAX,dword ptr [EDI + 0x245]
004C28E8  83 F8 06                  CMP EAX,0x6
004C28EB  77 11                     JA 0x004c28fe
switchD_004c28ed::switchD:
004C28ED  FF 24 85 14 29 4C 00      JMP dword ptr [EAX*0x4 + 0x4c2914]
switchD_004c28ed::caseD_0:
004C28F4  C6 46 01 00               MOV byte ptr [ESI + 0x1],0x0
004C28F8  EB 04                     JMP 0x004c28fe
switchD_004c28ed::caseD_3:
004C28FA  C6 46 01 01               MOV byte ptr [ESI + 0x1],0x1
switchD_004c28ed::default:
004C28FE  8B 87 AC 05 00 00         MOV EAX,dword ptr [EDI + 0x5ac]
004C2904  89 46 02                  MOV dword ptr [ESI + 0x2],EAX
004C2907  8B 4F 18                  MOV ECX,dword ptr [EDI + 0x18]
004C290A  89 4E 07                  MOV dword ptr [ESI + 0x7],ECX
004C290D  5F                        POP EDI
004C290E  5E                        POP ESI
004C290F  5D                        POP EBP
004C2910  C2 04 00                  RET 0x4
