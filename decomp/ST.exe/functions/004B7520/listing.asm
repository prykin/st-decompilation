FUN_004b7520:
004B7520  55                        PUSH EBP
004B7521  8B EC                     MOV EBP,ESP
004B7523  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
004B7526  B8 01 00 00 00            MOV EAX,0x1
004B752B  83 C1 CE                  ADD ECX,-0x32
004B752E  83 F9 46                  CMP ECX,0x46
004B7531  77 12                     JA 0x004b7545
switchD_004b7533::switchD:
004B7533  FF 24 8D 4C 75 4B 00      JMP dword ptr [ECX*0x4 + 0x4b754c]
switchD_004b7533::caseD_38:
004B753A  33 C0                     XOR EAX,EAX
004B753C  5D                        POP EBP
004B753D  C2 08 00                  RET 0x8
switchD_004b7533::caseD_32:
004B7540  B8 01 00 00 00            MOV EAX,0x1
switchD_004b7533::caseD_74:
004B7545  5D                        POP EBP
004B7546  C2 08 00                  RET 0x8
