FUN_00734990:
00734990  55                        PUSH EBP
00734991  8B EC                     MOV EBP,ESP
00734993  83 EC 08                  SUB ESP,0x8
00734996  83 3D 8C 14 7F 00 01      CMP dword ptr [0x007f148c],0x1
0073499D  7E 16                     JLE 0x007349b5
0073499F  68 07 01 00 00            PUSH 0x107
007349A4  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
007349A7  50                        PUSH EAX
007349A8  E8 63 BC FF FF            CALL 0x00730610
007349AD  83 C4 08                  ADD ESP,0x8
007349B0  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
007349B3  EB 17                     JMP 0x007349cc
LAB_007349b5:
007349B5  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
007349B8  8B 15 80 12 7F 00         MOV EDX,dword ptr [0x007f1280]
007349BE  33 C0                     XOR EAX,EAX
007349C0  66 8B 04 4A               MOV AX,word ptr [EDX + ECX*0x2]
007349C4  25 07 01 00 00            AND EAX,0x107
007349C9  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_007349cc:
007349CC  83 7D FC 00               CMP dword ptr [EBP + -0x4],0x0
007349D0  75 0F                     JNZ 0x007349e1
007349D2  83 7D 08 5F               CMP dword ptr [EBP + 0x8],0x5f
007349D6  74 09                     JZ 0x007349e1
007349D8  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
007349DF  EB 07                     JMP 0x007349e8
LAB_007349e1:
007349E1  C7 45 F8 01 00 00 00      MOV dword ptr [EBP + -0x8],0x1
LAB_007349e8:
007349E8  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
007349EB  8B E5                     MOV ESP,EBP
007349ED  5D                        POP EBP
007349EE  C3                        RET
