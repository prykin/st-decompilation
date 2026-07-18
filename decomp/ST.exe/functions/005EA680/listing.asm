WaitTy::GetMessage:
005EA680  55                        PUSH EBP
005EA681  8B EC                     MOV EBP,ESP
005EA683  81 EC A0 04 00 00         SUB ESP,0x4a0
005EA689  53                        PUSH EBX
005EA68A  56                        PUSH ESI
005EA68B  8B F1                     MOV ESI,ECX
005EA68D  57                        PUSH EDI
005EA68E  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
005EA691  8B 4E 10                  MOV ECX,dword ptr [ESI + 0x10]
005EA694  E8 17 AB 0F 00            CALL 0x006e51b0
005EA699  33 FF                     XOR EDI,EDI
005EA69B  89 46 61                  MOV dword ptr [ESI + 0x61],EAX
005EA69E  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005EA6A3  8D 55 B8                  LEA EDX,[EBP + -0x48]
005EA6A6  8D 4D B4                  LEA ECX,[EBP + -0x4c]
005EA6A9  57                        PUSH EDI
005EA6AA  52                        PUSH EDX
005EA6AB  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
005EA6AE  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005EA6B4  E8 37 31 14 00            CALL 0x0072d7f0
005EA6B9  8B F0                     MOV ESI,EAX
005EA6BB  83 C4 08                  ADD ESP,0x8
005EA6BE  3B F7                     CMP ESI,EDI
005EA6C0  0F 85 BE 04 00 00         JNZ 0x005eab84
005EA6C6  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
005EA6C9  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
005EA6CC  56                        PUSH ESI
005EA6CD  8B CB                     MOV ECX,EBX
005EA6CF  E8 8F 7E E1 FF            CALL 0x00402563
005EA6D4  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005EA6DA  56                        PUSH ESI
005EA6DB  E8 57 82 E1 FF            CALL 0x00402937
005EA6E0  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
005EA6E3  3D 35 63 00 00            CMP EAX,0x6335
005EA6E8  0F 87 A7 01 00 00         JA 0x005ea895
005EA6EE  0F 84 4C 01 00 00         JZ 0x005ea840
005EA6F4  3D 0A 61 00 00            CMP EAX,0x610a
005EA6F9  0F 87 AE 00 00 00         JA 0x005ea7ad
005EA6FF  0F 84 85 00 00 00         JZ 0x005ea78a
005EA705  83 F8 03                  CMP EAX,0x3
005EA708  77 3E                     JA 0x005ea748
005EA70A  74 30                     JZ 0x005ea73c
005EA70C  2B C7                     SUB EAX,EDI
005EA70E  74 20                     JZ 0x005ea730
005EA710  83 E8 02                  SUB EAX,0x2
005EA713  0F 85 51 04 00 00         JNZ 0x005eab6a
005EA719  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
005EA71C  8B 48 18                  MOV ECX,dword ptr [EAX + 0x18]
005EA71F  8B 50 14                  MOV EDX,dword ptr [EAX + 0x14]
005EA722  51                        PUSH ECX
005EA723  52                        PUSH EDX
005EA724  8B CB                     MOV ECX,EBX
005EA726  E8 5D 9A E1 FF            CALL 0x00404188
005EA72B  E9 3A 04 00 00            JMP 0x005eab6a
LAB_005ea730:
005EA730  8B CB                     MOV ECX,EBX
005EA732  E8 99 9D E1 FF            CALL 0x004044d0
005EA737  E9 2E 04 00 00            JMP 0x005eab6a
LAB_005ea73c:
005EA73C  8B CB                     MOV ECX,EBX
005EA73E  E8 46 B7 E1 FF            CALL 0x00405e89
005EA743  E9 22 04 00 00            JMP 0x005eab6a
LAB_005ea748:
005EA748  83 F8 05                  CMP EAX,0x5
005EA74B  74 30                     JZ 0x005ea77d
005EA74D  3D 05 61 00 00            CMP EAX,0x6105
005EA752  0F 85 12 04 00 00         JNZ 0x005eab6a
005EA758  C7 43 45 00 02 00 00      MOV dword ptr [EBX + 0x45],0x200
005EA75F  89 7B 49                  MOV dword ptr [EBX + 0x49],EDI
005EA762  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
005EA765  89 43 4D                  MOV dword ptr [EBX + 0x4d],EAX
005EA768  8B 4E 14                  MOV ECX,dword ptr [ESI + 0x14]
005EA76B  89 4B 51                  MOV dword ptr [EBX + 0x51],ECX
005EA76E  8B CB                     MOV ECX,EBX
005EA770  89 7B 55                  MOV dword ptr [EBX + 0x55],EDI
005EA773  E8 40 A6 E1 FF            CALL 0x00404db8
005EA778  E9 ED 03 00 00            JMP 0x005eab6a
LAB_005ea77d:
005EA77D  57                        PUSH EDI
005EA77E  8B CB                     MOV ECX,EBX
005EA780  E8 6F 9C E1 FF            CALL 0x004043f4
005EA785  E9 E0 03 00 00            JMP 0x005eab6a
LAB_005ea78a:
005EA78A  C7 43 45 00 02 00 00      MOV dword ptr [EBX + 0x45],0x200
005EA791  89 7B 49                  MOV dword ptr [EBX + 0x49],EDI
005EA794  8B 56 10                  MOV EDX,dword ptr [ESI + 0x10]
005EA797  8B CB                     MOV ECX,EBX
005EA799  89 53 4D                  MOV dword ptr [EBX + 0x4d],EDX
005EA79C  C7 43 51 08 00 00 00      MOV dword ptr [EBX + 0x51],0x8
005EA7A3  E8 10 A6 E1 FF            CALL 0x00404db8
005EA7A8  E9 BD 03 00 00            JMP 0x005eab6a
LAB_005ea7ad:
005EA7AD  3D 33 63 00 00            CMP EAX,0x6333
005EA7B2  77 66                     JA 0x005ea81a
005EA7B4  74 4B                     JZ 0x005ea801
005EA7B6  3D 21 61 00 00            CMP EAX,0x6121
005EA7BB  74 1C                     JZ 0x005ea7d9
005EA7BD  3D 32 63 00 00            CMP EAX,0x6332
005EA7C2  0F 85 A2 03 00 00         JNZ 0x005eab6a
005EA7C8  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005EA7CE  56                        PUSH ESI
005EA7CF  E8 9E A5 E1 FF            CALL 0x00404d72
005EA7D4  E9 91 03 00 00            JMP 0x005eab6a
LAB_005ea7d9:
005EA7D9  C7 43 45 00 02 00 00      MOV dword ptr [EBX + 0x45],0x200
005EA7E0  89 7B 49                  MOV dword ptr [EBX + 0x49],EDI
005EA7E3  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
005EA7E6  89 43 4D                  MOV dword ptr [EBX + 0x4d],EAX
005EA7E9  8B 4E 14                  MOV ECX,dword ptr [ESI + 0x14]
005EA7EC  89 4B 51                  MOV dword ptr [EBX + 0x51],ECX
005EA7EF  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
005EA7F2  8B CB                     MOV ECX,EBX
005EA7F4  89 53 55                  MOV dword ptr [EBX + 0x55],EDX
005EA7F7  E8 BC A5 E1 FF            CALL 0x00404db8
005EA7FC  E9 69 03 00 00            JMP 0x005eab6a
LAB_005ea801:
005EA801  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005EA806  57                        PUSH EDI
005EA807  05 8D 03 00 00            ADD EAX,0x38d
005EA80C  56                        PUSH ESI
005EA80D  50                        PUSH EAX
005EA80E  8B CB                     MOV ECX,EBX
005EA810  E8 BF 89 E1 FF            CALL 0x004031d4
005EA815  E9 50 03 00 00            JMP 0x005eab6a
LAB_005ea81a:
005EA81A  3D 34 63 00 00            CMP EAX,0x6334
005EA81F  0F 85 45 03 00 00         JNZ 0x005eab6a
005EA825  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005EA82B  57                        PUSH EDI
005EA82C  81 C1 1E 04 00 00         ADD ECX,0x41e
005EA832  56                        PUSH ESI
005EA833  51                        PUSH ECX
005EA834  8B CB                     MOV ECX,EBX
005EA836  E8 99 89 E1 FF            CALL 0x004031d4
005EA83B  E9 2A 03 00 00            JMP 0x005eab6a
LAB_005ea840:
005EA840  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
005EA843  33 C0                     XOR EAX,EAX
005EA845  66 8B 46 16               MOV AX,word ptr [ESI + 0x16]
005EA849  8B 4A 04                  MOV ECX,dword ptr [EDX + 0x4]
005EA84C  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
005EA852  03 C8                     ADD ECX,EAX
005EA854  89 8A CF 04 00 00         MOV dword ptr [EDX + 0x4cf],ECX
005EA85A  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005EA85F  8B 88 B3 04 00 00         MOV ECX,dword ptr [EAX + 0x4b3]
005EA865  83 F9 FF                  CMP ECX,-0x1
005EA868  0F 84 FC 02 00 00         JZ 0x005eab6a
005EA86E  8B 90 CF 04 00 00         MOV EDX,dword ptr [EAX + 0x4cf]
005EA874  52                        PUSH EDX
005EA875  8B 90 CB 04 00 00         MOV EDX,dword ptr [EAX + 0x4cb]
005EA87B  52                        PUSH EDX
005EA87C  8B 90 B7 04 00 00         MOV EDX,dword ptr [EAX + 0x4b7]
005EA882  8B 80 F7 04 00 00         MOV EAX,dword ptr [EAX + 0x4f7]
005EA888  52                        PUSH EDX
005EA889  51                        PUSH ECX
005EA88A  50                        PUSH EAX
005EA88B  E8 A0 8E 0C 00            CALL 0x006b3730
005EA890  E9 D5 02 00 00            JMP 0x005eab6a
LAB_005ea895:
005EA895  3D 42 69 00 00            CMP EAX,0x6942
005EA89A  0F 87 95 00 00 00         JA 0x005ea935
005EA8A0  74 70                     JZ 0x005ea912
005EA8A2  3D 3F 69 00 00            CMP EAX,0x693f
005EA8A7  77 52                     JA 0x005ea8fb
005EA8A9  74 44                     JZ 0x005ea8ef
005EA8AB  2D 40 63 00 00            SUB EAX,0x6340
005EA8B0  74 22                     JZ 0x005ea8d4
005EA8B2  48                        DEC EAX
005EA8B3  0F 85 B1 02 00 00         JNZ 0x005eab6a
005EA8B9  8B 8B 5B 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a5b]
005EA8BF  57                        PUSH EDI
005EA8C0  81 C1 ED 05 00 00         ADD ECX,0x5ed
005EA8C6  56                        PUSH ESI
005EA8C7  51                        PUSH ECX
005EA8C8  8B CB                     MOV ECX,EBX
005EA8CA  E8 05 89 E1 FF            CALL 0x004031d4
005EA8CF  E9 96 02 00 00            JMP 0x005eab6a
LAB_005ea8d4:
005EA8D4  8B 93 5B 1A 00 00         MOV EDX,dword ptr [EBX + 0x1a5b]
005EA8DA  57                        PUSH EDI
005EA8DB  81 C2 5C 05 00 00         ADD EDX,0x55c
005EA8E1  56                        PUSH ESI
005EA8E2  52                        PUSH EDX
005EA8E3  8B CB                     MOV ECX,EBX
005EA8E5  E8 EA 88 E1 FF            CALL 0x004031d4
005EA8EA  E9 7B 02 00 00            JMP 0x005eab6a
LAB_005ea8ef:
005EA8EF  8B CB                     MOV ECX,EBX
005EA8F1  E8 BB 8D E1 FF            CALL 0x004036b1
005EA8F6  E9 6F 02 00 00            JMP 0x005eab6a
LAB_005ea8fb:
005EA8FB  3D 40 69 00 00            CMP EAX,0x6940
005EA900  0F 85 64 02 00 00         JNZ 0x005eab6a
005EA906  8B CB                     MOV ECX,EBX
005EA908  E8 38 72 E1 FF            CALL 0x00401b45
005EA90D  E9 58 02 00 00            JMP 0x005eab6a
LAB_005ea912:
005EA912  C7 43 45 00 02 00 00      MOV dword ptr [EBX + 0x45],0x200
005EA919  89 7B 49                  MOV dword ptr [EBX + 0x49],EDI
005EA91C  C7 43 4D 02 61 00 00      MOV dword ptr [EBX + 0x4d],0x6102
005EA923  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
005EA926  8B CB                     MOV ECX,EBX
005EA928  89 43 51                  MOV dword ptr [EBX + 0x51],EAX
005EA92B  E8 88 A4 E1 FF            CALL 0x00404db8
005EA930  E9 35 02 00 00            JMP 0x005eab6a
LAB_005ea935:
005EA935  3D 51 69 00 00            CMP EAX,0x6951
005EA93A  0F 87 A0 00 00 00         JA 0x005ea9e0
005EA940  74 60                     JZ 0x005ea9a2
005EA942  2D 43 69 00 00            SUB EAX,0x6943
005EA947  74 30                     JZ 0x005ea979
005EA949  83 E8 0A                  SUB EAX,0xa
005EA94C  0F 85 18 02 00 00         JNZ 0x005eab6a
005EA952  57                        PUSH EDI
005EA953  6A 01                     PUSH 0x1
005EA955  68 05 61 00 00            PUSH 0x6105
005EA95A  8B CB                     MOV ECX,EBX
005EA95C  E8 5F 8D E1 FF            CALL 0x004036c0
005EA961  89 BB 64 1A 00 00         MOV dword ptr [EBX + 0x1a64],EDI
005EA967  A0 68 17 81 00            MOV AL,[0x00811768]
005EA96C  3C 01                     CMP AL,0x1
005EA96E  75 46                     JNZ 0x005ea9b6
005EA970  C6 05 68 17 81 00 02      MOV byte ptr [0x00811768],0x2
005EA977  EB 3D                     JMP 0x005ea9b6
LAB_005ea979:
005EA979  8B 4E 14                  MOV ECX,dword ptr [ESI + 0x14]
005EA97C  57                        PUSH EDI
005EA97D  51                        PUSH ECX
005EA97E  68 42 69 00 00            PUSH 0x6942
005EA983  8B CB                     MOV ECX,EBX
005EA985  E8 36 8D E1 FF            CALL 0x004036c0
005EA98A  89 BB 64 1A 00 00         MOV dword ptr [EBX + 0x1a64],EDI
005EA990  A0 68 17 81 00            MOV AL,[0x00811768]
005EA995  3C 01                     CMP AL,0x1
005EA997  75 1D                     JNZ 0x005ea9b6
005EA999  C6 05 68 17 81 00 02      MOV byte ptr [0x00811768],0x2
005EA9A0  EB 14                     JMP 0x005ea9b6
LAB_005ea9a2:
005EA9A2  57                        PUSH EDI
005EA9A3  57                        PUSH EDI
005EA9A4  68 0A 61 00 00            PUSH 0x610a
005EA9A9  8B CB                     MOV ECX,EBX
005EA9AB  E8 10 8D E1 FF            CALL 0x004036c0
005EA9B0  89 BB 64 1A 00 00         MOV dword ptr [EBX + 0x1a64],EDI
LAB_005ea9b6:
005EA9B6  8B 13                     MOV EDX,dword ptr [EBX]
005EA9B8  8B CB                     MOV ECX,EBX
005EA9BA  FF 52 08                  CALL dword ptr [EDX + 0x8]
005EA9BD  8B 83 5B 1A 00 00         MOV EAX,dword ptr [EBX + 0x1a5b]
005EA9C3  8B 88 E6 02 00 00         MOV ECX,dword ptr [EAX + 0x2e6]
005EA9C9  3B CF                     CMP ECX,EDI
005EA9CB  0F 84 99 01 00 00         JZ 0x005eab6a
005EA9D1  6A 01                     PUSH 0x1
005EA9D3  57                        PUSH EDI
005EA9D4  6A 01                     PUSH 0x1
005EA9D6  E8 CA 75 E1 FF            CALL 0x00401fa5
005EA9DB  E9 8A 01 00 00            JMP 0x005eab6a
LAB_005ea9e0:
005EA9E0  3D A2 C0 00 00            CMP EAX,0xc0a2
005EA9E5  0F 85 7F 01 00 00         JNZ 0x005eab6a
005EA9EB  8B 8B 5B 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a5b]
005EA9F1  E8 FE 7B E1 FF            CALL 0x004025f4
005EA9F6  85 C0                     TEST EAX,EAX
005EA9F8  0F 85 2A 01 00 00         JNZ 0x005eab28
005EA9FE  A0 A0 67 80 00            MOV AL,[0x008067a0]
005EAA03  84 C0                     TEST AL,AL
005EAA05  74 63                     JZ 0x005eaa6a
005EAA07  8B 8B 5B 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a5b]
005EAA0D  8B 81 86 06 00 00         MOV EAX,dword ptr [ECX + 0x686]
005EAA13  39 78 08                  CMP dword ptr [EAX + 0x8],EDI
005EAA16  7E 07                     JLE 0x005eaa1f
005EAA18  8B 50 14                  MOV EDX,dword ptr [EAX + 0x14]
005EAA1B  8B 02                     MOV EAX,dword ptr [EDX]
005EAA1D  EB 02                     JMP 0x005eaa21
LAB_005eaa1f:
005EAA1F  33 C0                     XOR EAX,EAX
LAB_005eaa21:
005EAA21  50                        PUSH EAX
005EAA22  B9 20 76 80 00            MOV ECX,0x807620
005EAA27  E8 F1 70 E1 FF            CALL 0x00401b1d
005EAA2C  85 C0                     TEST EAX,EAX
005EAA2E  74 3A                     JZ 0x005eaa6a
005EAA30  8B 83 5B 1A 00 00         MOV EAX,dword ptr [EBX + 0x1a5b]
005EAA36  8B 80 86 06 00 00         MOV EAX,dword ptr [EAX + 0x686]
005EAA3C  39 78 08                  CMP dword ptr [EAX + 0x8],EDI
005EAA3F  7E 16                     JLE 0x005eaa57
005EAA41  8B 48 14                  MOV ECX,dword ptr [EAX + 0x14]
005EAA44  8B 01                     MOV EAX,dword ptr [ECX]
005EAA46  B9 90 2A 80 00            MOV ECX,0x802a90
005EAA4B  50                        PUSH EAX
005EAA4C  FF 15 64 C0 85 00         CALL dword ptr [0x0085c064]
005EAA52  E9 D1 00 00 00            JMP 0x005eab28
LAB_005eaa57:
005EAA57  33 C0                     XOR EAX,EAX
005EAA59  B9 90 2A 80 00            MOV ECX,0x802a90
005EAA5E  50                        PUSH EAX
005EAA5F  FF 15 64 C0 85 00         CALL dword ptr [0x0085c064]
005EAA65  E9 BE 00 00 00            JMP 0x005eab28
LAB_005eaa6a:
005EAA6A  B9 14 01 00 00            MOV ECX,0x114
005EAA6F  33 C0                     XOR EAX,EAX
005EAA71  8D BD 60 FB FF FF         LEA EDI,[EBP + 0xfffffb60]
005EAA77  F3 AB                     STOSD.REP ES:EDI
005EAA79  AA                        STOSB ES:EDI
005EAA7A  A0 A0 67 80 00            MOV AL,[0x008067a0]
005EAA7F  BF 1D 7E 80 00            MOV EDI,0x807e1d
005EAA84  84 C0                     TEST AL,AL
005EAA86  75 05                     JNZ 0x005eaa8d
005EAA88  BF DD 7D 80 00            MOV EDI,0x807ddd
LAB_005eaa8d:
005EAA8D  83 C9 FF                  OR ECX,0xffffffff
005EAA90  33 C0                     XOR EAX,EAX
005EAA92  F2 AE                     SCASB.REPNE ES:EDI
005EAA94  F7 D1                     NOT ECX
005EAA96  2B F9                     SUB EDI,ECX
005EAA98  8D 95 60 FB FF FF         LEA EDX,[EBP + 0xfffffb60]
005EAA9E  8B C1                     MOV EAX,ECX
005EAAA0  8B F7                     MOV ESI,EDI
005EAAA2  8B FA                     MOV EDI,EDX
005EAAA4  8B 93 5B 1A 00 00         MOV EDX,dword ptr [EBX + 0x1a5b]
005EAAAA  C1 E9 02                  SHR ECX,0x2
005EAAAD  F3 A5                     MOVSD.REP ES:EDI,ESI
005EAAAF  8B C8                     MOV ECX,EAX
005EAAB1  83 E1 03                  AND ECX,0x3
005EAAB4  F3 A4                     MOVSB.REP ES:EDI,ESI
005EAAB6  8B 82 86 06 00 00         MOV EAX,dword ptr [EDX + 0x686]
005EAABC  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
005EAABF  85 C9                     TEST ECX,ECX
005EAAC1  7E 07                     JLE 0x005eaaca
005EAAC3  8B 48 14                  MOV ECX,dword ptr [EAX + 0x14]
005EAAC6  8B 39                     MOV EDI,dword ptr [ECX]
005EAAC8  EB 02                     JMP 0x005eaacc
LAB_005eaaca:
005EAACA  33 FF                     XOR EDI,EDI
LAB_005eaacc:
005EAACC  83 C9 FF                  OR ECX,0xffffffff
005EAACF  33 C0                     XOR EAX,EAX
005EAAD1  F2 AE                     SCASB.REPNE ES:EDI
005EAAD3  F7 D1                     NOT ECX
005EAAD5  8D B5 A0 FB FF FF         LEA ESI,[EBP + 0xfffffba0]
005EAADB  2B F9                     SUB EDI,ECX
005EAADD  8B C1                     MOV EAX,ECX
005EAADF  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
005EAAE2  8B F7                     MOV ESI,EDI
005EAAE4  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
005EAAE7  C1 E9 02                  SHR ECX,0x2
005EAAEA  F3 A5                     MOVSD.REP ES:EDI,ESI
005EAAEC  8B C8                     MOV ECX,EAX
005EAAEE  83 E1 03                  AND ECX,0x3
005EAAF1  F3 A4                     MOVSB.REP ES:EDI,ESI
005EAAF3  8D 8D 60 FB FF FF         LEA ECX,[EBP + 0xfffffb60]
005EAAF9  51                        PUSH ECX
005EAAFA  8B CA                     MOV ECX,EDX
005EAAFC  E8 BB 80 E1 FF            CALL 0x00402bbc
005EAB01  A1 64 17 81 00            MOV EAX,[0x00811764]
005EAB06  6A FF                     PUSH -0x1
005EAB08  6A 01                     PUSH 0x1
005EAB0A  8D 95 60 FB FF FF         LEA EDX,[EBP + 0xfffffb60]
005EAB10  68 51 04 00 00            PUSH 0x451
005EAB15  52                        PUSH EDX
005EAB16  6A 1B                     PUSH 0x1b
005EAB18  6A 00                     PUSH 0x0
005EAB1A  50                        PUSH EAX
005EAB1B  E8 40 A8 12 00            CALL 0x00715360
005EAB20  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
005EAB23  83 C4 1C                  ADD ESP,0x1c
005EAB26  33 FF                     XOR EDI,EDI
LAB_005eab28:
005EAB28  8B 8B 5B 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a5b]
005EAB2E  68 A0 16 80 00            PUSH 0x8016a0
005EAB33  57                        PUSH EDI
005EAB34  8B 91 86 06 00 00         MOV EDX,dword ptr [ECX + 0x686]
005EAB3A  52                        PUSH EDX
005EAB3B  E8 E0 B4 0C 00            CALL 0x006b6020
005EAB40  8B 83 5B 1A 00 00         MOV EAX,dword ptr [EBX + 0x1a5b]
005EAB46  C7 43 2D 33 00 00 00      MOV dword ptr [EBX + 0x2d],0x33
005EAB4D  8D 53 1D                  LEA EDX,[EBX + 0x1d]
005EAB50  8B 88 86 06 00 00         MOV ECX,dword ptr [EAX + 0x686]
005EAB56  52                        PUSH EDX
005EAB57  89 4B 31                  MOV dword ptr [EBX + 0x31],ECX
005EAB5A  8B 80 4C 05 00 00         MOV EAX,dword ptr [EAX + 0x54c]
005EAB60  50                        PUSH EAX
005EAB61  6A 02                     PUSH 0x2
005EAB63  8B CB                     MOV ECX,EBX
005EAB65  E8 16 B5 0F 00            CALL 0x006e6080
LAB_005eab6a:
005EAB6A  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
005EAB6D  56                        PUSH ESI
005EAB6E  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005EAB74  8B CB                     MOV ECX,EBX
005EAB76  E8 05 67 E1 FF            CALL 0x00401280
005EAB7B  5F                        POP EDI
005EAB7C  5E                        POP ESI
005EAB7D  5B                        POP EBX
005EAB7E  8B E5                     MOV ESP,EBP
005EAB80  5D                        POP EBP
005EAB81  C2 04 00                  RET 0x4
LAB_005eab84:
005EAB84  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
005EAB87  68 54 DE 7C 00            PUSH 0x7cde54
005EAB8C  68 CC 4C 7A 00            PUSH 0x7a4ccc
005EAB91  56                        PUSH ESI
005EAB92  57                        PUSH EDI
005EAB93  68 BB 03 00 00            PUSH 0x3bb
005EAB98  68 5C DD 7C 00            PUSH 0x7cdd5c
005EAB9D  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005EABA3  E8 28 29 0C 00            CALL 0x006ad4d0
005EABA8  83 C4 18                  ADD ESP,0x18
005EABAB  85 C0                     TEST EAX,EAX
005EABAD  74 01                     JZ 0x005eabb0
005EABAF  CC                        INT3
LAB_005eabb0:
005EABB0  68 BB 03 00 00            PUSH 0x3bb
005EABB5  68 5C DD 7C 00            PUSH 0x7cdd5c
005EABBA  57                        PUSH EDI
005EABBB  56                        PUSH ESI
005EABBC  E8 7F B2 0B 00            CALL 0x006a5e40
005EABC1  5F                        POP EDI
005EABC2  5E                        POP ESI
005EABC3  B8 FF FF 00 00            MOV EAX,0xffff
005EABC8  5B                        POP EBX
005EABC9  8B E5                     MOV ESP,EBP
005EABCB  5D                        POP EBP
005EABCC  C2 04 00                  RET 0x4
