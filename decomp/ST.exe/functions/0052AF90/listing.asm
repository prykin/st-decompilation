FUN_0052af90:
0052AF90  55                        PUSH EBP
0052AF91  8B EC                     MOV EBP,ESP
0052AF93  DB 45 10                  FILD dword ptr [EBP + 0x10]
0052AF96  51                        PUSH ECX
0052AF97  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0052AF9A  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0052AFA0  D8 05 F4 04 79 00         FADD float ptr [0x007904f4]
0052AFA6  D9 1C 24                  FSTP float ptr [ESP]
0052AFA9  DB 45 0C                  FILD dword ptr [EBP + 0xc]
0052AFAC  51                        PUSH ECX
0052AFAD  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0052AFB3  D8 05 F4 04 79 00         FADD float ptr [0x007904f4]
0052AFB9  D9 1C 24                  FSTP float ptr [ESP]
0052AFBC  50                        PUSH EAX
0052AFBD  E8 99 7D ED FF            CALL 0x00402d5b
0052AFC2  83 C4 0C                  ADD ESP,0xc
0052AFC5  5D                        POP EBP
0052AFC6  C3                        RET
