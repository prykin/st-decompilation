FUN_0067bc80:
0067BC80  55                        PUSH EBP
0067BC81  8B EC                     MOV EBP,ESP
0067BC83  51                        PUSH ECX
0067BC84  53                        PUSH EBX
0067BC85  56                        PUSH ESI
0067BC86  57                        PUSH EDI
0067BC87  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0067BC8A  33 F6                     XOR ESI,ESI
0067BC8C  BA 10 27 00 00            MOV EDX,0x2710
0067BC91  8B 5F 0C                  MOV EBX,dword ptr [EDI + 0xc]
0067BC94  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
0067BC97  3B F3                     CMP ESI,EBX
0067BC99  7D 2F                     JGE 0x0067bcca
LAB_0067bc9b:
0067BC9B  73 28                     JNC 0x0067bcc5
0067BC9D  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
0067BCA0  8B 4F 1C                  MOV ECX,dword ptr [EDI + 0x1c]
0067BCA3  0F AF C6                  IMUL EAX,ESI
0067BCA6  03 C1                     ADD EAX,ECX
0067BCA8  85 C0                     TEST EAX,EAX
0067BCAA  74 19                     JZ 0x0067bcc5
0067BCAC  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0067BCAF  85 48 14                  TEST dword ptr [EAX + 0x14],ECX
0067BCB2  74 11                     JZ 0x0067bcc5
0067BCB4  0F BF 48 1A               MOVSX ECX,word ptr [EAX + 0x1a]
0067BCB8  3B CA                     CMP ECX,EDX
0067BCBA  7D 09                     JGE 0x0067bcc5
0067BCBC  8B D1                     MOV EDX,ECX
0067BCBE  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0067BCC1  85 D2                     TEST EDX,EDX
0067BCC3  74 08                     JZ 0x0067bccd
LAB_0067bcc5:
0067BCC5  46                        INC ESI
0067BCC6  3B F3                     CMP ESI,EBX
0067BCC8  7C D1                     JL 0x0067bc9b
LAB_0067bcca:
0067BCCA  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_0067bccd:
0067BCCD  5F                        POP EDI
0067BCCE  5E                        POP ESI
0067BCCF  5B                        POP EBX
0067BCD0  8B E5                     MOV ESP,EBP
0067BCD2  5D                        POP EBP
0067BCD3  C3                        RET
