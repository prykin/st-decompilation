FUN_006e47e0:
006E47E0  55                        PUSH EBP
006E47E1  8B EC                     MOV EBP,ESP
006E47E3  83 EC 74                  SUB ESP,0x74
006E47E6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
006E47EB  56                        PUSH ESI
006E47EC  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006E47EF  57                        PUSH EDI
006E47F0  8D 55 90                  LEA EDX,[EBP + -0x70]
006E47F3  8D 4D 8C                  LEA ECX,[EBP + -0x74]
006E47F6  6A 00                     PUSH 0x0
006E47F8  52                        PUSH EDX
006E47F9  89 45 8C                  MOV dword ptr [EBP + -0x74],EAX
006E47FC  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006E4802  E8 E9 8F 04 00            CALL 0x0072d7f0
006E4807  8B F0                     MOV ESI,EAX
006E4809  83 C4 08                  ADD ESP,0x8
006E480C  85 F6                     TEST ESI,ESI
006E480E  0F 85 FA 00 00 00         JNZ 0x006e490e
006E4814  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006E4817  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
006E481A  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006E481D  85 C0                     TEST EAX,EAX
006E481F  74 33                     JZ 0x006e4854
006E4821  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
006E4824  8B CF                     MOV ECX,EDI
006E4826  50                        PUSH EAX
006E4827  E8 B4 FC FF FF            CALL 0x006e44e0
006E482C  85 C0                     TEST EAX,EAX
006E482E  74 24                     JZ 0x006e4854
006E4830  8B 4E 14                  MOV ECX,dword ptr [ESI + 0x14]
006E4833  51                        PUSH ECX
006E4834  68 90 E9 7E 00            PUSH 0x7ee990
006E4839  6A 00                     PUSH 0x0
006E483B  6A 00                     PUSH 0x0
006E483D  68 F9 01 00 00            PUSH 0x1f9
006E4842  68 8C E7 7E 00            PUSH 0x7ee78c
006E4847  E8 84 8C FC FF            CALL 0x006ad4d0
006E484C  83 C4 18                  ADD ESP,0x18
006E484F  85 C0                     TEST EAX,EAX
006E4851  74 01                     JZ 0x006e4854
006E4853  CC                        INT3
LAB_006e4854:
006E4854  8B 56 14                  MOV EDX,dword ptr [ESI + 0x14]
006E4857  8B CF                     MOV ECX,EDI
006E4859  52                        PUSH EDX
006E485A  E8 41 FD FF FF            CALL 0x006e45a0
006E485F  85 C0                     TEST EAX,EAX
006E4861  74 3F                     JZ 0x006e48a2
006E4863  83 38 01                  CMP dword ptr [EAX],0x1
006E4866  0F 84 8F 00 00 00         JZ 0x006e48fb
006E486C  8D 4D D0                  LEA ECX,[EBP + -0x30]
006E486F  C7 00 01 00 00 00         MOV dword ptr [EAX],0x1
006E4875  8B 06                     MOV EAX,dword ptr [ESI]
006E4877  51                        PUSH ECX
006E4878  8B CE                     MOV ECX,ESI
006E487A  C7 45 DC 0F 00 00 00      MOV dword ptr [EBP + -0x24],0xf
006E4881  C7 45 E0 08 00 00 00      MOV dword ptr [EBP + -0x20],0x8
006E4888  FF 50 18                  CALL dword ptr [EAX + 0x18]
006E488B  85 C0                     TEST EAX,EAX
006E488D  74 6C                     JZ 0x006e48fb
006E488F  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
006E4895  68 04 02 00 00            PUSH 0x204
006E489A  68 8C E7 7E 00            PUSH 0x7ee78c
006E489F  52                        PUSH EDX
006E48A0  EB 53                     JMP 0x006e48f5
LAB_006e48a2:
006E48A2  C7 46 1C 00 00 00 00      MOV dword ptr [ESI + 0x1c],0x0
006E48A9  8B 4F 10                  MOV ECX,dword ptr [EDI + 0x10]
006E48AC  8D 45 F0                  LEA EAX,[EBP + -0x10]
006E48AF  C7 45 F0 01 00 00 00      MOV dword ptr [EBP + -0x10],0x1
006E48B6  50                        PUSH EAX
006E48B7  51                        PUSH ECX
006E48B8  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
006E48BB  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
006E48C2  E8 F9 98 FC FF            CALL 0x006ae1c0
006E48C7  8B 16                     MOV EDX,dword ptr [ESI]
006E48C9  8D 45 D0                  LEA EAX,[EBP + -0x30]
006E48CC  50                        PUSH EAX
006E48CD  8B CE                     MOV ECX,ESI
006E48CF  C7 45 DC 0F 00 00 00      MOV dword ptr [EBP + -0x24],0xf
006E48D6  C7 45 E0 08 00 00 00      MOV dword ptr [EBP + -0x20],0x8
006E48DD  FF 52 18                  CALL dword ptr [EDX + 0x18]
006E48E0  85 C0                     TEST EAX,EAX
006E48E2  74 17                     JZ 0x006e48fb
006E48E4  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
006E48EA  68 0F 02 00 00            PUSH 0x20f
006E48EF  68 8C E7 7E 00            PUSH 0x7ee78c
006E48F4  51                        PUSH ECX
LAB_006e48f5:
006E48F5  50                        PUSH EAX
006E48F6  E8 45 15 FC FF            CALL 0x006a5e40
LAB_006e48fb:
006E48FB  8B 55 8C                  MOV EDX,dword ptr [EBP + -0x74]
006E48FE  33 C0                     XOR EAX,EAX
006E4900  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
006E4906  5F                        POP EDI
006E4907  5E                        POP ESI
006E4908  8B E5                     MOV ESP,EBP
006E490A  5D                        POP EBP
006E490B  C2 08 00                  RET 0x8
LAB_006e490e:
006E490E  8B 45 8C                  MOV EAX,dword ptr [EBP + -0x74]
006E4911  68 70 E9 7E 00            PUSH 0x7ee970
006E4916  68 CC 4C 7A 00            PUSH 0x7a4ccc
006E491B  56                        PUSH ESI
006E491C  6A 00                     PUSH 0x0
006E491E  68 12 02 00 00            PUSH 0x212
006E4923  68 8C E7 7E 00            PUSH 0x7ee78c
006E4928  A3 F8 8D 85 00            MOV [0x00858df8],EAX
006E492D  E8 9E 8B FC FF            CALL 0x006ad4d0
006E4932  83 C4 18                  ADD ESP,0x18
006E4935  85 C0                     TEST EAX,EAX
006E4937  74 01                     JZ 0x006e493a
006E4939  CC                        INT3
LAB_006e493a:
006E493A  68 13 02 00 00            PUSH 0x213
006E493F  68 8C E7 7E 00            PUSH 0x7ee78c
006E4944  6A 00                     PUSH 0x0
006E4946  56                        PUSH ESI
006E4947  E8 F4 14 FC FF            CALL 0x006a5e40
006E494C  8B C6                     MOV EAX,ESI
006E494E  5F                        POP EDI
006E494F  5E                        POP ESI
006E4950  8B E5                     MOV ESP,EBP
006E4952  5D                        POP EBP
006E4953  C2 08 00                  RET 0x8
