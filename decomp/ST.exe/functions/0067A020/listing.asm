FUN_0067a020:
0067A020  55                        PUSH EBP
0067A021  8B EC                     MOV EBP,ESP
0067A023  51                        PUSH ECX
0067A024  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0067A027  8B 89 95 06 00 00         MOV ECX,dword ptr [ECX + 0x695]
0067A02D  85 C9                     TEST ECX,ECX
0067A02F  56                        PUSH ESI
0067A030  74 65                     JZ 0x0067a097
0067A032  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
0067A035  33 F6                     XOR ESI,ESI
0067A037  85 C0                     TEST EAX,EAX
0067A039  7E 5C                     JLE 0x0067a097
0067A03B  53                        PUSH EBX
0067A03C  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
0067A03F  57                        PUSH EDI
0067A040  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
LAB_0067a043:
0067A043  85 C9                     TEST ECX,ECX
0067A045  74 3D                     JZ 0x0067a084
0067A047  85 F6                     TEST ESI,ESI
0067A049  7C 39                     JL 0x0067a084
0067A04B  3B F0                     CMP ESI,EAX
0067A04D  7D 35                     JGE 0x0067a084
0067A04F  73 0D                     JNC 0x0067a05e
0067A051  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
0067A054  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
0067A057  0F AF C6                  IMUL EAX,ESI
0067A05A  03 C2                     ADD EAX,EDX
0067A05C  EB 02                     JMP 0x0067a060
LAB_0067a05e:
0067A05E  33 C0                     XOR EAX,EAX
LAB_0067a060:
0067A060  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
0067A063  85 C9                     TEST ECX,ECX
0067A065  74 1D                     JZ 0x0067a084
0067A067  8B 08                     MOV ECX,dword ptr [EAX]
0067A069  85 C9                     TEST ECX,ECX
0067A06B  74 17                     JZ 0x0067a084
0067A06D  85 FF                     TEST EDI,EDI
0067A06F  74 13                     JZ 0x0067a084
0067A071  85 DB                     TEST EBX,EBX
0067A073  7D 08                     JGE 0x0067a07d
0067A075  57                        PUSH EDI
0067A076  E8 66 70 D8 FF            CALL 0x004010e1
0067A07B  EB 07                     JMP 0x0067a084
LAB_0067a07d:
0067A07D  53                        PUSH EBX
0067A07E  57                        PUSH EDI
0067A07F  E8 BE 9B D8 FF            CALL 0x00403c42
LAB_0067a084:
0067A084  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0067A087  46                        INC ESI
0067A088  8B 88 95 06 00 00         MOV ECX,dword ptr [EAX + 0x695]
0067A08E  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
0067A091  3B F0                     CMP ESI,EAX
0067A093  7C AE                     JL 0x0067a043
0067A095  5F                        POP EDI
0067A096  5B                        POP EBX
LAB_0067a097:
0067A097  5E                        POP ESI
0067A098  8B E5                     MOV ESP,EBP
0067A09A  5D                        POP EBP
0067A09B  C2 08 00                  RET 0x8
