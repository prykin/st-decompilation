FUN_005f3530:
005F3530  55                        PUSH EBP
005F3531  8B EC                     MOV EBP,ESP
005F3533  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
005F3536  8B 88 71 01 00 00         MOV ECX,dword ptr [EAX + 0x171]
005F353C  8B 49 29                  MOV ECX,dword ptr [ECX + 0x29]
005F353F  85 C9                     TEST ECX,ECX
005F3541  74 70                     JZ 0x005f35b3
005F3543  8B 90 AB 00 00 00         MOV EDX,dword ptr [EAX + 0xab]
005F3549  8B 0C 91                  MOV ECX,dword ptr [ECX + EDX*0x4]
005F354C  85 C9                     TEST ECX,ECX
005F354E  74 63                     JZ 0x005f35b3
005F3550  DB 80 9B 00 00 00         FILD dword ptr [EAX + 0x9b]
005F3556  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
005F3559  52                        PUSH EDX
005F355A  6A 20                     PUSH 0x20
005F355C  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
005F3562  6A 20                     PUSH 0x20
005F3564  51                        PUSH ECX
005F3565  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
005F356B  D9 1C 24                  FSTP float ptr [ESP]
005F356E  DB 80 97 00 00 00         FILD dword ptr [EAX + 0x97]
005F3574  51                        PUSH ECX
005F3575  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
005F357B  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
005F3581  D8 25 A8 07 79 00         FSUB float ptr [0x007907a8]
005F3587  D9 1C 24                  FSTP float ptr [ESP]
005F358A  DB 80 93 00 00 00         FILD dword ptr [EAX + 0x93]
005F3590  51                        PUSH ECX
005F3591  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
005F3597  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
005F359D  D8 25 A8 07 79 00         FSUB float ptr [0x007907a8]
005F35A3  D9 1C 24                  FSTP float ptr [ESP]
005F35A6  51                        PUSH ECX
005F35A7  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
005F35AA  E8 6E 08 E1 FF            CALL 0x00403e1d
005F35AF  5D                        POP EBP
005F35B0  C2 10 00                  RET 0x10
LAB_005f35b3:
005F35B3  B8 FC FF FF FF            MOV EAX,0xfffffffc
005F35B8  5D                        POP EBP
005F35B9  C2 10 00                  RET 0x10
