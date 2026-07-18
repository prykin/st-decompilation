FUN_005b9330:
005B9330  55                        PUSH EBP
005B9331  8B EC                     MOV EBP,ESP
005B9333  83 EC 48                  SUB ESP,0x48
005B9336  56                        PUSH ESI
005B9337  8B F1                     MOV ESI,ECX
005B9339  57                        PUSH EDI
005B933A  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
005B933D  8B 4E 10                  MOV ECX,dword ptr [ESI + 0x10]
005B9340  E8 6B BE 12 00            CALL 0x006e51b0
005B9345  89 46 61                  MOV dword ptr [ESI + 0x61],EAX
005B9348  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005B934D  8D 55 BC                  LEA EDX,[EBP + -0x44]
005B9350  8D 4D B8                  LEA ECX,[EBP + -0x48]
005B9353  6A 00                     PUSH 0x0
005B9355  52                        PUSH EDX
005B9356  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
005B9359  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005B935F  E8 8C 44 17 00            CALL 0x0072d7f0
005B9364  8B F0                     MOV ESI,EAX
005B9366  83 C4 08                  ADD ESP,0x8
005B9369  85 F6                     TEST ESI,ESI
005B936B  0F 85 2F 01 00 00         JNZ 0x005b94a0
005B9371  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
005B9374  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
005B9377  57                        PUSH EDI
005B9378  8B CE                     MOV ECX,ESI
005B937A  E8 E4 91 E4 FF            CALL 0x00402563
005B937F  8B 47 10                  MOV EAX,dword ptr [EDI + 0x10]
005B9382  3D 7F 69 00 00            CMP EAX,0x697f
005B9387  72 6E                     JC 0x005b93f7
005B9389  3D FF 69 00 00            CMP EAX,0x69ff
005B938E  73 67                     JNC 0x005b93f7
005B9390  05 81 96 FF FF            ADD EAX,0xffff9681
005B9395  83 F8 07                  CMP EAX,0x7
005B9398  77 5D                     JA 0x005b93f7
switchD_005b939a::switchD:
005B939A  FF 24 85 EC 94 5B 00      JMP dword ptr [EAX*0x4 + 0x5b94ec]
switchD_005b939a::caseD_697f:
005B93A1  6A FF                     PUSH -0x1
005B93A3  6A FF                     PUSH -0x1
005B93A5  6A 03                     PUSH 0x3
005B93A7  6A 00                     PUSH 0x0
005B93A9  EB 44                     JMP 0x005b93ef
switchD_005b939a::caseD_6980:
005B93AB  6A FF                     PUSH -0x1
005B93AD  6A FF                     PUSH -0x1
005B93AF  6A 02                     PUSH 0x2
005B93B1  6A 01                     PUSH 0x1
005B93B3  EB 3A                     JMP 0x005b93ef
switchD_005b939a::caseD_6981:
005B93B5  6A FF                     PUSH -0x1
005B93B7  6A FF                     PUSH -0x1
005B93B9  6A 02                     PUSH 0x2
005B93BB  6A 02                     PUSH 0x2
005B93BD  EB 30                     JMP 0x005b93ef
switchD_005b939a::caseD_6982:
005B93BF  6A FF                     PUSH -0x1
005B93C1  6A FE                     PUSH -0x2
005B93C3  6A 02                     PUSH 0x2
005B93C5  6A 03                     PUSH 0x3
005B93C7  EB 26                     JMP 0x005b93ef
switchD_005b939a::caseD_6983:
005B93C9  6A FF                     PUSH -0x1
005B93CB  6A 02                     PUSH 0x2
005B93CD  6A 02                     PUSH 0x2
005B93CF  6A 04                     PUSH 0x4
005B93D1  EB 1C                     JMP 0x005b93ef
switchD_005b939a::caseD_6984:
005B93D3  6A FF                     PUSH -0x1
005B93D5  6A 01                     PUSH 0x1
005B93D7  6A 02                     PUSH 0x2
005B93D9  6A 05                     PUSH 0x5
005B93DB  EB 12                     JMP 0x005b93ef
switchD_005b939a::caseD_6985:
005B93DD  6A FF                     PUSH -0x1
005B93DF  6A 01                     PUSH 0x1
005B93E1  6A 02                     PUSH 0x2
005B93E3  6A 06                     PUSH 0x6
005B93E5  EB 08                     JMP 0x005b93ef
switchD_005b939a::caseD_6986:
005B93E7  6A FF                     PUSH -0x1
005B93E9  6A 01                     PUSH 0x1
005B93EB  6A 03                     PUSH 0x3
005B93ED  6A 07                     PUSH 0x7
LAB_005b93ef:
005B93EF  57                        PUSH EDI
005B93F0  8B CE                     MOV ECX,ESI
005B93F2  E8 A7 B5 E4 FF            CALL 0x0040499e
switchD_005b939a::default:
005B93F7  8B 47 10                  MOV EAX,dword ptr [EDI + 0x10]
005B93FA  3D FF 68 00 00            CMP EAX,0x68ff
005B93FF  72 55                     JC 0x005b9456
005B9401  3D 7F 69 00 00            CMP EAX,0x697f
005B9406  73 4E                     JNC 0x005b9456
005B9408  FE C0                     INC AL
005B940A  88 86 5A 1A 00 00         MOV byte ptr [ESI + 0x1a5a],AL
005B9410  25 FF 00 00 00            AND EAX,0xff
005B9415  8D 0C C5 00 00 00 00      LEA ECX,[EAX*0x8 + 0x0]
005B941C  2B C8                     SUB ECX,EAX
005B941E  8D 0C 49                  LEA ECX,[ECX + ECX*0x2]
005B9421  8D 04 C8                  LEA EAX,[EAX + ECX*0x8]
005B9424  8D 14 46                  LEA EDX,[ESI + EAX*0x2]
005B9427  03 C2                     ADD EAX,EDX
005B9429  8A 88 E1 00 00 00         MOV CL,byte ptr [EAX + 0xe1]
005B942F  84 C9                     TEST CL,CL
005B9431  74 09                     JZ 0x005b943c
005B9433  8B 06                     MOV EAX,dword ptr [ESI]
005B9435  8B CE                     MOV ECX,ESI
005B9437  FF 50 08                  CALL dword ptr [EAX + 0x8]
005B943A  EB 1A                     JMP 0x005b9456
LAB_005b943c:
005B943C  8B 88 D1 00 00 00         MOV ECX,dword ptr [EAX + 0xd1]
005B9442  85 C9                     TEST ECX,ECX
005B9444  74 10                     JZ 0x005b9456
005B9446  05 C1 00 00 00            ADD EAX,0xc1
005B944B  B9 20 76 80 00            MOV ECX,0x807620
005B9450  50                        PUSH EAX
005B9451  E8 FA A6 12 00            CALL 0x006e3b50
LAB_005b9456:
005B9456  8B 47 10                  MOV EAX,dword ptr [EDI + 0x10]
005B9459  83 F8 05                  CMP EAX,0x5
005B945C  77 29                     JA 0x005b9487
switchD_005b945e::switchD:
005B945E  FF 24 85 0C 95 5B 00      JMP dword ptr [EAX*0x4 + 0x5b950c]
switchD_005b945e::caseD_2:
005B9465  8B CE                     MOV ECX,ESI
005B9467  E8 65 8C E4 FF            CALL 0x004020d1
005B946C  EB 19                     JMP 0x005b9487
switchD_005b945e::caseD_3:
005B946E  8B CE                     MOV ECX,ESI
005B9470  E8 AA BB E4 FF            CALL 0x0040501f
005B9475  EB 10                     JMP 0x005b9487
switchD_005b945e::caseD_5:
005B9477  8B CE                     MOV ECX,ESI
005B9479  E8 3A 87 E4 FF            CALL 0x00401bb8
005B947E  EB 07                     JMP 0x005b9487
switchD_005b945e::caseD_0:
005B9480  8B CE                     MOV ECX,ESI
005B9482  E8 0C A2 E4 FF            CALL 0x00403693
switchD_005b945e::caseD_1:
005B9487  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
005B948A  57                        PUSH EDI
005B948B  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005B9491  8B CE                     MOV ECX,ESI
005B9493  E8 E8 7D E4 FF            CALL 0x00401280
005B9498  5F                        POP EDI
005B9499  5E                        POP ESI
005B949A  8B E5                     MOV ESP,EBP
005B949C  5D                        POP EBP
005B949D  C2 04 00                  RET 0x4
LAB_005b94a0:
005B94A0  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
005B94A3  68 10 CD 7C 00            PUSH 0x7ccd10
005B94A8  68 CC 4C 7A 00            PUSH 0x7a4ccc
005B94AD  56                        PUSH ESI
005B94AE  6A 00                     PUSH 0x0
005B94B0  68 00 02 00 00            PUSH 0x200
005B94B5  68 74 CB 7C 00            PUSH 0x7ccb74
005B94BA  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005B94C0  E8 0B 40 0F 00            CALL 0x006ad4d0
005B94C5  83 C4 18                  ADD ESP,0x18
005B94C8  85 C0                     TEST EAX,EAX
005B94CA  74 01                     JZ 0x005b94cd
005B94CC  CC                        INT3
LAB_005b94cd:
005B94CD  68 00 02 00 00            PUSH 0x200
005B94D2  68 74 CB 7C 00            PUSH 0x7ccb74
005B94D7  6A 00                     PUSH 0x0
005B94D9  56                        PUSH ESI
005B94DA  E8 61 C9 0E 00            CALL 0x006a5e40
005B94DF  5F                        POP EDI
005B94E0  B8 FF FF 00 00            MOV EAX,0xffff
005B94E5  5E                        POP ESI
005B94E6  8B E5                     MOV ESP,EBP
005B94E8  5D                        POP EBP
005B94E9  C2 04 00                  RET 0x4
