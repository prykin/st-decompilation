FUN_005f0380:
005F0380  8B 81 B1 02 00 00         MOV EAX,dword ptr [ECX + 0x2b1]
005F0386  83 F8 05                  CMP EAX,0x5
005F0389  77 19                     JA 0x005f03a4
switchD_005f038b::switchD:
005F038B  FF 24 85 A8 03 5F 00      JMP dword ptr [EAX*0x4 + 0x5f03a8]
switchD_005f038b::caseD_0:
005F0392  B8 01 00 00 00            MOV EAX,0x1
005F0397  C3                        RET
switchD_005f038b::caseD_1:
005F0398  B8 02 00 00 00            MOV EAX,0x2
005F039D  C3                        RET
switchD_005f038b::caseD_2:
005F039E  B8 03 00 00 00            MOV EAX,0x3
005F03A3  C3                        RET
switchD_005f038b::default:
005F03A4  33 C0                     XOR EAX,EAX
005F03A6  C3                        RET
