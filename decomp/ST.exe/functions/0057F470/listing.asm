STDcResourcC::sub_0057F470:
0057F470  55                        PUSH EBP
0057F471  8B EC                     MOV EBP,ESP
0057F473  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0057F476  83 F8 FF                  CMP EAX,-0x1
0057F479  75 1B                     JNZ 0x0057f496
0057F47B  8B 81 59 02 00 00         MOV EAX,dword ptr [ECX + 0x259]
0057F481  50                        PUSH EAX
0057F482  68 DE 00 00 00            PUSH 0xde
0057F487  E8 6F 25 E8 FF            CALL 0x004019fb
0057F48C  8B 0D 9C B0 7C 00         MOV ECX,dword ptr [0x007cb09c]
0057F492  50                        PUSH EAX
0057F493  51                        PUSH ECX
0057F494  EB 08                     JMP 0x0057f49e
LAB_0057f496:
0057F496  8B 15 A0 B0 7C 00         MOV EDX,dword ptr [0x007cb0a0]
0057F49C  50                        PUSH EAX
0057F49D  52                        PUSH EDX
LAB_0057f49e:
0057F49E  68 90 16 81 00            PUSH 0x811690
0057F4A3  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
0057F4A9  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0057F4AC  83 C4 0C                  ADD ESP,0xc
0057F4AF  85 C0                     TEST EAX,EAX
0057F4B1  74 3A                     JZ 0x0057f4ed
0057F4B3  56                        PUSH ESI
0057F4B4  57                        PUSH EDI
0057F4B5  BF 60 B2 7C 00            MOV EDI,0x7cb260
0057F4BA  83 C9 FF                  OR ECX,0xffffffff
0057F4BD  33 C0                     XOR EAX,EAX
0057F4BF  F2 AE                     SCASB.REPNE ES:EDI
0057F4C1  F7 D1                     NOT ECX
0057F4C3  2B F9                     SUB EDI,ECX
0057F4C5  8B F7                     MOV ESI,EDI
0057F4C7  8B D1                     MOV EDX,ECX
0057F4C9  BF 90 16 81 00            MOV EDI,0x811690
0057F4CE  83 C9 FF                  OR ECX,0xffffffff
0057F4D1  F2 AE                     SCASB.REPNE ES:EDI
0057F4D3  8B CA                     MOV ECX,EDX
0057F4D5  4F                        DEC EDI
0057F4D6  C1 E9 02                  SHR ECX,0x2
0057F4D9  F3 A5                     MOVSD.REP ES:EDI,ESI
0057F4DB  8B CA                     MOV ECX,EDX
0057F4DD  B8 90 16 81 00            MOV EAX,0x811690
0057F4E2  83 E1 03                  AND ECX,0x3
0057F4E5  F3 A4                     MOVSB.REP ES:EDI,ESI
0057F4E7  5F                        POP EDI
0057F4E8  5E                        POP ESI
0057F4E9  5D                        POP EBP
0057F4EA  C2 08 00                  RET 0x8
LAB_0057f4ed:
0057F4ED  B8 90 16 81 00            MOV EAX,0x811690
0057F4F2  5D                        POP EBP
0057F4F3  C2 08 00                  RET 0x8
