FUN_005fcdc0:
005FCDC0  8B 89 46 03 00 00         MOV ECX,dword ptr [ECX + 0x346]
005FCDC6  8D 81 24 FF FF FF         LEA EAX,[ECX + 0xffffff24]
005FCDCC  83 F8 06                  CMP EAX,0x6
005FCDCF  77 1F                     JA 0x005fcdf0
switchD_005fcdd1::switchD:
005FCDD1  FF 24 85 F4 CD 5F 00      JMP dword ptr [EAX*0x4 + 0x5fcdf4]
switchD_005fcdd1::caseD_dc:
005FCDD8  B8 02 00 00 00            MOV EAX,0x2
005FCDDD  C3                        RET
switchD_005fcdd1::caseD_de:
005FCDDE  B8 01 00 00 00            MOV EAX,0x1
005FCDE3  C3                        RET
switchD_005fcdd1::caseD_e2:
005FCDE4  B8 03 00 00 00            MOV EAX,0x3
005FCDE9  C3                        RET
switchD_005fcdd1::caseD_e0:
005FCDEA  B8 04 00 00 00            MOV EAX,0x4
005FCDEF  C3                        RET
switchD_005fcdd1::caseD_dd:
005FCDF0  33 C0                     XOR EAX,EAX
005FCDF2  C3                        RET
