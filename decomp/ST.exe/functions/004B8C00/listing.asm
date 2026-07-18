FUN_004b8c00:
004B8C00  8B 91 49 02 00 00         MOV EDX,dword ptr [ECX + 0x249]
004B8C06  83 C8 FF                  OR EAX,0xffffffff
004B8C09  85 D2                     TEST EDX,EDX
004B8C0B  7C 03                     JL 0x004b8c10
004B8C0D  8B C2                     MOV EAX,EDX
004B8C0F  C3                        RET
LAB_004b8c10:
004B8C10  8B 89 45 02 00 00         MOV ECX,dword ptr [ECX + 0x245]
004B8C16  83 F9 06                  CMP ECX,0x6
004B8C19  77 1B                     JA 0x004b8c36
switchD_004b8c1b::switchD:
004B8C1B  FF 24 8D 38 8C 4B 00      JMP dword ptr [ECX*0x4 + 0x4b8c38]
switchD_004b8c1b::caseD_0:
004B8C22  33 C0                     XOR EAX,EAX
004B8C24  C3                        RET
switchD_004b8c1b::caseD_1:
004B8C25  B8 01 00 00 00            MOV EAX,0x1
004B8C2A  C3                        RET
switchD_004b8c1b::caseD_2:
004B8C2B  B8 04 00 00 00            MOV EAX,0x4
004B8C30  C3                        RET
switchD_004b8c1b::caseD_6:
004B8C31  B8 06 00 00 00            MOV EAX,0x6
switchD_004b8c1b::default:
004B8C36  C3                        RET
