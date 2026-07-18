FUN_0055d6f0:
0055D6F0  55                        PUSH EBP
0055D6F1  8B EC                     MOV EBP,ESP
0055D6F3  56                        PUSH ESI
0055D6F4  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
0055D6F7  33 C0                     XOR EAX,EAX
0055D6F9  85 F6                     TEST ESI,ESI
0055D6FB  7E 19                     JLE 0x0055d716
0055D6FD  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0055D700  57                        PUSH EDI
0055D701  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
LAB_0055d704:
0055D704  33 D2                     XOR EDX,EDX
0055D706  8A 14 08                  MOV DL,byte ptr [EAX + ECX*0x1]
0055D709  40                        INC EAX
0055D70A  3B C6                     CMP EAX,ESI
0055D70C  8A 14 3A                  MOV DL,byte ptr [EDX + EDI*0x1]
0055D70F  88 54 08 FF               MOV byte ptr [EAX + ECX*0x1 + -0x1],DL
0055D713  7C EF                     JL 0x0055d704
0055D715  5F                        POP EDI
LAB_0055d716:
0055D716  5E                        POP ESI
0055D717  5D                        POP EBP
0055D718  C3                        RET
