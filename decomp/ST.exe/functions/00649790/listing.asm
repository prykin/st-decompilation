FUN_00649790:
00649790  55                        PUSH EBP
00649791  8B EC                     MOV EBP,ESP
00649793  81 EC 90 04 00 00         SUB ESP,0x490
00649799  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0064979E  53                        PUSH EBX
0064979F  56                        PUSH ESI
006497A0  57                        PUSH EDI
006497A1  33 FF                     XOR EDI,EDI
006497A3  8D 55 90                  LEA EDX,[EBP + -0x70]
006497A6  8D 4D 8C                  LEA ECX,[EBP + -0x74]
006497A9  57                        PUSH EDI
006497AA  52                        PUSH EDX
006497AB  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
006497AE  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
006497B1  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
006497B4  89 45 8C                  MOV dword ptr [EBP + -0x74],EAX
006497B7  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006497BD  E8 2E 40 0E 00            CALL 0x0072d7f0
006497C2  8B F0                     MOV ESI,EAX
006497C4  83 C4 08                  ADD ESP,0x8
006497C7  3B F7                     CMP ESI,EDI
006497C9  0F 85 95 01 00 00         JNZ 0x00649964
006497CF  B9 06 00 00 00            MOV ECX,0x6
006497D4  33 C0                     XOR EAX,EAX
006497D6  8D 7D D0                  LEA EDI,[EBP + -0x30]
006497D9  8D 95 74 FC FF FF         LEA EDX,[EBP + 0xfffffc74]
006497DF  F3 AB                     STOSD.REP ES:EDI
006497E1  B9 C6 00 00 00            MOV ECX,0xc6
006497E6  8D BD 70 FB FF FF         LEA EDI,[EBP + 0xfffffb70]
006497EC  F3 AB                     STOSD.REP ES:EDI
006497EE  83 C9 FF                  OR ECX,0xffffffff
006497F1  BF 80 76 80 00            MOV EDI,0x807680
006497F6  F2 AE                     SCASB.REPNE ES:EDI
006497F8  F7 D1                     NOT ECX
006497FA  2B F9                     SUB EDI,ECX
006497FC  8D 9D 74 FC FF FF         LEA EBX,[EBP + 0xfffffc74]
00649802  8B C1                     MOV EAX,ECX
00649804  8B F7                     MOV ESI,EDI
00649806  C1 E9 02                  SHR ECX,0x2
00649809  8B FA                     MOV EDI,EDX
0064980B  8B 15 5C D6 79 00         MOV EDX,dword ptr [0x0079d65c]
00649811  F3 A5                     MOVSD.REP ES:EDI,ESI
00649813  8B C8                     MOV ECX,EAX
00649815  33 C0                     XOR EAX,EAX
00649817  83 E1 03                  AND ECX,0x3
0064981A  F3 A4                     MOVSB.REP ES:EDI,ESI
0064981C  83 C9 FF                  OR ECX,0xffffffff
0064981F  8B FA                     MOV EDI,EDX
00649821  F2 AE                     SCASB.REPNE ES:EDI
00649823  F7 D1                     NOT ECX
00649825  2B F9                     SUB EDI,ECX
00649827  8B F7                     MOV ESI,EDI
00649829  8B FB                     MOV EDI,EBX
0064982B  8B D9                     MOV EBX,ECX
0064982D  83 C9 FF                  OR ECX,0xffffffff
00649830  F2 AE                     SCASB.REPNE ES:EDI
00649832  8B CB                     MOV ECX,EBX
00649834  4F                        DEC EDI
00649835  C1 E9 02                  SHR ECX,0x2
00649838  F3 A5                     MOVSD.REP ES:EDI,ESI
0064983A  8B CB                     MOV ECX,EBX
0064983C  8D 9D 88 FE FF FF         LEA EBX,[EBP + 0xfffffe88]
00649842  83 E1 03                  AND ECX,0x3
00649845  F3 A4                     MOVSB.REP ES:EDI,ESI
00649847  BF 80 76 80 00            MOV EDI,0x807680
0064984C  83 C9 FF                  OR ECX,0xffffffff
0064984F  F2 AE                     SCASB.REPNE ES:EDI
00649851  F7 D1                     NOT ECX
00649853  2B F9                     SUB EDI,ECX
00649855  8B C1                     MOV EAX,ECX
00649857  8B F7                     MOV ESI,EDI
00649859  8B FB                     MOV EDI,EBX
0064985B  8D 9D 88 FE FF FF         LEA EBX,[EBP + 0xfffffe88]
00649861  C1 E9 02                  SHR ECX,0x2
00649864  F3 A5                     MOVSD.REP ES:EDI,ESI
00649866  8B C8                     MOV ECX,EAX
00649868  33 C0                     XOR EAX,EAX
0064986A  83 E1 03                  AND ECX,0x3
0064986D  F3 A4                     MOVSB.REP ES:EDI,ESI
0064986F  8B FA                     MOV EDI,EDX
00649871  83 C9 FF                  OR ECX,0xffffffff
00649874  F2 AE                     SCASB.REPNE ES:EDI
00649876  F7 D1                     NOT ECX
00649878  2B F9                     SUB EDI,ECX
0064987A  8B F7                     MOV ESI,EDI
0064987C  8B D1                     MOV EDX,ECX
0064987E  8B FB                     MOV EDI,EBX
00649880  83 C9 FF                  OR ECX,0xffffffff
00649883  F2 AE                     SCASB.REPNE ES:EDI
00649885  8B CA                     MOV ECX,EDX
00649887  4F                        DEC EDI
00649888  C1 E9 02                  SHR ECX,0x2
0064988B  F3 A5                     MOVSD.REP ES:EDI,ESI
0064988D  8B CA                     MOV ECX,EDX
0064988F  8D 95 88 FE FF FF         LEA EDX,[EBP + 0xfffffe88]
00649895  83 E1 03                  AND ECX,0x3
00649898  F3 A4                     MOVSB.REP ES:EDI,ESI
0064989A  BF 18 29 7D 00            MOV EDI,0x7d2918
0064989F  83 C9 FF                  OR ECX,0xffffffff
006498A2  F2 AE                     SCASB.REPNE ES:EDI
006498A4  F7 D1                     NOT ECX
006498A6  2B F9                     SUB EDI,ECX
006498A8  8B F7                     MOV ESI,EDI
006498AA  8B D9                     MOV EBX,ECX
006498AC  8B FA                     MOV EDI,EDX
006498AE  83 C9 FF                  OR ECX,0xffffffff
006498B1  50                        PUSH EAX
006498B2  F2 AE                     SCASB.REPNE ES:EDI
006498B4  8B CB                     MOV ECX,EBX
006498B6  4F                        DEC EDI
006498B7  C1 E9 02                  SHR ECX,0x2
006498BA  F3 A5                     MOVSD.REP ES:EDI,ESI
006498BC  8B CB                     MOV ECX,EBX
006498BE  8D 45 D0                  LEA EAX,[EBP + -0x30]
006498C1  83 E1 03                  AND ECX,0x3
006498C4  50                        PUSH EAX
006498C5  F3 A4                     MOVSB.REP ES:EDI,ESI
006498C7  8D 4D E8                  LEA ECX,[EBP + -0x18]
006498CA  8D 95 70 FB FF FF         LEA EDX,[EBP + 0xfffffb70]
006498D0  51                        PUSH ECX
006498D1  8D 85 88 FE FF FF         LEA EAX,[EBP + 0xfffffe88]
006498D7  52                        PUSH EDX
006498D8  50                        PUSH EAX
006498D9  E8 25 AB DB FF            CALL 0x00404403
006498DE  83 C4 14                  ADD ESP,0x14
006498E1  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006498E4  85 C0                     TEST EAX,EAX
006498E6  74 50                     JZ 0x00649938
006498E8  8B 90 06 01 00 00         MOV EDX,dword ptr [EAX + 0x106]
006498EE  8D 4D F0                  LEA ECX,[EBP + -0x10]
006498F1  51                        PUSH ECX
006498F2  52                        PUSH EDX
006498F3  E8 C7 85 DB FF            CALL 0x00401ebf
006498F8  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
006498FB  8D 4D EC                  LEA ECX,[EBP + -0x14]
006498FE  51                        PUSH ECX
006498FF  52                        PUSH EDX
00649900  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00649903  50                        PUSH EAX
00649904  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00649907  50                        PUSH EAX
00649908  E8 F7 B8 DB FF            CALL 0x00405204
0064990D  8D 4D F4                  LEA ECX,[EBP + -0xc]
00649910  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00649913  51                        PUSH ECX
00649914  E8 1E 7C DB FF            CALL 0x00401537
00649919  8D 55 FC                  LEA EDX,[EBP + -0x4]
0064991C  52                        PUSH EDX
0064991D  E8 E3 94 DB FF            CALL 0x00402e05
00649922  8B 55 8C                  MOV EDX,dword ptr [EBP + -0x74]
00649925  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00649928  83 C4 20                  ADD ESP,0x20
0064992B  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00649931  5F                        POP EDI
00649932  5E                        POP ESI
00649933  5B                        POP EBX
00649934  8B E5                     MOV ESP,EBP
00649936  5D                        POP EBP
00649937  C3                        RET
LAB_00649938:
00649938  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0064993D  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
00649940  68 61 01 00 00            PUSH 0x161
00649945  68 80 28 7D 00            PUSH 0x7d2880
0064994A  50                        PUSH EAX
0064994B  51                        PUSH ECX
0064994C  E8 EF C4 05 00            CALL 0x006a5e40
00649951  8B 55 8C                  MOV EDX,dword ptr [EBP + -0x74]
00649954  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00649957  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0064995D  5F                        POP EDI
0064995E  5E                        POP ESI
0064995F  5B                        POP EBX
00649960  8B E5                     MOV ESP,EBP
00649962  5D                        POP EBP
00649963  C3                        RET
LAB_00649964:
00649964  8B 45 8C                  MOV EAX,dword ptr [EBP + -0x74]
00649967  8D 4D F4                  LEA ECX,[EBP + -0xc]
0064996A  51                        PUSH ECX
0064996B  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00649970  E8 C2 7B DB FF            CALL 0x00401537
00649975  8D 55 FC                  LEA EDX,[EBP + -0x4]
00649978  52                        PUSH EDX
00649979  E8 87 94 DB FF            CALL 0x00402e05
0064997E  8D 45 F8                  LEA EAX,[EBP + -0x8]
00649981  50                        PUSH EAX
00649982  E8 7E 94 DB FF            CALL 0x00402e05
00649987  68 00 29 7D 00            PUSH 0x7d2900
0064998C  68 CC 4C 7A 00            PUSH 0x7a4ccc
00649991  56                        PUSH ESI
00649992  57                        PUSH EDI
00649993  68 67 01 00 00            PUSH 0x167
00649998  68 80 28 7D 00            PUSH 0x7d2880
0064999D  E8 2E 3B 06 00            CALL 0x006ad4d0
006499A2  83 C4 24                  ADD ESP,0x24
006499A5  85 C0                     TEST EAX,EAX
006499A7  74 01                     JZ 0x006499aa
006499A9  CC                        INT3
LAB_006499aa:
006499AA  68 68 01 00 00            PUSH 0x168
006499AF  68 80 28 7D 00            PUSH 0x7d2880
006499B4  57                        PUSH EDI
006499B5  56                        PUSH ESI
006499B6  E8 85 C4 05 00            CALL 0x006a5e40
006499BB  5F                        POP EDI
006499BC  5E                        POP ESI
006499BD  33 C0                     XOR EAX,EAX
006499BF  5B                        POP EBX
006499C0  8B E5                     MOV ESP,EBP
006499C2  5D                        POP EBP
006499C3  C3                        RET
