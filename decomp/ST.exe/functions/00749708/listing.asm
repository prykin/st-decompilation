FUN_00749708:
00749708  55                        PUSH EBP
00749709  8B EC                     MOV EBP,ESP
0074970B  51                        PUSH ECX
0074970C  53                        PUSH EBX
0074970D  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
00749710  85 DB                     TEST EBX,EBX
00749712  75 08                     JNZ 0x0074971c
00749714  6A 01                     PUSH 0x1
00749716  58                        POP EAX
00749717  E9 20 01 00 00            JMP 0x0074983c
LAB_0074971c:
0074971C  57                        PUSH EDI
0074971D  56                        PUSH ESI
0074971E  8B 33                     MOV ESI,dword ptr [EBX]
00749720  83 EC 10                  SUB ESP,0x10
00749723  8B FC                     MOV EDI,ESP
00749725  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00749728  A5                        MOVSD ES:EDI,ESI
00749729  8B 08                     MOV ECX,dword ptr [EAX]
0074972B  50                        PUSH EAX
0074972C  A5                        MOVSD ES:EDI,ESI
0074972D  A5                        MOVSD ES:EDI,ESI
0074972E  A5                        MOVSD ES:EDI,ESI
0074972F  FF 51 1C                  CALL dword ptr [ECX + 0x1c]
00749732  83 7D 10 00               CMP dword ptr [EBP + 0x10],0x0
00749736  8B C8                     MOV ECX,EAX
00749738  0F 84 EF 00 00 00         JZ 0x0074982d
0074973E  FF 73 08                  PUSH dword ptr [EBX + 0x8]
00749741  8B 33                     MOV ESI,dword ptr [EBX]
00749743  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00749746  FF 73 04                  PUSH dword ptr [EBX + 0x4]
00749749  8B 08                     MOV ECX,dword ptr [EAX]
0074974B  83 EC 10                  SUB ESP,0x10
0074974E  8B FC                     MOV EDI,ESP
00749750  A5                        MOVSD ES:EDI,ESI
00749751  A5                        MOVSD ES:EDI,ESI
00749752  A5                        MOVSD ES:EDI,ESI
00749753  50                        PUSH EAX
00749754  A5                        MOVSD ES:EDI,ESI
00749755  FF 51 0C                  CALL dword ptr [ECX + 0xc]
00749758  8B C8                     MOV ECX,EAX
0074975A  33 C0                     XOR EAX,EAX
0074975C  3B C8                     CMP ECX,EAX
0074975E  0F 8C C9 00 00 00         JL 0x0074982d
00749764  39 43 0C                  CMP dword ptr [EBX + 0xc],EAX
00749767  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0074976A  0F 86 BD 00 00 00         JBE 0x0074982d
00749770  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
LAB_00749773:
00749773  8B 43 10                  MOV EAX,dword ptr [EBX + 0x10]
00749776  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00749779  03 C1                     ADD EAX,ECX
0074977B  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0074977E  FF 70 18                  PUSH dword ptr [EAX + 0x18]
00749781  8B 70 14                  MOV ESI,dword ptr [EAX + 0x14]
00749784  8B 11                     MOV EDX,dword ptr [ECX]
00749786  83 EC 10                  SUB ESP,0x10
00749789  8B FC                     MOV EDI,ESP
0074978B  FF 70 10                  PUSH dword ptr [EAX + 0x10]
0074978E  A5                        MOVSD ES:EDI,ESI
0074978F  FF 70 0C                  PUSH dword ptr [EAX + 0xc]
00749792  A5                        MOVSD ES:EDI,ESI
00749793  FF 70 08                  PUSH dword ptr [EAX + 0x8]
00749796  A5                        MOVSD ES:EDI,ESI
00749797  FF 70 04                  PUSH dword ptr [EAX + 0x4]
0074979A  A5                        MOVSD ES:EDI,ESI
0074979B  FF 30                     PUSH dword ptr [EAX]
0074979D  8B 33                     MOV ESI,dword ptr [EBX]
0074979F  83 EC 10                  SUB ESP,0x10
007497A2  8B FC                     MOV EDI,ESP
007497A4  A5                        MOVSD ES:EDI,ESI
007497A5  A5                        MOVSD ES:EDI,ESI
007497A6  A5                        MOVSD ES:EDI,ESI
007497A7  51                        PUSH ECX
007497A8  A5                        MOVSD ES:EDI,ESI
007497A9  FF 52 14                  CALL dword ptr [EDX + 0x14]
007497AC  8B C8                     MOV ECX,EAX
007497AE  85 C9                     TEST ECX,ECX
007497B0  7C 7B                     JL 0x0074982d
007497B2  8B 43 10                  MOV EAX,dword ptr [EBX + 0x10]
007497B5  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
007497B8  83 65 10 00               AND dword ptr [EBP + 0x10],0x0
007497BC  03 C2                     ADD EAX,EDX
007497BE  83 78 1C 00               CMP dword ptr [EAX + 0x1c],0x0
007497C2  76 52                     JBE 0x00749816
LAB_007497c4:
007497C4  8B 48 20                  MOV ECX,dword ptr [EAX + 0x20]
007497C7  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
007497CA  83 EC 10                  SUB ESP,0x10
007497CD  8B 74 D1 04               MOV ESI,dword ptr [ECX + EDX*0x8 + 0x4]
007497D1  8D 0C D1                  LEA ECX,[ECX + EDX*0x8]
007497D4  8B FC                     MOV EDI,ESP
007497D6  83 EC 10                  SUB ESP,0x10
007497D9  A5                        MOVSD ES:EDI,ESI
007497DA  A5                        MOVSD ES:EDI,ESI
007497DB  A5                        MOVSD ES:EDI,ESI
007497DC  A5                        MOVSD ES:EDI,ESI
007497DD  8B 31                     MOV ESI,dword ptr [ECX]
007497DF  8B FC                     MOV EDI,ESP
007497E1  A5                        MOVSD ES:EDI,ESI
007497E2  FF 30                     PUSH dword ptr [EAX]
007497E4  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
007497E7  A5                        MOVSD ES:EDI,ESI
007497E8  A5                        MOVSD ES:EDI,ESI
007497E9  A5                        MOVSD ES:EDI,ESI
007497EA  8B 33                     MOV ESI,dword ptr [EBX]
007497EC  83 EC 10                  SUB ESP,0x10
007497EF  8B FC                     MOV EDI,ESP
007497F1  8B 12                     MOV EDX,dword ptr [EDX]
007497F3  A5                        MOVSD ES:EDI,ESI
007497F4  A5                        MOVSD ES:EDI,ESI
007497F5  FF 75 0C                  PUSH dword ptr [EBP + 0xc]
007497F8  A5                        MOVSD ES:EDI,ESI
007497F9  A5                        MOVSD ES:EDI,ESI
007497FA  FF 52 18                  CALL dword ptr [EDX + 0x18]
007497FD  8B C8                     MOV ECX,EAX
007497FF  85 C9                     TEST ECX,ECX
00749801  7C 2A                     JL 0x0074982d
00749803  8B 43 10                  MOV EAX,dword ptr [EBX + 0x10]
00749806  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00749809  FF 45 10                  INC dword ptr [EBP + 0x10]
0074980C  03 C2                     ADD EAX,EDX
0074980E  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00749811  3B 50 1C                  CMP EDX,dword ptr [EAX + 0x1c]
00749814  72 AE                     JC 0x007497c4
LAB_00749816:
00749816  85 C9                     TEST ECX,ECX
00749818  7C 13                     JL 0x0074982d
0074981A  FF 45 FC                  INC dword ptr [EBP + -0x4]
0074981D  83 45 08 24               ADD dword ptr [EBP + 0x8],0x24
00749821  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00749824  3B 43 0C                  CMP EAX,dword ptr [EBX + 0xc]
00749827  0F 82 46 FF FF FF         JC 0x00749773
LAB_0074982d:
0074982D  8B C1                     MOV EAX,ECX
0074982F  5E                        POP ESI
00749830  2D 02 00 07 80            SUB EAX,0x80070002
00749835  5F                        POP EDI
00749836  F7 D8                     NEG EAX
00749838  1B C0                     SBB EAX,EAX
0074983A  23 C1                     AND EAX,ECX
LAB_0074983c:
0074983C  5B                        POP EBX
0074983D  C9                        LEAVE
0074983E  C2 0C 00                  RET 0xc
