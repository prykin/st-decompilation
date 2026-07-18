FUN_0065e3b0:
0065E3B0  55                        PUSH EBP
0065E3B1  8B EC                     MOV EBP,ESP
0065E3B3  51                        PUSH ECX
0065E3B4  53                        PUSH EBX
0065E3B5  56                        PUSH ESI
0065E3B6  57                        PUSH EDI
0065E3B7  33 FF                     XOR EDI,EDI
0065E3B9  8B D9                     MOV EBX,ECX
0065E3BB  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0065E3BE  E8 0C 35 DA FF            CALL 0x004018cf
0065E3C3  8B F0                     MOV ESI,EAX
0065E3C5  85 F6                     TEST ESI,ESI
0065E3C7  74 58                     JZ 0x0065e421
0065E3C9  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
0065E3CC  85 C0                     TEST EAX,EAX
0065E3CE  7E 41                     JLE 0x0065e411
0065E3D0  3B F8                     CMP EDI,EAX
LAB_0065e3d2:
0065E3D2  73 0D                     JNC 0x0065e3e1
0065E3D4  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
0065E3D7  8B 4E 1C                  MOV ECX,dword ptr [ESI + 0x1c]
0065E3DA  0F AF C7                  IMUL EAX,EDI
0065E3DD  03 C1                     ADD EAX,ECX
0065E3DF  EB 02                     JMP 0x0065e3e3
LAB_0065e3e1:
0065E3E1  33 C0                     XOR EAX,EAX
LAB_0065e3e3:
0065E3E3  66 8B 00                  MOV AX,word ptr [EAX]
0065E3E6  8A 4B 24                  MOV CL,byte ptr [EBX + 0x24]
0065E3E9  6A 01                     PUSH 0x1
0065E3EB  50                        PUSH EAX
0065E3EC  51                        PUSH ECX
0065E3ED  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0065E3F3  E8 C2 44 DA FF            CALL 0x004028ba
0065E3F8  85 C0                     TEST EAX,EAX
0065E3FA  74 0D                     JZ 0x0065e409
0065E3FC  8B 10                     MOV EDX,dword ptr [EAX]
0065E3FE  8B C8                     MOV ECX,EAX
0065E400  FF 92 D4 00 00 00         CALL dword ptr [EDX + 0xd4]
0065E406  01 45 FC                  ADD dword ptr [EBP + -0x4],EAX
LAB_0065e409:
0065E409  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
0065E40C  47                        INC EDI
0065E40D  3B F8                     CMP EDI,EAX
0065E40F  7C C1                     JL 0x0065e3d2
LAB_0065e411:
0065E411  56                        PUSH ESI
0065E412  E8 F9 FC 04 00            CALL 0x006ae110
0065E417  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0065E41A  5F                        POP EDI
0065E41B  5E                        POP ESI
0065E41C  5B                        POP EBX
0065E41D  8B E5                     MOV ESP,EBP
0065E41F  5D                        POP EBP
0065E420  C3                        RET
LAB_0065e421:
0065E421  8B C7                     MOV EAX,EDI
0065E423  5F                        POP EDI
0065E424  5E                        POP ESI
0065E425  5B                        POP EBX
0065E426  8B E5                     MOV ESP,EBP
0065E428  5D                        POP EBP
0065E429  C3                        RET
