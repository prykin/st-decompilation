FUN_004ad550:
004AD550  56                        PUSH ESI
004AD551  8B F1                     MOV ESI,ECX
004AD553  8A 46 10                  MOV AL,byte ptr [ESI + 0x10]
004AD556  C6 46 11 00               MOV byte ptr [ESI + 0x11],0x0
004AD55A  84 C0                     TEST AL,AL
004AD55C  75 2E                     JNZ 0x004ad58c
004AD55E  0F BE 46 13               MOVSX EAX,byte ptr [ESI + 0x13]
004AD562  8B 4E 20                  MOV ECX,dword ptr [ESI + 0x20]
004AD565  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
004AD568  8B 04 81                  MOV EAX,dword ptr [ECX + EAX*0x4]
004AD56B  85 C0                     TEST EAX,EAX
004AD56D  74 1D                     JZ 0x004ad58c
004AD56F  8B 48 29                  MOV ECX,dword ptr [EAX + 0x29]
004AD572  85 C9                     TEST ECX,ECX
004AD574  74 16                     JZ 0x004ad58c
004AD576  8B 56 34                  MOV EDX,dword ptr [ESI + 0x34]
004AD579  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
004AD57C  8B 4E 3C                  MOV ECX,dword ptr [ESI + 0x3c]
004AD57F  56                        PUSH ESI
004AD580  68 99 49 40 00            PUSH 0x404999
004AD585  52                        PUSH EDX
004AD586  50                        PUSH EAX
004AD587  E8 94 BF 23 00            CALL 0x006e9520
LAB_004ad58c:
004AD58C  80 7E 10 01               CMP byte ptr [ESI + 0x10],0x1
004AD590  75 1D                     JNZ 0x004ad5af
004AD592  8B 46 38                  MOV EAX,dword ptr [ESI + 0x38]
004AD595  85 C0                     TEST EAX,EAX
004AD597  74 16                     JZ 0x004ad5af
004AD599  8B 4E 34                  MOV ECX,dword ptr [ESI + 0x34]
004AD59C  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
004AD59F  56                        PUSH ESI
004AD5A0  68 64 5B 40 00            PUSH 0x405b64
004AD5A5  51                        PUSH ECX
004AD5A6  8B 4E 3C                  MOV ECX,dword ptr [ESI + 0x3c]
004AD5A9  52                        PUSH EDX
004AD5AA  E8 71 BF 23 00            CALL 0x006e9520
LAB_004ad5af:
004AD5AF  5E                        POP ESI
004AD5B0  C3                        RET
