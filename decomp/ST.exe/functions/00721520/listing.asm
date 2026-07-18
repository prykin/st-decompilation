FUN_00721520:
00721520  55                        PUSH EBP
00721521  8B EC                     MOV EBP,ESP
00721523  83 EC 10                  SUB ESP,0x10
00721526  53                        PUSH EBX
00721527  8B D9                     MOV EBX,ECX
00721529  56                        PUSH ESI
0072152A  57                        PUSH EDI
0072152B  8B B3 38 01 00 00         MOV ESI,dword ptr [EBX + 0x138]
00721531  85 F6                     TEST ESI,ESI
00721533  0F 84 4A 02 00 00         JZ 0x00721783
00721539  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
0072153C  85 C9                     TEST ECX,ECX
0072153E  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00721541  0F 84 3C 02 00 00         JZ 0x00721783
00721547  8B 83 48 01 00 00         MOV EAX,dword ptr [EBX + 0x148]
0072154D  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00721550  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
00721553  03 C2                     ADD EAX,EDX
00721555  8B 93 44 01 00 00         MOV EDX,dword ptr [EBX + 0x144]
0072155B  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0072155E  03 D7                     ADD EDX,EDI
00721560  3B D1                     CMP EDX,ECX
00721562  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
00721565  7D 0B                     JGE 0x00721572
00721567  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
0072156A  8B 34 90                  MOV ESI,dword ptr [EAX + EDX*0x4]
0072156D  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
00721570  EB 0A                     JMP 0x0072157c
LAB_00721572:
00721572  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
00721579  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
LAB_0072157c:
0072157C  8B FE                     MOV EDI,ESI
0072157E  83 C9 FF                  OR ECX,0xffffffff
00721581  33 C0                     XOR EAX,EAX
00721583  F2 AE                     SCASB.REPNE ES:EDI
00721585  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00721588  33 FF                     XOR EDI,EDI
0072158A  F7 D1                     NOT ECX
0072158C  49                        DEC ECX
0072158D  3B C7                     CMP EAX,EDI
0072158F  0F 8D E8 00 00 00         JGE 0x0072167d
00721595  3B D7                     CMP EDX,EDI
00721597  0F 8E E6 01 00 00         JLE 0x00721783
0072159D  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
007215A0  8D 42 FF                  LEA EAX,[EDX + -0x1]
007215A3  3B C1                     CMP EAX,ECX
007215A5  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
007215A8  7D 12                     JGE 0x007215bc
007215AA  8B 83 38 01 00 00         MOV EAX,dword ptr [EBX + 0x138]
007215B0  8B 48 14                  MOV ECX,dword ptr [EAX + 0x14]
007215B3  8B 54 91 FC               MOV EDX,dword ptr [ECX + EDX*0x4 + -0x4]
007215B7  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
007215BA  EB 03                     JMP 0x007215bf
LAB_007215bc:
007215BC  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
LAB_007215bf:
007215BF  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
007215C2  83 C9 FF                  OR ECX,0xffffffff
007215C5  33 C0                     XOR EAX,EAX
007215C7  F2 AE                     SCASB.REPNE ES:EDI
007215C9  F7 D1                     NOT ECX
007215CB  49                        DEC ECX
007215CC  8B FE                     MOV EDI,ESI
007215CE  8B D1                     MOV EDX,ECX
007215D0  83 C9 FF                  OR ECX,0xffffffff
007215D3  F2 AE                     SCASB.REPNE ES:EDI
007215D5  F7 D1                     NOT ECX
007215D7  49                        DEC ECX
007215D8  8D 44 0A 02               LEA EAX,[EDX + ECX*0x1 + 0x2]
007215DC  50                        PUSH EAX
007215DD  E8 2E 96 F8 FF            CALL 0x006aac10
007215E2  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
007215E5  8B D0                     MOV EDX,EAX
007215E7  83 C9 FF                  OR ECX,0xffffffff
007215EA  33 C0                     XOR EAX,EAX
007215EC  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
007215EF  F2 AE                     SCASB.REPNE ES:EDI
007215F1  F7 D1                     NOT ECX
007215F3  2B F9                     SUB EDI,ECX
007215F5  8B C1                     MOV EAX,ECX
007215F7  8B F7                     MOV ESI,EDI
007215F9  8B FA                     MOV EDI,EDX
007215FB  C1 E9 02                  SHR ECX,0x2
007215FE  F3 A5                     MOVSD.REP ES:EDI,ESI
00721600  8B C8                     MOV ECX,EAX
00721602  33 C0                     XOR EAX,EAX
00721604  83 E1 03                  AND ECX,0x3
00721607  F3 A4                     MOVSB.REP ES:EDI,ESI
00721609  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
0072160C  83 C9 FF                  OR ECX,0xffffffff
0072160F  F2 AE                     SCASB.REPNE ES:EDI
00721611  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00721614  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
00721617  F7 D1                     NOT ECX
00721619  49                        DEC ECX
0072161A  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
0072161D  03 D1                     ADD EDX,ECX
0072161F  83 C9 FF                  OR ECX,0xffffffff
00721622  F2 AE                     SCASB.REPNE ES:EDI
00721624  F7 D1                     NOT ECX
00721626  2B F9                     SUB EDI,ECX
00721628  8B C1                     MOV EAX,ECX
0072162A  8B F7                     MOV ESI,EDI
0072162C  8B FA                     MOV EDI,EDX
0072162E  C1 E9 02                  SHR ECX,0x2
00721631  F3 A5                     MOVSD.REP ES:EDI,ESI
00721633  8B C8                     MOV ECX,EAX
00721635  83 E1 03                  AND ECX,0x3
00721638  F3 A4                     MOVSB.REP ES:EDI,ESI
0072163A  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
0072163D  8B 8B 38 01 00 00         MOV ECX,dword ptr [EBX + 0x138]
00721643  56                        PUSH ESI
00721644  51                        PUSH ECX
00721645  E8 E6 61 F9 FF            CALL 0x006b7830
0072164A  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0072164D  8B 83 38 01 00 00         MOV EAX,dword ptr [EBX + 0x138]
00721653  4E                        DEC ESI
00721654  52                        PUSH EDX
00721655  56                        PUSH ESI
00721656  50                        PUSH EAX
00721657  E8 C4 49 F9 FF            CALL 0x006b6020
0072165C  8D 4D F8                  LEA ECX,[EBP + -0x8]
0072165F  51                        PUSH ECX
00721660  E8 FB 99 F8 FF            CALL 0x006ab060
00721665  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00721668  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0072166B  52                        PUSH EDX
0072166C  50                        PUSH EAX
0072166D  8B CB                     MOV ECX,EBX
0072166F  E8 0C FA FF FF            CALL 0x00721080
00721674  5F                        POP EDI
00721675  5E                        POP ESI
00721676  5B                        POP EBX
00721677  8B E5                     MOV ESP,EBP
00721679  5D                        POP EBP
0072167A  C2 08 00                  RET 0x8
LAB_0072167d:
0072167D  3B C1                     CMP EAX,ECX
0072167F  0F 85 E8 00 00 00         JNZ 0x0072176d
00721685  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00721688  8D 48 FF                  LEA ECX,[EAX + -0x1]
0072168B  3B D1                     CMP EDX,ECX
0072168D  0F 8D F0 00 00 00         JGE 0x00721783
00721693  42                        INC EDX
00721694  3B D0                     CMP EDX,EAX
00721696  7D 11                     JGE 0x007216a9
00721698  8B 83 38 01 00 00         MOV EAX,dword ptr [EBX + 0x138]
0072169E  8B 40 14                  MOV EAX,dword ptr [EAX + 0x14]
007216A1  8B 0C 90                  MOV ECX,dword ptr [EAX + EDX*0x4]
007216A4  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
007216A7  EB 03                     JMP 0x007216ac
LAB_007216a9:
007216A9  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
LAB_007216ac:
007216AC  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
007216AF  83 C9 FF                  OR ECX,0xffffffff
007216B2  33 C0                     XOR EAX,EAX
007216B4  F2 AE                     SCASB.REPNE ES:EDI
007216B6  F7 D1                     NOT ECX
007216B8  49                        DEC ECX
007216B9  8B FE                     MOV EDI,ESI
007216BB  8B D1                     MOV EDX,ECX
007216BD  83 C9 FF                  OR ECX,0xffffffff
007216C0  F2 AE                     SCASB.REPNE ES:EDI
007216C2  F7 D1                     NOT ECX
007216C4  49                        DEC ECX
007216C5  8D 44 0A 02               LEA EAX,[EDX + ECX*0x1 + 0x2]
007216C9  50                        PUSH EAX
007216CA  E8 41 95 F8 FF            CALL 0x006aac10
007216CF  8B D0                     MOV EDX,EAX
007216D1  8B FE                     MOV EDI,ESI
007216D3  83 C9 FF                  OR ECX,0xffffffff
007216D6  33 C0                     XOR EAX,EAX
007216D8  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
007216DB  F2 AE                     SCASB.REPNE ES:EDI
007216DD  F7 D1                     NOT ECX
007216DF  2B F9                     SUB EDI,ECX
007216E1  8B C1                     MOV EAX,ECX
007216E3  8B F7                     MOV ESI,EDI
007216E5  8B FA                     MOV EDI,EDX
007216E7  C1 E9 02                  SHR ECX,0x2
007216EA  F3 A5                     MOVSD.REP ES:EDI,ESI
007216EC  8B C8                     MOV ECX,EAX
007216EE  33 C0                     XOR EAX,EAX
007216F0  83 E1 03                  AND ECX,0x3
007216F3  F3 A4                     MOVSB.REP ES:EDI,ESI
007216F5  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
007216F8  83 C9 FF                  OR ECX,0xffffffff
007216FB  F2 AE                     SCASB.REPNE ES:EDI
007216FD  F7 D1                     NOT ECX
007216FF  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
00721702  49                        DEC ECX
00721703  8B D1                     MOV EDX,ECX
00721705  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00721708  03 D1                     ADD EDX,ECX
0072170A  83 C9 FF                  OR ECX,0xffffffff
0072170D  F2 AE                     SCASB.REPNE ES:EDI
0072170F  F7 D1                     NOT ECX
00721711  2B F9                     SUB EDI,ECX
00721713  8B C1                     MOV EAX,ECX
00721715  8B F7                     MOV ESI,EDI
00721717  8B FA                     MOV EDI,EDX
00721719  C1 E9 02                  SHR ECX,0x2
0072171C  F3 A5                     MOVSD.REP ES:EDI,ESI
0072171E  8B C8                     MOV ECX,EAX
00721720  83 E1 03                  AND ECX,0x3
00721723  F3 A4                     MOVSB.REP ES:EDI,ESI
00721725  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00721728  8B 93 38 01 00 00         MOV EDX,dword ptr [EBX + 0x138]
0072172E  8D 41 01                  LEA EAX,[ECX + 0x1]
00721731  50                        PUSH EAX
00721732  52                        PUSH EDX
00721733  E8 F8 60 F9 FF            CALL 0x006b7830
00721738  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0072173B  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0072173E  8B 93 38 01 00 00         MOV EDX,dword ptr [EBX + 0x138]
00721744  50                        PUSH EAX
00721745  51                        PUSH ECX
00721746  52                        PUSH EDX
00721747  E8 D4 48 F9 FF            CALL 0x006b6020
0072174C  8D 45 F8                  LEA EAX,[EBP + -0x8]
0072174F  50                        PUSH EAX
00721750  E8 0B 99 F8 FF            CALL 0x006ab060
00721755  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00721758  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0072175B  51                        PUSH ECX
0072175C  52                        PUSH EDX
0072175D  8B CB                     MOV ECX,EBX
0072175F  E8 1C F9 FF FF            CALL 0x00721080
00721764  5F                        POP EDI
00721765  5E                        POP ESI
00721766  5B                        POP EBX
00721767  8B E5                     MOV ESP,EBP
00721769  5D                        POP EBP
0072176A  C2 08 00                  RET 0x8
LAB_0072176d:
0072176D  50                        PUSH EAX
0072176E  56                        PUSH ESI
0072176F  E8 AC 18 03 00            CALL 0x00753020
00721774  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00721777  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0072177A  50                        PUSH EAX
0072177B  51                        PUSH ECX
0072177C  8B CB                     MOV ECX,EBX
0072177E  E8 FD F8 FF FF            CALL 0x00721080
LAB_00721783:
00721783  5F                        POP EDI
00721784  5E                        POP ESI
00721785  5B                        POP EBX
00721786  8B E5                     MOV ESP,EBP
00721788  5D                        POP EBP
00721789  C2 08 00                  RET 0x8
