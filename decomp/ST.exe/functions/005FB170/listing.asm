FUN_005fb170:
005FB170  56                        PUSH ESI
005FB171  8B F1                     MOV ESI,ECX
005FB173  8B 86 DD 02 00 00         MOV EAX,dword ptr [ESI + 0x2dd]
005FB179  48                        DEC EAX
005FB17A  83 F8 0B                  CMP EAX,0xb
005FB17D  77 32                     JA 0x005fb1b1
005FB17F  33 C9                     XOR ECX,ECX
005FB181  8A 88 C0 B1 5F 00         MOV CL,byte ptr [EAX + 0x5fb1c0]
switchD_005fb187::switchD:
005FB187  FF 24 8D B4 B1 5F 00      JMP dword ptr [ECX*0x4 + 0x5fb1b4]
switchD_005fb187::caseD_1:
005FB18E  8B CE                     MOV ECX,ESI
005FB190  E8 6F 69 E0 FF            CALL 0x00401b04
005FB195  5E                        POP ESI
005FB196  C3                        RET
switchD_005fb187::caseD_2:
005FB197  6A 00                     PUSH 0x0
005FB199  8B CE                     MOV ECX,ESI
005FB19B  E8 EE 6B E0 FF            CALL 0x00401d8e
005FB1A0  8B CE                     MOV ECX,ESI
005FB1A2  E8 73 8A E0 FF            CALL 0x00403c1a
005FB1A7  C7 86 DD 02 00 00 0D 00 00 00  MOV dword ptr [ESI + 0x2dd],0xd
switchD_005fb187::caseD_7:
005FB1B1  5E                        POP ESI
005FB1B2  C3                        RET
