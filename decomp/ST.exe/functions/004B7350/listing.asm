FUN_004b7350:
004B7350  55                        PUSH EBP
004B7351  8B EC                     MOV EBP,ESP
004B7353  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
004B7356  83 C8 FF                  OR EAX,0xffffffff
004B7359  83 C1 CE                  ADD ECX,-0x32
004B735C  83 F9 46                  CMP ECX,0x46
004B735F  77 3D                     JA 0x004b739e
switchD_004b7361::switchD:
004B7361  FF 24 8D A4 73 4B 00      JMP dword ptr [ECX*0x4 + 0x4b73a4]
switchD_004b7361::caseD_32:
004B7368  33 C0                     XOR EAX,EAX
004B736A  5D                        POP EBP
004B736B  C2 08 00                  RET 0x8
switchD_004b7361::caseD_33:
004B736E  B8 04 00 00 00            MOV EAX,0x4
004B7373  5D                        POP EBP
004B7374  C2 08 00                  RET 0x8
switchD_004b7361::caseD_35:
004B7377  B8 03 00 00 00            MOV EAX,0x3
004B737C  5D                        POP EBP
004B737D  C2 08 00                  RET 0x8
switchD_004b7361::caseD_34:
004B7380  B8 02 00 00 00            MOV EAX,0x2
004B7385  5D                        POP EBP
004B7386  C2 08 00                  RET 0x8
switchD_004b7361::caseD_37:
004B7389  B8 05 00 00 00            MOV EAX,0x5
004B738E  5D                        POP EBP
004B738F  C2 08 00                  RET 0x8
switchD_004b7361::caseD_36:
004B7392  83 C8 FF                  OR EAX,0xffffffff
004B7395  5D                        POP EBP
004B7396  C2 08 00                  RET 0x8
switchD_004b7361::caseD_78:
004B7399  B8 01 00 00 00            MOV EAX,0x1
switchD_004b7361::caseD_74:
004B739E  5D                        POP EBP
004B739F  C2 08 00                  RET 0x8
