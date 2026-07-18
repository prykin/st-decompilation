FUN_00750080:
00750080  55                        PUSH EBP
00750081  8B EC                     MOV EBP,ESP
00750083  51                        PUSH ECX
00750084  51                        PUSH ECX
00750085  56                        PUSH ESI
00750086  8B F1                     MOV ESI,ECX
00750088  57                        PUSH EDI
00750089  8D 46 08                  LEA EAX,[ESI + 0x8]
0075008C  50                        PUSH EAX
0075008D  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00750090  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
00750096  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00750099  83 65 FC 00               AND dword ptr [EBP + -0x4],0x0
0075009D  6A 50                     PUSH 0x50
0075009F  83 27 00                  AND dword ptr [EDI],0x0
007500A2  E8 89 E4 FD FF            CALL 0x0072e530
007500A7  85 C0                     TEST EAX,EAX
007500A9  59                        POP ECX
007500AA  74 33                     JZ 0x007500df
007500AC  FF 75 34                  PUSH dword ptr [EBP + 0x34]
007500AF  DD 45 10                  FLD double ptr [EBP + 0x10]
007500B2  FF 75 30                  PUSH dword ptr [EBP + 0x30]
007500B5  FF 75 2C                  PUSH dword ptr [EBP + 0x2c]
007500B8  FF 75 28                  PUSH dword ptr [EBP + 0x28]
007500BB  FF 75 24                  PUSH dword ptr [EBP + 0x24]
007500BE  FF 75 20                  PUSH dword ptr [EBP + 0x20]
007500C1  FF 75 1C                  PUSH dword ptr [EBP + 0x1c]
007500C4  FF 75 18                  PUSH dword ptr [EBP + 0x18]
007500C7  51                        PUSH ECX
007500C8  51                        PUSH ECX
007500C9  8D 4D FC                  LEA ECX,[EBP + -0x4]
007500CC  DD 1C 24                  FSTP double ptr [ESP]
007500CF  FF 75 0C                  PUSH dword ptr [EBP + 0xc]
007500D2  51                        PUSH ECX
007500D3  6A 00                     PUSH 0x0
007500D5  56                        PUSH ESI
007500D6  8B C8                     MOV ECX,EAX
007500D8  E8 6C FB FF FF            CALL 0x0074fc49
007500DD  EB 02                     JMP 0x007500e1
LAB_007500df:
007500DF  33 C0                     XOR EAX,EAX
LAB_007500e1:
007500E1  85 C0                     TEST EAX,EAX
007500E3  75 09                     JNZ 0x007500ee
007500E5  C7 45 FC 0E 00 07 80      MOV dword ptr [EBP + -0x4],0x8007000e
007500EC  EB 02                     JMP 0x007500f0
LAB_007500ee:
007500EE  89 07                     MOV dword ptr [EDI],EAX
LAB_007500f0:
007500F0  FF 75 F8                  PUSH dword ptr [EBP + -0x8]
007500F3  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
007500F6  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
007500FC  8B C6                     MOV EAX,ESI
007500FE  5F                        POP EDI
007500FF  5E                        POP ESI
00750100  C9                        LEAVE
00750101  C2 30 00                  RET 0x30
