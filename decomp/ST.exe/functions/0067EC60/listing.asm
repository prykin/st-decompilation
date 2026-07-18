FUN_0067ec60:
0067EC60  55                        PUSH EBP
0067EC61  8B EC                     MOV EBP,ESP
0067EC63  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0067EC66  50                        PUSH EAX
0067EC67  68 C8 55 7D 00            PUSH 0x7d55c8
0067EC6C  68 90 88 84 00            PUSH 0x848890
0067EC71  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
0067EC77  83 C4 0C                  ADD ESP,0xc
0067EC7A  B8 90 88 84 00            MOV EAX,0x848890
0067EC7F  5D                        POP EBP
0067EC80  C3                        RET
