HelpPanelTy::ArmProc:
0051B5A0  55                        PUSH EBP
0051B5A1  8B EC                     MOV EBP,ESP
0051B5A3  81 EC A0 00 00 00         SUB ESP,0xa0
0051B5A9  8B 81 48 02 00 00         MOV EAX,dword ptr [ECX + 0x248]
0051B5AF  53                        PUSH EBX
0051B5B0  56                        PUSH ESI
0051B5B1  57                        PUSH EDI
0051B5B2  6A 04                     PUSH 0x4
0051B5B4  50                        PUSH EAX
0051B5B5  89 4D C0                  MOV dword ptr [EBP + -0x40],ECX
0051B5B8  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0051B5BF  E8 DC FD 1E 00            CALL 0x0070b3a0
0051B5C4  89 45 CC                  MOV dword ptr [EBP + -0x34],EAX
0051B5C7  A1 74 A1 7F 00            MOV EAX,[0x007fa174]
0051B5CC  83 C4 08                  ADD ESP,0x8
0051B5CF  85 C0                     TEST EAX,EAX
0051B5D1  0F 84 8D 0F 00 00         JZ 0x0051c564
0051B5D7  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
0051B5DD  8D 85 64 FF FF FF         LEA EAX,[EBP + 0xffffff64]
0051B5E3  8D 95 60 FF FF FF         LEA EDX,[EBP + 0xffffff60]
0051B5E9  6A 00                     PUSH 0x0
0051B5EB  50                        PUSH EAX
0051B5EC  89 8D 60 FF FF FF         MOV dword ptr [EBP + 0xffffff60],ECX
0051B5F2  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0051B5F8  E8 F3 21 21 00            CALL 0x0072d7f0
0051B5FD  8B F0                     MOV ESI,EAX
0051B5FF  83 C4 08                  ADD ESP,0x8
0051B602  85 F6                     TEST ESI,ESI
0051B604  0F 85 18 0F 00 00         JNZ 0x0051c522
0051B60A  8A 45 10                  MOV AL,byte ptr [EBP + 0x10]
0051B60D  8B 5D C0                  MOV EBX,dword ptr [EBP + -0x40]
0051B610  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
0051B613  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0051B616  84 C0                     TEST AL,AL
0051B618  0F 85 8E 00 00 00         JNZ 0x0051b6ac
0051B61E  8A 83 A1 01 00 00         MOV AL,byte ptr [EBX + 0x1a1]
0051B624  84 C0                     TEST AL,AL
0051B626  74 1B                     JZ 0x0051b643
0051B628  3C 06                     CMP AL,0x6
0051B62A  74 17                     JZ 0x0051b643
0051B62C  3C 0A                     CMP AL,0xa
0051B62E  74 13                     JZ 0x0051b643
0051B630  C6 83 A2 01 00 00 00      MOV byte ptr [EBX + 0x1a2],0x0
0051B637  C7 83 AB 01 00 00 00 00 00 00  MOV dword ptr [EBX + 0x1ab],0x0
0051B641  EB 12                     JMP 0x0051b655
LAB_0051b643:
0051B643  8B 8B A3 01 00 00         MOV ECX,dword ptr [EBX + 0x1a3]
0051B649  88 83 A2 01 00 00         MOV byte ptr [EBX + 0x1a2],AL
0051B64F  89 8B AB 01 00 00         MOV dword ptr [EBX + 0x1ab],ECX
LAB_0051b655:
0051B655  8B 83 78 01 00 00         MOV EAX,dword ptr [EBX + 0x178]
0051B65B  C6 83 A1 01 00 00 04      MOV byte ptr [EBX + 0x1a1],0x4
0051B662  85 C0                     TEST EAX,EAX
0051B664  89 B3 A3 01 00 00         MOV dword ptr [EBX + 0x1a3],ESI
0051B66A  89 BB A7 01 00 00         MOV dword ptr [EBX + 0x1a7],EDI
0051B670  66 C7 83 AF 01 00 00 32 00  MOV word ptr [EBX + 0x1af],0x32
0051B679  66 C7 83 B1 01 00 00 05 00  MOV word ptr [EBX + 0x1b1],0x5
0051B682  74 28                     JZ 0x0051b6ac
0051B684  C7 43 28 02 42 00 00      MOV dword ptr [EBX + 0x28],0x4202
0051B68B  66 C7 43 2C 00 00         MOV word ptr [EBX + 0x2c],0x0
0051B691  66 C7 43 2E 02 00         MOV word ptr [EBX + 0x2e],0x2
0051B697  89 43 30                  MOV dword ptr [EBX + 0x30],EAX
0051B69A  8B 0D 30 2A 80 00         MOV ECX,dword ptr [0x00802a30]
0051B6A0  85 C9                     TEST ECX,ECX
0051B6A2  74 08                     JZ 0x0051b6ac
0051B6A4  8B 11                     MOV EDX,dword ptr [ECX]
0051B6A6  8D 43 18                  LEA EAX,[EBX + 0x18]
0051B6A9  50                        PUSH EAX
0051B6AA  FF 12                     CALL dword ptr [EDX]
LAB_0051b6ac:
0051B6AC  56                        PUSH ESI
0051B6AD  E8 E2 8D EE FF            CALL 0x00404494
0051B6B2  83 C4 04                  ADD ESP,0x4
0051B6B5  8B CB                     MOV ECX,EBX
0051B6B7  50                        PUSH EAX
0051B6B8  57                        PUSH EDI
0051B6B9  68 FD 55 00 00            PUSH 0x55fd
0051B6BE  E8 36 88 EE FF            CALL 0x00403ef9
0051B6C3  6A 01                     PUSH 0x1
0051B6C5  6A 00                     PUSH 0x0
0051B6C7  56                        PUSH ESI
0051B6C8  E8 B2 5C EE FF            CALL 0x0040137f
0051B6CD  8B 8B 44 02 00 00         MOV ECX,dword ptr [EBX + 0x244]
0051B6D3  50                        PUSH EAX
0051B6D4  51                        PUSH ECX
0051B6D5  E8 C6 FC 1E 00            CALL 0x0070b3a0
0051B6DA  8B C8                     MOV ECX,EAX
0051B6DC  83 C4 14                  ADD ESP,0x14
0051B6DF  85 C9                     TEST ECX,ECX
0051B6E1  74 24                     JZ 0x0051b707
0051B6E3  8B 79 08                  MOV EDI,dword ptr [ECX + 0x8]
0051B6E6  B8 1E 00 00 00            MOV EAX,0x1e
0051B6EB  2B C7                     SUB EAX,EDI
0051B6ED  51                        PUSH ECX
0051B6EE  99                        CDQ
0051B6EF  2B C2                     SUB EAX,EDX
0051B6F1  8B 53 68                  MOV EDX,dword ptr [EBX + 0x68]
0051B6F4  D1 F8                     SAR EAX,0x1
0051B6F6  83 C0 2A                  ADD EAX,0x2a
0051B6F9  6A 06                     PUSH 0x6
0051B6FB  50                        PUSH EAX
0051B6FC  6A 35                     PUSH 0x35
0051B6FE  52                        PUSH EDX
0051B6FF  E8 25 7B EE FF            CALL 0x00403229
0051B704  83 C4 14                  ADD ESP,0x14
LAB_0051b707:
0051B707  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0051B70A  8B 8B 18 02 00 00         MOV ECX,dword ptr [EBX + 0x218]
0051B710  6A 0F                     PUSH 0xf
0051B712  68 91 00 00 00            PUSH 0x91
0051B717  50                        PUSH EAX
0051B718  6A 00                     PUSH 0x0
0051B71A  6A 00                     PUSH 0x0
0051B71C  51                        PUSH ECX
0051B71D  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
0051B723  E8 68 53 1F 00            CALL 0x00710a90
0051B728  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
0051B72E  6A 03                     PUSH 0x3
0051B730  6A FF                     PUSH -0x1
0051B732  6A FD                     PUSH -0x3
0051B734  52                        PUSH EDX
0051B735  68 F8 55 00 00            PUSH 0x55f8
0051B73A  E8 01 4A 19 00            CALL 0x006b0140
0051B73F  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
0051B745  50                        PUSH EAX
0051B746  E8 75 62 1F 00            CALL 0x007119c0
0051B74B  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0051B74E  33 F6                     XOR ESI,ESI
0051B750  50                        PUSH EAX
0051B751  E8 1C A5 EE FF            CALL 0x00405c72
0051B756  8B 3D E8 BD 85 00         MOV EDI,dword ptr [0x0085bde8]
0051B75C  83 C4 04                  ADD ESP,0x4
0051B75F  85 C0                     TEST EAX,EAX
0051B761  0F 8E DE 01 00 00         JLE 0x0051b945
LAB_0051b767:
0051B767  8D 4D EC                  LEA ECX,[EBP + -0x14]
0051B76A  8D 55 F0                  LEA EDX,[EBP + -0x10]
0051B76D  51                        PUSH ECX
0051B76E  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0051B771  8D 45 F8                  LEA EAX,[EBP + -0x8]
0051B774  52                        PUSH EDX
0051B775  50                        PUSH EAX
0051B776  56                        PUSH ESI
0051B777  51                        PUSH ECX
0051B778  E8 C1 6F EE FF            CALL 0x0040273e
0051B77D  83 C4 14                  ADD ESP,0x14
0051B780  85 C0                     TEST EAX,EAX
0051B782  0F 84 A8 01 00 00         JZ 0x0051b930
0051B788  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0051B78B  8B 83 18 02 00 00         MOV EAX,dword ptr [EBX + 0x218]
0051B791  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
0051B797  6A 0F                     PUSH 0xf
0051B799  68 06 01 00 00            PUSH 0x106
0051B79E  52                        PUSH EDX
0051B79F  68 96 00 00 00            PUSH 0x96
0051B7A4  6A 00                     PUSH 0x0
0051B7A6  50                        PUSH EAX
0051B7A7  E8 E4 52 1F 00            CALL 0x00710a90
0051B7AC  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0051B7AF  85 C0                     TEST EAX,EAX
0051B7B1  0F 84 BF 00 00 00         JZ 0x0051b876
0051B7B7  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0051B7BA  85 C0                     TEST EAX,EAX
0051B7BC  0F 84 B4 00 00 00         JZ 0x0051b876
0051B7C2  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
0051B7C8  85 F6                     TEST ESI,ESI
0051B7CA  51                        PUSH ECX
0051B7CB  74 55                     JZ 0x0051b822
0051B7CD  68 5D 56 00 00            PUSH 0x565d
0051B7D2  E8 69 49 19 00            CALL 0x006b0140
0051B7D7  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
0051B7DD  50                        PUSH EAX
0051B7DE  56                        PUSH ESI
0051B7DF  6A 02                     PUSH 0x2
0051B7E1  52                        PUSH EDX
0051B7E2  68 4C 56 00 00            PUSH 0x564c
0051B7E7  E8 54 49 19 00            CALL 0x006b0140
0051B7EC  8A 15 4E 87 80 00         MOV DL,byte ptr [0x0080874e]
0051B7F2  50                        PUSH EAX
0051B7F3  33 C0                     XOR EAX,EAX
0051B7F5  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
0051B7F8  80 FA 03                  CMP DL,0x3
0051B7FB  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
0051B7FE  0F 95 C0                  SETNZ AL
0051B801  48                        DEC EAX
0051B802  83 E0 05                  AND EAX,0x5
0051B805  50                        PUSH EAX
0051B806  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0051B809  51                        PUSH ECX
0051B80A  52                        PUSH EDX
0051B80B  50                        PUSH EAX
0051B80C  6A 02                     PUSH 0x2
0051B80E  68 30 3D 7C 00            PUSH 0x7c3d30
0051B813  68 3A F3 80 00            PUSH 0x80f33a
0051B818  FF D7                     CALL EDI
0051B81A  83 C4 2C                  ADD ESP,0x2c
0051B81D  E9 F4 00 00 00            JMP 0x0051b916
LAB_0051b822:
0051B822  68 5C 56 00 00            PUSH 0x565c
0051B827  E8 14 49 19 00            CALL 0x006b0140
0051B82C  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
0051B832  50                        PUSH EAX
0051B833  6A 02                     PUSH 0x2
0051B835  52                        PUSH EDX
0051B836  68 4C 56 00 00            PUSH 0x564c
0051B83B  E8 00 49 19 00            CALL 0x006b0140
0051B840  8A 15 4E 87 80 00         MOV DL,byte ptr [0x0080874e]
0051B846  50                        PUSH EAX
0051B847  33 C0                     XOR EAX,EAX
0051B849  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
0051B84C  80 FA 03                  CMP DL,0x3
0051B84F  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
0051B852  0F 95 C0                  SETNZ AL
0051B855  48                        DEC EAX
0051B856  83 E0 05                  AND EAX,0x5
0051B859  50                        PUSH EAX
0051B85A  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0051B85D  51                        PUSH ECX
0051B85E  52                        PUSH EDX
0051B85F  50                        PUSH EAX
0051B860  6A 02                     PUSH 0x2
0051B862  68 10 3D 7C 00            PUSH 0x7c3d10
0051B867  68 3A F3 80 00            PUSH 0x80f33a
0051B86C  FF D7                     CALL EDI
0051B86E  83 C4 28                  ADD ESP,0x28
0051B871  E9 A0 00 00 00            JMP 0x0051b916
LAB_0051b876:
0051B876  85 F6                     TEST ESI,ESI
0051B878  74 51                     JZ 0x0051b8cb
0051B87A  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
0051B880  51                        PUSH ECX
0051B881  68 5D 56 00 00            PUSH 0x565d
0051B886  E8 B5 48 19 00            CALL 0x006b0140
0051B88B  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
0051B891  50                        PUSH EAX
0051B892  56                        PUSH ESI
0051B893  6A 02                     PUSH 0x2
0051B895  52                        PUSH EDX
0051B896  68 4C 56 00 00            PUSH 0x564c
0051B89B  E8 A0 48 19 00            CALL 0x006b0140
0051B8A0  8A 15 4E 87 80 00         MOV DL,byte ptr [0x0080874e]
0051B8A6  50                        PUSH EAX
0051B8A7  33 C0                     XOR EAX,EAX
0051B8A9  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0051B8AC  80 FA 03                  CMP DL,0x3
0051B8AF  0F 95 C0                  SETNZ AL
0051B8B2  48                        DEC EAX
0051B8B3  83 E0 05                  AND EAX,0x5
0051B8B6  50                        PUSH EAX
0051B8B7  51                        PUSH ECX
0051B8B8  6A 02                     PUSH 0x2
0051B8BA  68 F4 3C 7C 00            PUSH 0x7c3cf4
0051B8BF  68 3A F3 80 00            PUSH 0x80f33a
0051B8C4  FF D7                     CALL EDI
0051B8C6  83 C4 24                  ADD ESP,0x24
0051B8C9  EB 4B                     JMP 0x0051b916
LAB_0051b8cb:
0051B8CB  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
0051B8D1  52                        PUSH EDX
0051B8D2  68 5C 56 00 00            PUSH 0x565c
0051B8D7  E8 64 48 19 00            CALL 0x006b0140
0051B8DC  50                        PUSH EAX
0051B8DD  A1 18 76 80 00            MOV EAX,[0x00807618]
0051B8E2  6A 02                     PUSH 0x2
0051B8E4  50                        PUSH EAX
0051B8E5  68 4C 56 00 00            PUSH 0x564c
0051B8EA  E8 51 48 19 00            CALL 0x006b0140
0051B8EF  50                        PUSH EAX
0051B8F0  A0 4E 87 80 00            MOV AL,[0x0080874e]
0051B8F5  33 C9                     XOR ECX,ECX
0051B8F7  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0051B8FA  3C 03                     CMP AL,0x3
0051B8FC  0F 95 C1                  SETNZ CL
0051B8FF  49                        DEC ECX
0051B900  83 E1 05                  AND ECX,0x5
0051B903  51                        PUSH ECX
0051B904  52                        PUSH EDX
0051B905  6A 02                     PUSH 0x2
0051B907  68 DC 3C 7C 00            PUSH 0x7c3cdc
0051B90C  68 3A F3 80 00            PUSH 0x80f33a
0051B911  FF D7                     CALL EDI
0051B913  83 C4 20                  ADD ESP,0x20
LAB_0051b916:
0051B916  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
0051B91C  6A 00                     PUSH 0x0
0051B91E  6A FF                     PUSH -0x1
0051B920  6A 01                     PUSH 0x1
0051B922  68 3A F3 80 00            PUSH 0x80f33a
0051B927  E8 94 60 1F 00            CALL 0x007119c0
0051B92C  83 45 FC 0F               ADD dword ptr [EBP + -0x4],0xf
LAB_0051b930:
0051B930  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0051B933  46                        INC ESI
0051B934  50                        PUSH EAX
0051B935  E8 38 A3 EE FF            CALL 0x00405c72
0051B93A  83 C4 04                  ADD ESP,0x4
0051B93D  3B F0                     CMP ESI,EAX
0051B93F  0F 8C 22 FE FF FF         JL 0x0051b767
LAB_0051b945:
0051B945  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0051B948  8D 84 49 3E FE FF FF      LEA EAX,[ECX + ECX*0x2 + 0xfffffe3e]
0051B94F  C1 E0 02                  SHL EAX,0x2
0051B952  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0051B955  8B 90 7C F6 7B 00         MOV EDX,dword ptr [EAX + 0x7bf67c]
0051B95B  85 D2                     TEST EDX,EDX
0051B95D  0F 84 3C 01 00 00         JZ 0x0051ba9f
0051B963  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0051B966  8B 93 18 02 00 00         MOV EDX,dword ptr [EBX + 0x218]
0051B96C  6A 0F                     PUSH 0xf
0051B96E  68 91 00 00 00            PUSH 0x91
0051B973  51                        PUSH ECX
0051B974  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
0051B97A  6A 00                     PUSH 0x0
0051B97C  6A 00                     PUSH 0x0
0051B97E  52                        PUSH EDX
0051B97F  E8 0C 51 1F 00            CALL 0x00710a90
0051B984  A1 18 76 80 00            MOV EAX,[0x00807618]
0051B989  6A 03                     PUSH 0x3
0051B98B  6A FF                     PUSH -0x1
0051B98D  6A FD                     PUSH -0x3
0051B98F  50                        PUSH EAX
0051B990  68 57 56 00 00            PUSH 0x5657
0051B995  E8 A6 47 19 00            CALL 0x006b0140
0051B99A  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
0051B9A0  50                        PUSH EAX
0051B9A1  E8 1A 60 1F 00            CALL 0x007119c0
0051B9A6  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0051B9A9  8B 93 18 02 00 00         MOV EDX,dword ptr [EBX + 0x218]
0051B9AF  6A 0F                     PUSH 0xf
0051B9B1  68 06 01 00 00            PUSH 0x106
0051B9B6  51                        PUSH ECX
0051B9B7  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
0051B9BD  68 96 00 00 00            PUSH 0x96
0051B9C2  6A 00                     PUSH 0x0
0051B9C4  52                        PUSH EDX
0051B9C5  E8 C6 50 1F 00            CALL 0x00710a90
0051B9CA  8A 0D 4E 87 80 00         MOV CL,byte ptr [0x0080874e]
0051B9D0  33 C0                     XOR EAX,EAX
0051B9D2  80 F9 03                  CMP CL,0x3
0051B9D5  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
0051B9D8  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
0051B9DE  0F 95 C0                  SETNZ AL
0051B9E1  8A 96 7C F6 7B 00         MOV DL,byte ptr [ESI + 0x7bf67c]
0051B9E7  48                        DEC EAX
0051B9E8  83 E0 05                  AND EAX,0x5
0051B9EB  50                        PUSH EAX
0051B9EC  6A FF                     PUSH -0x1
0051B9EE  6A 01                     PUSH 0x1
0051B9F0  51                        PUSH ECX
0051B9F1  6A 00                     PUSH 0x0
0051B9F3  52                        PUSH EDX
0051B9F4  E8 30 91 EE FF            CALL 0x00404b29
0051B9F9  83 C4 08                  ADD ESP,0x8
0051B9FC  50                        PUSH EAX
0051B9FD  E8 3E 47 19 00            CALL 0x006b0140
0051BA02  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
0051BA08  50                        PUSH EAX
0051BA09  E8 B2 5F 1F 00            CALL 0x007119c0
0051BA0E  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0051BA11  8A 86 7C F6 7B 00         MOV AL,byte ptr [ESI + 0x7bf67c]
0051BA17  83 C1 0F                  ADD ECX,0xf
0051BA1A  6A 00                     PUSH 0x0
0051BA1C  50                        PUSH EAX
0051BA1D  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0051BA20  E8 CB 79 EE FF            CALL 0x004033f0
0051BA25  8B 8B 30 02 00 00         MOV ECX,dword ptr [EBX + 0x230]
0051BA2B  50                        PUSH EAX
0051BA2C  51                        PUSH ECX
0051BA2D  E8 6E F9 1E 00            CALL 0x0070b3a0
0051BA32  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0051BA35  8B F0                     MOV ESI,EAX
0051BA37  8B 83 18 02 00 00         MOV EAX,dword ptr [EBX + 0x218]
0051BA3D  56                        PUSH ESI
0051BA3E  6A 01                     PUSH 0x1
0051BA40  52                        PUSH EDX
0051BA41  68 96 00 00 00            PUSH 0x96
0051BA46  50                        PUSH EAX
0051BA47  E8 DD 77 EE FF            CALL 0x00403229
0051BA4C  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0051BA4F  C7 45 A4 96 00 00 00      MOV dword ptr [EBP + -0x5c],0x96
0051BA56  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
0051BA59  89 55 A8                  MOV dword ptr [EBP + -0x58],EDX
0051BA5C  89 4D AC                  MOV dword ptr [EBP + -0x54],ECX
0051BA5F  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
0051BA62  83 C4 24                  ADD ESP,0x24
0051BA65  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
0051BA68  C6 45 B4 05               MOV byte ptr [EBP + -0x4c],0x5
0051BA6C  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0051BA6F  8D 45 A4                  LEA EAX,[EBP + -0x5c]
0051BA72  50                        PUSH EAX
0051BA73  C7 45 B9 00 00 00 00      MOV dword ptr [EBP + -0x47],0x0
0051BA7A  8B 91 7C F6 7B 00         MOV EDX,dword ptr [ECX + 0x7bf67c]
0051BA80  8B 8B D7 01 00 00         MOV ECX,dword ptr [EBX + 0x1d7]
0051BA86  51                        PUSH ECX
0051BA87  89 55 B5                  MOV dword ptr [EBP + -0x4b],EDX
0051BA8A  E8 31 27 19 00            CALL 0x006ae1c0
0051BA8F  8B 56 08                  MOV EDX,dword ptr [ESI + 0x8]
0051BA92  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0051BA95  8D 4C 10 05               LEA ECX,[EAX + EDX*0x1 + 0x5]
0051BA99  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0051BA9C  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
LAB_0051ba9f:
0051BA9F  8D 94 89 12 FD FF FF      LEA EDX,[ECX + ECX*0x4 + 0xfffffd12]
0051BAA6  8B 34 95 24 60 7E 00      MOV ESI,dword ptr [EDX*0x4 + 0x7e6024]
0051BAAD  85 F6                     TEST ESI,ESI
0051BAAF  0F 84 0D 01 00 00         JZ 0x0051bbc2
0051BAB5  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0051BAB8  8B 8B 18 02 00 00         MOV ECX,dword ptr [EBX + 0x218]
0051BABE  6A 0F                     PUSH 0xf
0051BAC0  68 91 00 00 00            PUSH 0x91
0051BAC5  50                        PUSH EAX
0051BAC6  6A 00                     PUSH 0x0
0051BAC8  6A 00                     PUSH 0x0
0051BACA  51                        PUSH ECX
0051BACB  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
0051BAD1  E8 BA 4F 1F 00            CALL 0x00710a90
0051BAD6  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
0051BADC  6A 03                     PUSH 0x3
0051BADE  6A FF                     PUSH -0x1
0051BAE0  6A FD                     PUSH -0x3
0051BAE2  52                        PUSH EDX
0051BAE3  68 F7 55 00 00            PUSH 0x55f7
0051BAE8  E8 53 46 19 00            CALL 0x006b0140
0051BAED  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
0051BAF3  50                        PUSH EAX
0051BAF4  E8 C7 5E 1F 00            CALL 0x007119c0
0051BAF9  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0051BAFC  8B 8B 18 02 00 00         MOV ECX,dword ptr [EBX + 0x218]
0051BB02  6A 14                     PUSH 0x14
0051BB04  83 C0 FD                  ADD EAX,-0x3
0051BB07  68 06 01 00 00            PUSH 0x106
0051BB0C  50                        PUSH EAX
0051BB0D  68 96 00 00 00            PUSH 0x96
0051BB12  6A 00                     PUSH 0x0
0051BB14  51                        PUSH ECX
0051BB15  8B 8B E8 01 00 00         MOV ECX,dword ptr [EBX + 0x1e8]
0051BB1B  E8 70 4F 1F 00            CALL 0x00710a90
0051BB20  56                        PUSH ESI
0051BB21  68 E4 1A 7C 00            PUSH 0x7c1ae4
0051BB26  68 3A F3 80 00            PUSH 0x80f33a
0051BB2B  FF D7                     CALL EDI
0051BB2D  A0 4E 87 80 00            MOV AL,[0x0080874e]
0051BB32  83 C4 0C                  ADD ESP,0xc
0051BB35  33 D2                     XOR EDX,EDX
0051BB37  3C 03                     CMP AL,0x3
0051BB39  0F 95 C2                  SETNZ DL
0051BB3C  8B 8B E8 01 00 00         MOV ECX,dword ptr [EBX + 0x1e8]
0051BB42  4A                        DEC EDX
0051BB43  83 E2 04                  AND EDX,0x4
0051BB46  52                        PUSH EDX
0051BB47  6A FF                     PUSH -0x1
0051BB49  6A 01                     PUSH 0x1
0051BB4B  68 3A F3 80 00            PUSH 0x80f33a
0051BB50  E8 6B 5E 1F 00            CALL 0x007119c0
0051BB55  8B 83 38 02 00 00         MOV EAX,dword ptr [EBX + 0x238]
0051BB5B  6A 00                     PUSH 0x0
0051BB5D  50                        PUSH EAX
0051BB5E  E8 3D F8 1E 00            CALL 0x0070b3a0
0051BB63  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0051BB66  8B 93 18 02 00 00         MOV EDX,dword ptr [EBX + 0x218]
0051BB6C  83 C4 08                  ADD ESP,0x8
0051BB6F  8B F0                     MOV ESI,EAX
0051BB71  6A 3A                     PUSH 0x3a
0051BB73  6A 00                     PUSH 0x0
0051BB75  56                        PUSH ESI
0051BB76  51                        PUSH ECX
0051BB77  68 B4 00 00 00            PUSH 0xb4
0051BB7C  6A 00                     PUSH 0x0
0051BB7E  52                        PUSH EDX
0051BB7F  E8 BC 98 19 00            CALL 0x006b5440
0051BB84  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0051BB87  C7 45 D0 B4 00 00 00      MOV dword ptr [EBP + -0x30],0xb4
0051BB8E  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
0051BB91  89 4D D4                  MOV dword ptr [EBP + -0x2c],ECX
0051BB94  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
0051BB97  8B 56 08                  MOV EDX,dword ptr [ESI + 0x8]
0051BB9A  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0051BB9D  89 55 DC                  MOV dword ptr [EBP + -0x24],EDX
0051BBA0  8B 93 D7 01 00 00         MOV EDX,dword ptr [EBX + 0x1d7]
0051BBA6  8D 4D D0                  LEA ECX,[EBP + -0x30]
0051BBA9  51                        PUSH ECX
0051BBAA  52                        PUSH EDX
0051BBAB  C6 45 E0 01               MOV byte ptr [EBP + -0x20],0x1
0051BBAF  C7 45 E1 DD 00 00 00      MOV dword ptr [EBP + -0x1f],0xdd
0051BBB6  89 45 E5                  MOV dword ptr [EBP + -0x1b],EAX
0051BBB9  E8 02 26 19 00            CALL 0x006ae1c0
0051BBBE  83 45 FC 14               ADD dword ptr [EBP + -0x4],0x14
LAB_0051bbc2:
0051BBC2  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0051BBC5  8B 8B 18 02 00 00         MOV ECX,dword ptr [EBX + 0x218]
0051BBCB  6A 0F                     PUSH 0xf
0051BBCD  68 91 00 00 00            PUSH 0x91
0051BBD2  50                        PUSH EAX
0051BBD3  6A 00                     PUSH 0x0
0051BBD5  6A 00                     PUSH 0x0
0051BBD7  51                        PUSH ECX
0051BBD8  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
0051BBDE  E8 AD 4E 1F 00            CALL 0x00710a90
0051BBE3  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
0051BBE9  52                        PUSH EDX
0051BBEA  68 58 56 00 00            PUSH 0x5658
0051BBEF  E8 4C 45 19 00            CALL 0x006b0140
0051BBF4  50                        PUSH EAX
0051BBF5  68 D8 3C 7C 00            PUSH 0x7c3cd8
0051BBFA  68 3A F3 80 00            PUSH 0x80f33a
0051BBFF  FF D7                     CALL EDI
0051BC01  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
0051BC07  83 C4 0C                  ADD ESP,0xc
0051BC0A  6A 03                     PUSH 0x3
0051BC0C  6A FF                     PUSH -0x1
0051BC0E  6A FD                     PUSH -0x3
0051BC10  68 3A F3 80 00            PUSH 0x80f33a
0051BC15  E8 A6 5D 1F 00            CALL 0x007119c0
0051BC1A  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0051BC1D  8B 34 85 DC 1F 7D 00      MOV ESI,dword ptr [EAX*0x4 + 0x7d1fdc]
0051BC24  83 FE FF                  CMP ESI,-0x1
0051BC27  75 0A                     JNZ 0x0051bc33
0051BC29  BF 17 56 00 00            MOV EDI,0x5617
0051BC2E  E9 87 00 00 00            JMP 0x0051bcba
LAB_0051bc33:
0051BC33  33 C9                     XOR ECX,ECX
0051BC35  B8 34 22 7D 00            MOV EAX,0x7d2234
LAB_0051bc3a:
0051BC3A  83 38 FF                  CMP dword ptr [EAX],-0x1
0051BC3D  75 13                     JNZ 0x0051bc52
0051BC3F  83 C0 04                  ADD EAX,0x4
0051BC42  41                        INC ECX
0051BC43  3D E8 22 7D 00            CMP EAX,0x7d22e8
0051BC48  7C F0                     JL 0x0051bc3a
0051BC4A  8B 7D C8                  MOV EDI,dword ptr [EBP + -0x38]
0051BC4D  8B 4D C4                  MOV ECX,dword ptr [EBP + -0x3c]
0051BC50  EB 0F                     JMP 0x0051bc61
LAB_0051bc52:
0051BC52  8B 0C 8D 34 22 7D 00      MOV ECX,dword ptr [ECX*0x4 + 0x7d2234]
0051BC59  8B F9                     MOV EDI,ECX
0051BC5B  89 4D C4                  MOV dword ptr [EBP + -0x3c],ECX
0051BC5E  89 7D C8                  MOV dword ptr [EBP + -0x38],EDI
LAB_0051bc61:
0051BC61  BA 34 22 7D 00            MOV EDX,0x7d2234
LAB_0051bc66:
0051BC66  8B 02                     MOV EAX,dword ptr [EDX]
0051BC68  83 F8 FF                  CMP EAX,-0x1
0051BC6B  74 0C                     JZ 0x0051bc79
0051BC6D  3B C7                     CMP EAX,EDI
0051BC6F  7D 02                     JGE 0x0051bc73
0051BC71  8B F8                     MOV EDI,EAX
LAB_0051bc73:
0051BC73  3B C1                     CMP EAX,ECX
0051BC75  7E 02                     JLE 0x0051bc79
0051BC77  8B C8                     MOV ECX,EAX
LAB_0051bc79:
0051BC79  83 C2 04                  ADD EDX,0x4
0051BC7C  81 FA E8 22 7D 00         CMP EDX,0x7d22e8
0051BC82  7C E2                     JL 0x0051bc66
0051BC84  89 4D C4                  MOV dword ptr [EBP + -0x3c],ECX
0051BC87  2B CF                     SUB ECX,EDI
0051BC89  B8 56 55 55 55            MOV EAX,0x55555556
0051BC8E  89 7D C8                  MOV dword ptr [EBP + -0x38],EDI
0051BC91  F7 E9                     IMUL ECX
0051BC93  8B CA                     MOV ECX,EDX
0051BC95  C1 E9 1F                  SHR ECX,0x1f
0051BC98  03 D1                     ADD EDX,ECX
0051BC9A  8D 04 3A                  LEA EAX,[EDX + EDI*0x1]
0051BC9D  3B F0                     CMP ESI,EAX
0051BC9F  7D 07                     JGE 0x0051bca8
0051BCA1  BF 15 56 00 00            MOV EDI,0x5615
0051BCA6  EB 12                     JMP 0x0051bcba
LAB_0051bca8:
0051BCA8  8D 0C 57                  LEA ECX,[EDI + EDX*0x2]
0051BCAB  33 D2                     XOR EDX,EDX
0051BCAD  3B F1                     CMP ESI,ECX
0051BCAF  0F 9C C2                  SETL DL
0051BCB2  81 C2 13 56 00 00         ADD EDX,0x5613
0051BCB8  8B FA                     MOV EDI,EDX
LAB_0051bcba:
0051BCBA  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0051BCBD  8B 8B 18 02 00 00         MOV ECX,dword ptr [EBX + 0x218]
0051BCC3  6A 0F                     PUSH 0xf
0051BCC5  68 06 01 00 00            PUSH 0x106
0051BCCA  50                        PUSH EAX
0051BCCB  68 96 00 00 00            PUSH 0x96
0051BCD0  6A 00                     PUSH 0x0
0051BCD2  51                        PUSH ECX
0051BCD3  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
0051BCD9  E8 B2 4D 1F 00            CALL 0x00710a90
0051BCDE  A0 4E 87 80 00            MOV AL,[0x0080874e]
0051BCE3  33 D2                     XOR EDX,EDX
0051BCE5  3C 03                     CMP AL,0x3
0051BCE7  A1 18 76 80 00            MOV EAX,[0x00807618]
0051BCEC  0F 95 C2                  SETNZ DL
0051BCEF  4A                        DEC EDX
0051BCF0  83 E2 05                  AND EDX,0x5
0051BCF3  52                        PUSH EDX
0051BCF4  6A FF                     PUSH -0x1
0051BCF6  6A 01                     PUSH 0x1
0051BCF8  50                        PUSH EAX
0051BCF9  57                        PUSH EDI
0051BCFA  E8 41 44 19 00            CALL 0x006b0140
0051BCFF  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
0051BD05  50                        PUSH EAX
0051BD06  E8 B5 5C 1F 00            CALL 0x007119c0
0051BD0B  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0051BD0E  8B 8B 18 02 00 00         MOV ECX,dword ptr [EBX + 0x218]
0051BD14  83 C0 0F                  ADD EAX,0xf
0051BD17  6A 0F                     PUSH 0xf
0051BD19  68 91 00 00 00            PUSH 0x91
0051BD1E  50                        PUSH EAX
0051BD1F  6A 00                     PUSH 0x0
0051BD21  6A 00                     PUSH 0x0
0051BD23  51                        PUSH ECX
0051BD24  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
0051BD2A  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0051BD2D  E8 5E 4D 1F 00            CALL 0x00710a90
0051BD32  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
0051BD38  6A 03                     PUSH 0x3
0051BD3A  6A FF                     PUSH -0x1
0051BD3C  6A FD                     PUSH -0x3
0051BD3E  52                        PUSH EDX
0051BD3F  68 5E 56 00 00            PUSH 0x565e
0051BD44  E8 F7 43 19 00            CALL 0x006b0140
0051BD49  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
0051BD4F  50                        PUSH EAX
0051BD50  E8 6B 5C 1F 00            CALL 0x007119c0
0051BD55  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0051BD58  8B 8B 18 02 00 00         MOV ECX,dword ptr [EBX + 0x218]
0051BD5E  6A 0F                     PUSH 0xf
0051BD60  68 06 01 00 00            PUSH 0x106
0051BD65  50                        PUSH EAX
0051BD66  68 96 00 00 00            PUSH 0x96
0051BD6B  6A 00                     PUSH 0x0
0051BD6D  51                        PUSH ECX
0051BD6E  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
0051BD74  E8 17 4D 1F 00            CALL 0x00710a90
0051BD79  A0 4E 87 80 00            MOV AL,[0x0080874e]
0051BD7E  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0051BD81  33 D2                     XOR EDX,EDX
0051BD83  3C 03                     CMP AL,0x3
0051BD85  0F 95 C2                  SETNZ DL
0051BD88  4A                        DEC EDX
0051BD89  A1 18 76 80 00            MOV EAX,[0x00807618]
0051BD8E  83 E2 05                  AND EDX,0x5
0051BD91  52                        PUSH EDX
0051BD92  8B 14 8D 90 20 7D 00      MOV EDX,dword ptr [ECX*0x4 + 0x7d2090]
0051BD99  F7 DA                     NEG EDX
0051BD9B  1B D2                     SBB EDX,EDX
0051BD9D  6A FF                     PUSH -0x1
0051BD9F  6A 01                     PUSH 0x1
0051BDA1  81 C2 3F 27 00 00         ADD EDX,0x273f
0051BDA7  50                        PUSH EAX
0051BDA8  52                        PUSH EDX
0051BDA9  E8 92 43 19 00            CALL 0x006b0140
0051BDAE  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
0051BDB4  50                        PUSH EAX
0051BDB5  E8 06 5C 1F 00            CALL 0x007119c0
0051BDBA  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0051BDBD  83 C0 0F                  ADD EAX,0xf
0051BDC0  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
0051BDC3  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0051BDC6  8B 8F 78 F6 7B 00         MOV ECX,dword ptr [EDI + 0x7bf678]
0051BDCC  85 C9                     TEST ECX,ECX
0051BDCE  0F 84 CB 01 00 00         JZ 0x0051bf9f
0051BDD4  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
0051BDDA  6A 0F                     PUSH 0xf
0051BDDC  68 91 00 00 00            PUSH 0x91
0051BDE1  50                        PUSH EAX
0051BDE2  8B 83 18 02 00 00         MOV EAX,dword ptr [EBX + 0x218]
0051BDE8  6A 00                     PUSH 0x0
0051BDEA  BE 34 00 00 00            MOV ESI,0x34
0051BDEF  6A 00                     PUSH 0x0
0051BDF1  50                        PUSH EAX
0051BDF2  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
0051BDF5  E8 96 4C 1F 00            CALL 0x00710a90
0051BDFA  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
0051BE00  6A 03                     PUSH 0x3
0051BE02  6A FF                     PUSH -0x1
0051BE04  6A FD                     PUSH -0x3
0051BE06  51                        PUSH ECX
0051BE07  68 5F 56 00 00            PUSH 0x565f
0051BE0C  E8 2F 43 19 00            CALL 0x006b0140
0051BE11  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
0051BE17  50                        PUSH EAX
0051BE18  E8 A3 5B 1F 00            CALL 0x007119c0
0051BE1D  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0051BE20  8B 83 18 02 00 00         MOV EAX,dword ptr [EBX + 0x218]
0051BE26  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
0051BE2C  6A 0F                     PUSH 0xf
0051BE2E  68 06 01 00 00            PUSH 0x106
0051BE33  52                        PUSH EDX
0051BE34  68 96 00 00 00            PUSH 0x96
0051BE39  6A 00                     PUSH 0x0
0051BE3B  50                        PUSH EAX
0051BE3C  E8 4F 4C 1F 00            CALL 0x00710a90
0051BE41  8B 87 78 F6 7B 00         MOV EAX,dword ptr [EDI + 0x7bf678]
0051BE47  48                        DEC EAX
0051BE48  83 F8 03                  CMP EAX,0x3
0051BE4B  77 25                     JA 0x0051be72
switchD_0051be4d::switchD:
0051BE4D  FF 24 85 70 C5 51 00      JMP dword ptr [EAX*0x4 + 0x51c570]
switchD_0051be4d::caseD_1:
0051BE54  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
0051BE57  EB 19                     JMP 0x0051be72
switchD_0051be4d::caseD_2:
0051BE59  C7 45 F8 5B 00 00 00      MOV dword ptr [EBP + -0x8],0x5b
0051BE60  EB 10                     JMP 0x0051be72
switchD_0051be4d::caseD_3:
0051BE62  C7 45 F8 44 00 00 00      MOV dword ptr [EBP + -0x8],0x44
0051BE69  EB 07                     JMP 0x0051be72
switchD_0051be4d::caseD_4:
0051BE6B  C7 45 F8 4E 00 00 00      MOV dword ptr [EBP + -0x8],0x4e
switchD_0051be4d::default:
0051BE72  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
0051BE78  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0051BE7B  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0051BE7E  51                        PUSH ECX
0051BE7F  6A 00                     PUSH 0x0
0051BE81  52                        PUSH EDX
0051BE82  50                        PUSH EAX
0051BE83  E8 FC 77 EE FF            CALL 0x00403684
0051BE88  83 C4 0C                  ADD ESP,0xc
0051BE8B  50                        PUSH EAX
0051BE8C  E8 AF 42 19 00            CALL 0x006b0140
0051BE91  8B F8                     MOV EDI,EAX
0051BE93  83 C9 FF                  OR ECX,0xffffffff
0051BE96  33 C0                     XOR EAX,EAX
0051BE98  6A 0A                     PUSH 0xa
0051BE9A  F2 AE                     SCASB.REPNE ES:EDI
0051BE9C  F7 D1                     NOT ECX
0051BE9E  2B F9                     SUB EDI,ECX
0051BEA0  68 3A F3 80 00            PUSH 0x80f33a
0051BEA5  8B D1                     MOV EDX,ECX
0051BEA7  8B F7                     MOV ESI,EDI
0051BEA9  BF 3A F3 80 00            MOV EDI,0x80f33a
0051BEAE  C1 E9 02                  SHR ECX,0x2
0051BEB1  F3 A5                     MOVSD.REP ES:EDI,ESI
0051BEB3  8B CA                     MOV ECX,EDX
0051BEB5  83 E1 03                  AND ECX,0x3
0051BEB8  F3 A4                     MOVSB.REP ES:EDI,ESI
0051BEBA  E8 A1 26 21 00            CALL 0x0072e560
0051BEBF  83 C4 08                  ADD ESP,0x8
0051BEC2  85 C0                     TEST EAX,EAX
0051BEC4  74 12                     JZ 0x0051bed8
LAB_0051bec6:
0051BEC6  6A 0A                     PUSH 0xa
0051BEC8  50                        PUSH EAX
0051BEC9  C6 00 20                  MOV byte ptr [EAX],0x20
0051BECC  E8 8F 26 21 00            CALL 0x0072e560
0051BED1  83 C4 08                  ADD ESP,0x8
0051BED4  85 C0                     TEST EAX,EAX
0051BED6  75 EE                     JNZ 0x0051bec6
LAB_0051bed8:
0051BED8  8A 0D 4E 87 80 00         MOV CL,byte ptr [0x0080874e]
0051BEDE  33 C0                     XOR EAX,EAX
0051BEE0  80 F9 03                  CMP CL,0x3
0051BEE3  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
0051BEE9  0F 95 C0                  SETNZ AL
0051BEEC  48                        DEC EAX
0051BEED  83 E0 05                  AND EAX,0x5
0051BEF0  50                        PUSH EAX
0051BEF1  6A FF                     PUSH -0x1
0051BEF3  6A 01                     PUSH 0x1
0051BEF5  68 3A F3 80 00            PUSH 0x80f33a
0051BEFA  E8 C1 5A 1F 00            CALL 0x007119c0
0051BEFF  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0051BF02  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0051BF05  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
0051BF08  83 C0 0F                  ADD EAX,0xf
0051BF0B  51                        PUSH ECX
0051BF0C  57                        PUSH EDI
0051BF0D  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0051BF10  E8 E0 97 EE FF            CALL 0x004056f5
0051BF15  8B 93 40 02 00 00         MOV EDX,dword ptr [EBX + 0x240]
0051BF1B  50                        PUSH EAX
0051BF1C  52                        PUSH EDX
0051BF1D  E8 7E F4 1E 00            CALL 0x0070b3a0
0051BF22  8B 8B 18 02 00 00         MOV ECX,dword ptr [EBX + 0x218]
0051BF28  50                        PUSH EAX
0051BF29  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0051BF2C  6A 01                     PUSH 0x1
0051BF2E  50                        PUSH EAX
0051BF2F  68 96 00 00 00            PUSH 0x96
0051BF34  51                        PUSH ECX
0051BF35  E8 EF 72 EE FF            CALL 0x00403229
0051BF3A  8B 75 CC                  MOV ESI,dword ptr [EBP + -0x34]
0051BF3D  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0051BF40  8B 83 18 02 00 00         MOV EAX,dword ptr [EBX + 0x218]
0051BF46  56                        PUSH ESI
0051BF47  83 C2 FE                  ADD EDX,-0x2
0051BF4A  6A 06                     PUSH 0x6
0051BF4C  52                        PUSH EDX
0051BF4D  68 94 00 00 00            PUSH 0x94
0051BF52  50                        PUSH EAX
0051BF53  E8 D1 72 EE FF            CALL 0x00403229
0051BF58  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0051BF5B  C7 45 D0 94 00 00 00      MOV dword ptr [EBP + -0x30],0x94
0051BF62  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
0051BF65  83 C2 FE                  ADD EDX,-0x2
0051BF68  89 4D D8                  MOV dword ptr [EBP + -0x28],ECX
0051BF6B  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0051BF6E  89 55 D4                  MOV dword ptr [EBP + -0x2c],EDX
0051BF71  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
0051BF74  83 C4 38                  ADD ESP,0x38
0051BF77  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
0051BF7A  8B 83 D7 01 00 00         MOV EAX,dword ptr [EBX + 0x1d7]
0051BF80  8D 55 D0                  LEA EDX,[EBP + -0x30]
0051BF83  52                        PUSH EDX
0051BF84  50                        PUSH EAX
0051BF85  C6 45 E0 02               MOV byte ptr [EBP + -0x20],0x2
0051BF89  89 7D E1                  MOV dword ptr [EBP + -0x1f],EDI
0051BF8C  89 4D E5                  MOV dword ptr [EBP + -0x1b],ECX
0051BF8F  E8 2C 22 19 00            CALL 0x006ae1c0
0051BF94  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0051BF97  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
0051BF9A  03 C1                     ADD EAX,ECX
0051BF9C  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_0051bf9f:
0051BF9F  8B 8B 18 02 00 00         MOV ECX,dword ptr [EBX + 0x218]
0051BFA5  6A 0F                     PUSH 0xf
0051BFA7  68 91 00 00 00            PUSH 0x91
0051BFAC  50                        PUSH EAX
0051BFAD  6A 00                     PUSH 0x0
0051BFAF  6A 00                     PUSH 0x0
0051BFB1  51                        PUSH ECX
0051BFB2  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
0051BFB8  C6 45 F7 00               MOV byte ptr [EBP + -0x9],0x0
0051BFBC  E8 CF 4A 1F 00            CALL 0x00710a90
0051BFC1  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
0051BFC7  6A 03                     PUSH 0x3
0051BFC9  6A FF                     PUSH -0x1
0051BFCB  6A FD                     PUSH -0x3
0051BFCD  52                        PUSH EDX
0051BFCE  68 60 56 00 00            PUSH 0x5660
0051BFD3  E8 68 41 19 00            CALL 0x006b0140
0051BFD8  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
0051BFDE  50                        PUSH EAX
0051BFDF  E8 DC 59 1F 00            CALL 0x007119c0
0051BFE4  BF 01 00 00 00            MOV EDI,0x1
0051BFE9  C7 45 F0 1C 8B 7A 00      MOV dword ptr [EBP + -0x10],0x7a8b1c
0051BFF0  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
LAB_0051bff3:
0051BFF3  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0051BFF6  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0051BFF9  39 01                     CMP dword ptr [ECX],EAX
0051BFFB  0F 85 6A 01 00 00         JNZ 0x0051c16b
0051C001  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0051C007  57                        PUSH EDI
0051C008  E8 4D 5F EE FF            CALL 0x00401f5a
0051C00D  3B 45 0C                  CMP EAX,dword ptr [EBP + 0xc]
0051C010  0F 85 55 01 00 00         JNZ 0x0051c16b
0051C016  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0051C019  8B 83 18 02 00 00         MOV EAX,dword ptr [EBX + 0x218]
0051C01F  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
0051C025  6A 0F                     PUSH 0xf
0051C027  68 06 01 00 00            PUSH 0x106
0051C02C  52                        PUSH EDX
0051C02D  68 96 00 00 00            PUSH 0x96
0051C032  6A 00                     PUSH 0x0
0051C034  50                        PUSH EAX
0051C035  E8 56 4A 1F 00            CALL 0x00710a90
0051C03A  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
0051C040  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0051C043  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0051C046  51                        PUSH ECX
0051C047  6A 00                     PUSH 0x0
0051C049  52                        PUSH EDX
0051C04A  50                        PUSH EAX
0051C04B  E8 34 76 EE FF            CALL 0x00403684
0051C050  83 C4 0C                  ADD ESP,0xc
0051C053  50                        PUSH EAX
0051C054  E8 E7 40 19 00            CALL 0x006b0140
0051C059  8B F8                     MOV EDI,EAX
0051C05B  83 C9 FF                  OR ECX,0xffffffff
0051C05E  33 C0                     XOR EAX,EAX
0051C060  6A 0A                     PUSH 0xa
0051C062  F2 AE                     SCASB.REPNE ES:EDI
0051C064  F7 D1                     NOT ECX
0051C066  2B F9                     SUB EDI,ECX
0051C068  68 3A F3 80 00            PUSH 0x80f33a
0051C06D  8B D1                     MOV EDX,ECX
0051C06F  8B F7                     MOV ESI,EDI
0051C071  BF 3A F3 80 00            MOV EDI,0x80f33a
0051C076  C1 E9 02                  SHR ECX,0x2
0051C079  F3 A5                     MOVSD.REP ES:EDI,ESI
0051C07B  8B CA                     MOV ECX,EDX
0051C07D  83 E1 03                  AND ECX,0x3
0051C080  F3 A4                     MOVSB.REP ES:EDI,ESI
0051C082  E8 D9 24 21 00            CALL 0x0072e560
0051C087  83 C4 08                  ADD ESP,0x8
0051C08A  85 C0                     TEST EAX,EAX
0051C08C  74 12                     JZ 0x0051c0a0
LAB_0051c08e:
0051C08E  6A 0A                     PUSH 0xa
0051C090  50                        PUSH EAX
0051C091  C6 00 20                  MOV byte ptr [EAX],0x20
0051C094  E8 C7 24 21 00            CALL 0x0072e560
0051C099  83 C4 08                  ADD ESP,0x8
0051C09C  85 C0                     TEST EAX,EAX
0051C09E  75 EE                     JNZ 0x0051c08e
LAB_0051c0a0:
0051C0A0  8A 0D 4E 87 80 00         MOV CL,byte ptr [0x0080874e]
0051C0A6  33 C0                     XOR EAX,EAX
0051C0A8  80 F9 03                  CMP CL,0x3
0051C0AB  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
0051C0B1  0F 95 C0                  SETNZ AL
0051C0B4  48                        DEC EAX
0051C0B5  83 E0 05                  AND EAX,0x5
0051C0B8  50                        PUSH EAX
0051C0B9  6A FF                     PUSH -0x1
0051C0BB  6A 01                     PUSH 0x1
0051C0BD  68 3A F3 80 00            PUSH 0x80f33a
0051C0C2  E8 F9 58 1F 00            CALL 0x007119c0
0051C0C7  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0051C0CA  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0051C0CD  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
0051C0D0  83 C0 0F                  ADD EAX,0xf
0051C0D3  51                        PUSH ECX
0051C0D4  57                        PUSH EDI
0051C0D5  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0051C0D8  E8 18 96 EE FF            CALL 0x004056f5
0051C0DD  8B 93 3C 02 00 00         MOV EDX,dword ptr [EBX + 0x23c]
0051C0E3  50                        PUSH EAX
0051C0E4  52                        PUSH EDX
0051C0E5  E8 B6 F2 1E 00            CALL 0x0070b3a0
0051C0EA  8B 8B 18 02 00 00         MOV ECX,dword ptr [EBX + 0x218]
0051C0F0  50                        PUSH EAX
0051C0F1  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0051C0F4  6A 01                     PUSH 0x1
0051C0F6  50                        PUSH EAX
0051C0F7  68 96 00 00 00            PUSH 0x96
0051C0FC  51                        PUSH ECX
0051C0FD  E8 27 71 EE FF            CALL 0x00403229
0051C102  8B 75 CC                  MOV ESI,dword ptr [EBP + -0x34]
0051C105  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0051C108  8B 83 18 02 00 00         MOV EAX,dword ptr [EBX + 0x218]
0051C10E  56                        PUSH ESI
0051C10F  83 C2 FE                  ADD EDX,-0x2
0051C112  6A 06                     PUSH 0x6
0051C114  52                        PUSH EDX
0051C115  68 94 00 00 00            PUSH 0x94
0051C11A  50                        PUSH EAX
0051C11B  E8 09 71 EE FF            CALL 0x00403229
0051C120  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0051C123  C7 45 D0 94 00 00 00      MOV dword ptr [EBP + -0x30],0x94
0051C12A  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
0051C12D  83 C2 FE                  ADD EDX,-0x2
0051C130  89 4D D8                  MOV dword ptr [EBP + -0x28],ECX
0051C133  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0051C136  89 55 D4                  MOV dword ptr [EBP + -0x2c],EDX
0051C139  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
0051C13C  83 C4 38                  ADD ESP,0x38
0051C13F  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
0051C142  8B 83 D7 01 00 00         MOV EAX,dword ptr [EBX + 0x1d7]
0051C148  8D 55 D0                  LEA EDX,[EBP + -0x30]
0051C14B  52                        PUSH EDX
0051C14C  50                        PUSH EAX
0051C14D  C6 45 E0 03               MOV byte ptr [EBP + -0x20],0x3
0051C151  89 7D E1                  MOV dword ptr [EBP + -0x1f],EDI
0051C154  89 4D E5                  MOV dword ptr [EBP + -0x1b],ECX
0051C157  E8 64 20 19 00            CALL 0x006ae1c0
0051C15C  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
0051C15F  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0051C162  03 C1                     ADD EAX,ECX
0051C164  C6 45 F7 01               MOV byte ptr [EBP + -0x9],0x1
0051C168  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_0051c16b:
0051C16B  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
0051C16E  83 C2 04                  ADD EDX,0x4
0051C171  47                        INC EDI
0051C172  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
0051C175  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
0051C178  8D 57 FF                  LEA EDX,[EDI + -0x1]
0051C17B  83 FA 28                  CMP EDX,0x28
0051C17E  0F 8C 6F FE FF FF         JL 0x0051bff3
0051C184  BF 01 00 00 00            MOV EDI,0x1
0051C189  C7 45 F0 FC 8C 7A 00      MOV dword ptr [EBP + -0x10],0x7a8cfc
0051C190  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
LAB_0051c193:
0051C193  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0051C196  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0051C199  39 01                     CMP dword ptr [ECX],EAX
0051C19B  0F 85 6A 01 00 00         JNZ 0x0051c30b
0051C1A1  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0051C1A7  57                        PUSH EDI
0051C1A8  E8 AD 5D EE FF            CALL 0x00401f5a
0051C1AD  3B 45 0C                  CMP EAX,dword ptr [EBP + 0xc]
0051C1B0  0F 85 55 01 00 00         JNZ 0x0051c30b
0051C1B6  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0051C1B9  8B 83 18 02 00 00         MOV EAX,dword ptr [EBX + 0x218]
0051C1BF  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
0051C1C5  6A 0F                     PUSH 0xf
0051C1C7  68 06 01 00 00            PUSH 0x106
0051C1CC  52                        PUSH EDX
0051C1CD  68 96 00 00 00            PUSH 0x96
0051C1D2  6A 00                     PUSH 0x0
0051C1D4  50                        PUSH EAX
0051C1D5  E8 B6 48 1F 00            CALL 0x00710a90
0051C1DA  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
0051C1E0  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0051C1E3  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0051C1E6  51                        PUSH ECX
0051C1E7  6A 00                     PUSH 0x0
0051C1E9  52                        PUSH EDX
0051C1EA  50                        PUSH EAX
0051C1EB  E8 94 74 EE FF            CALL 0x00403684
0051C1F0  83 C4 0C                  ADD ESP,0xc
0051C1F3  50                        PUSH EAX
0051C1F4  E8 47 3F 19 00            CALL 0x006b0140
0051C1F9  8B F8                     MOV EDI,EAX
0051C1FB  83 C9 FF                  OR ECX,0xffffffff
0051C1FE  33 C0                     XOR EAX,EAX
0051C200  6A 0A                     PUSH 0xa
0051C202  F2 AE                     SCASB.REPNE ES:EDI
0051C204  F7 D1                     NOT ECX
0051C206  2B F9                     SUB EDI,ECX
0051C208  68 3A F3 80 00            PUSH 0x80f33a
0051C20D  8B D1                     MOV EDX,ECX
0051C20F  8B F7                     MOV ESI,EDI
0051C211  BF 3A F3 80 00            MOV EDI,0x80f33a
0051C216  C1 E9 02                  SHR ECX,0x2
0051C219  F3 A5                     MOVSD.REP ES:EDI,ESI
0051C21B  8B CA                     MOV ECX,EDX
0051C21D  83 E1 03                  AND ECX,0x3
0051C220  F3 A4                     MOVSB.REP ES:EDI,ESI
0051C222  E8 39 23 21 00            CALL 0x0072e560
0051C227  83 C4 08                  ADD ESP,0x8
0051C22A  85 C0                     TEST EAX,EAX
0051C22C  74 12                     JZ 0x0051c240
LAB_0051c22e:
0051C22E  6A 0A                     PUSH 0xa
0051C230  50                        PUSH EAX
0051C231  C6 00 20                  MOV byte ptr [EAX],0x20
0051C234  E8 27 23 21 00            CALL 0x0072e560
0051C239  83 C4 08                  ADD ESP,0x8
0051C23C  85 C0                     TEST EAX,EAX
0051C23E  75 EE                     JNZ 0x0051c22e
LAB_0051c240:
0051C240  8A 0D 4E 87 80 00         MOV CL,byte ptr [0x0080874e]
0051C246  33 C0                     XOR EAX,EAX
0051C248  80 F9 03                  CMP CL,0x3
0051C24B  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
0051C251  0F 95 C0                  SETNZ AL
0051C254  48                        DEC EAX
0051C255  83 E0 05                  AND EAX,0x5
0051C258  50                        PUSH EAX
0051C259  6A FF                     PUSH -0x1
0051C25B  6A 01                     PUSH 0x1
0051C25D  68 3A F3 80 00            PUSH 0x80f33a
0051C262  E8 59 57 1F 00            CALL 0x007119c0
0051C267  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0051C26A  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0051C26D  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
0051C270  83 C0 0F                  ADD EAX,0xf
0051C273  51                        PUSH ECX
0051C274  57                        PUSH EDI
0051C275  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0051C278  E8 78 94 EE FF            CALL 0x004056f5
0051C27D  8B 93 3C 02 00 00         MOV EDX,dword ptr [EBX + 0x23c]
0051C283  50                        PUSH EAX
0051C284  52                        PUSH EDX
0051C285  E8 16 F1 1E 00            CALL 0x0070b3a0
0051C28A  8B 8B 18 02 00 00         MOV ECX,dword ptr [EBX + 0x218]
0051C290  50                        PUSH EAX
0051C291  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0051C294  6A 01                     PUSH 0x1
0051C296  50                        PUSH EAX
0051C297  68 96 00 00 00            PUSH 0x96
0051C29C  51                        PUSH ECX
0051C29D  E8 87 6F EE FF            CALL 0x00403229
0051C2A2  8B 75 CC                  MOV ESI,dword ptr [EBP + -0x34]
0051C2A5  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0051C2A8  8B 83 18 02 00 00         MOV EAX,dword ptr [EBX + 0x218]
0051C2AE  56                        PUSH ESI
0051C2AF  83 C2 FE                  ADD EDX,-0x2
0051C2B2  6A 06                     PUSH 0x6
0051C2B4  52                        PUSH EDX
0051C2B5  68 94 00 00 00            PUSH 0x94
0051C2BA  50                        PUSH EAX
0051C2BB  E8 69 6F EE FF            CALL 0x00403229
0051C2C0  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0051C2C3  C7 45 D0 94 00 00 00      MOV dword ptr [EBP + -0x30],0x94
0051C2CA  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
0051C2CD  83 C2 FE                  ADD EDX,-0x2
0051C2D0  89 4D D8                  MOV dword ptr [EBP + -0x28],ECX
0051C2D3  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0051C2D6  89 55 D4                  MOV dword ptr [EBP + -0x2c],EDX
0051C2D9  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
0051C2DC  83 C4 38                  ADD ESP,0x38
0051C2DF  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
0051C2E2  8B 83 D7 01 00 00         MOV EAX,dword ptr [EBX + 0x1d7]
0051C2E8  8D 55 D0                  LEA EDX,[EBP + -0x30]
0051C2EB  52                        PUSH EDX
0051C2EC  50                        PUSH EAX
0051C2ED  C6 45 E0 03               MOV byte ptr [EBP + -0x20],0x3
0051C2F1  89 7D E1                  MOV dword ptr [EBP + -0x1f],EDI
0051C2F4  89 4D E5                  MOV dword ptr [EBP + -0x1b],ECX
0051C2F7  E8 C4 1E 19 00            CALL 0x006ae1c0
0051C2FC  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
0051C2FF  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0051C302  03 C1                     ADD EAX,ECX
0051C304  C6 45 F7 01               MOV byte ptr [EBP + -0x9],0x1
0051C308  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_0051c30b:
0051C30B  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
0051C30E  83 C2 04                  ADD EDX,0x4
0051C311  47                        INC EDI
0051C312  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
0051C315  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
0051C318  8D 57 FF                  LEA EDX,[EDI + -0x1]
0051C31B  83 FA 28                  CMP EDX,0x28
0051C31E  0F 8C 6F FE FF FF         JL 0x0051c193
0051C324  BE 32 00 00 00            MOV ESI,0x32
0051C329  BF A0 2C 79 00            MOV EDI,0x792ca0
0051C32E  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
LAB_0051c331:
0051C331  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
0051C334  C7 45 EC 02 00 00 00      MOV dword ptr [EBP + -0x14],0x2
LAB_0051c33b:
0051C33B  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0051C33E  8B 0F                     MOV ECX,dword ptr [EDI]
0051C340  3B C8                     CMP ECX,EAX
0051C342  0F 85 6D 01 00 00         JNZ 0x0051c4b5
0051C348  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0051C34E  56                        PUSH ESI
0051C34F  E8 06 5C EE FF            CALL 0x00401f5a
0051C354  3B 45 0C                  CMP EAX,dword ptr [EBP + 0xc]
0051C357  0F 85 58 01 00 00         JNZ 0x0051c4b5
0051C35D  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0051C360  8B 93 18 02 00 00         MOV EDX,dword ptr [EBX + 0x218]
0051C366  6A 0F                     PUSH 0xf
0051C368  68 06 01 00 00            PUSH 0x106
0051C36D  51                        PUSH ECX
0051C36E  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
0051C374  68 96 00 00 00            PUSH 0x96
0051C379  6A 00                     PUSH 0x0
0051C37B  52                        PUSH EDX
0051C37C  E8 0F 47 1F 00            CALL 0x00710a90
0051C381  A1 18 76 80 00            MOV EAX,[0x00807618]
0051C386  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0051C389  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0051C38C  50                        PUSH EAX
0051C38D  6A 00                     PUSH 0x0
0051C38F  51                        PUSH ECX
0051C390  52                        PUSH EDX
0051C391  E8 EE 72 EE FF            CALL 0x00403684
0051C396  83 C4 0C                  ADD ESP,0xc
0051C399  50                        PUSH EAX
0051C39A  E8 A1 3D 19 00            CALL 0x006b0140
0051C39F  8B F8                     MOV EDI,EAX
0051C3A1  83 C9 FF                  OR ECX,0xffffffff
0051C3A4  33 C0                     XOR EAX,EAX
0051C3A6  6A 0A                     PUSH 0xa
0051C3A8  F2 AE                     SCASB.REPNE ES:EDI
0051C3AA  F7 D1                     NOT ECX
0051C3AC  2B F9                     SUB EDI,ECX
0051C3AE  68 3A F3 80 00            PUSH 0x80f33a
0051C3B3  8B C1                     MOV EAX,ECX
0051C3B5  8B F7                     MOV ESI,EDI
0051C3B7  BF 3A F3 80 00            MOV EDI,0x80f33a
0051C3BC  C1 E9 02                  SHR ECX,0x2
0051C3BF  F3 A5                     MOVSD.REP ES:EDI,ESI
0051C3C1  8B C8                     MOV ECX,EAX
0051C3C3  83 E1 03                  AND ECX,0x3
0051C3C6  F3 A4                     MOVSB.REP ES:EDI,ESI
0051C3C8  E8 93 21 21 00            CALL 0x0072e560
0051C3CD  83 C4 08                  ADD ESP,0x8
0051C3D0  85 C0                     TEST EAX,EAX
0051C3D2  74 12                     JZ 0x0051c3e6
LAB_0051c3d4:
0051C3D4  6A 0A                     PUSH 0xa
0051C3D6  50                        PUSH EAX
0051C3D7  C6 00 20                  MOV byte ptr [EAX],0x20
0051C3DA  E8 81 21 21 00            CALL 0x0072e560
0051C3DF  83 C4 08                  ADD ESP,0x8
0051C3E2  85 C0                     TEST EAX,EAX
0051C3E4  75 EE                     JNZ 0x0051c3d4
LAB_0051c3e6:
0051C3E6  A0 4E 87 80 00            MOV AL,[0x0080874e]
0051C3EB  33 C9                     XOR ECX,ECX
0051C3ED  3C 03                     CMP AL,0x3
0051C3EF  0F 95 C1                  SETNZ CL
0051C3F2  49                        DEC ECX
0051C3F3  83 E1 05                  AND ECX,0x5
0051C3F6  51                        PUSH ECX
0051C3F7  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
0051C3FD  6A FF                     PUSH -0x1
0051C3FF  6A 01                     PUSH 0x1
0051C401  68 3A F3 80 00            PUSH 0x80f33a
0051C406  E8 B5 55 1F 00            CALL 0x007119c0
0051C40B  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0051C40E  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0051C411  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
0051C414  83 C0 0F                  ADD EAX,0xf
0051C417  52                        PUSH EDX
0051C418  57                        PUSH EDI
0051C419  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0051C41C  E8 D4 92 EE FF            CALL 0x004056f5
0051C421  50                        PUSH EAX
0051C422  8B 83 40 02 00 00         MOV EAX,dword ptr [EBX + 0x240]
0051C428  50                        PUSH EAX
0051C429  E8 72 EF 1E 00            CALL 0x0070b3a0
0051C42E  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0051C431  8B 93 18 02 00 00         MOV EDX,dword ptr [EBX + 0x218]
0051C437  50                        PUSH EAX
0051C438  6A 01                     PUSH 0x1
0051C43A  51                        PUSH ECX
0051C43B  68 96 00 00 00            PUSH 0x96
0051C440  52                        PUSH EDX
0051C441  E8 E3 6D EE FF            CALL 0x00403229
0051C446  8B 75 CC                  MOV ESI,dword ptr [EBP + -0x34]
0051C449  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0051C44C  8B 8B 18 02 00 00         MOV ECX,dword ptr [EBX + 0x218]
0051C452  56                        PUSH ESI
0051C453  83 C0 FE                  ADD EAX,-0x2
0051C456  6A 06                     PUSH 0x6
0051C458  50                        PUSH EAX
0051C459  68 94 00 00 00            PUSH 0x94
0051C45E  51                        PUSH ECX
0051C45F  E8 C5 6D EE FF            CALL 0x00403229
0051C464  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0051C467  C7 45 D0 94 00 00 00      MOV dword ptr [EBP + -0x30],0x94
0051C46E  8B 56 04                  MOV EDX,dword ptr [ESI + 0x4]
0051C471  83 C0 FE                  ADD EAX,-0x2
0051C474  89 55 D8                  MOV dword ptr [EBP + -0x28],EDX
0051C477  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0051C47A  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
0051C47D  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
0051C480  83 C4 38                  ADD ESP,0x38
0051C483  89 4D DC                  MOV dword ptr [EBP + -0x24],ECX
0051C486  8B 8B D7 01 00 00         MOV ECX,dword ptr [EBX + 0x1d7]
0051C48C  8D 45 D0                  LEA EAX,[EBP + -0x30]
0051C48F  50                        PUSH EAX
0051C490  51                        PUSH ECX
0051C491  C6 45 E0 02               MOV byte ptr [EBP + -0x20],0x2
0051C495  89 7D E1                  MOV dword ptr [EBP + -0x1f],EDI
0051C498  89 55 E5                  MOV dword ptr [EBP + -0x1b],EDX
0051C49B  E8 20 1D 19 00            CALL 0x006ae1c0
0051C4A0  8B 56 08                  MOV EDX,dword ptr [ESI + 0x8]
0051C4A3  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0051C4A6  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
0051C4A9  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
0051C4AC  03 C2                     ADD EAX,EDX
0051C4AE  C6 45 F7 01               MOV byte ptr [EBP + -0x9],0x1
0051C4B2  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_0051c4b5:
0051C4B5  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0051C4B8  83 C7 0C                  ADD EDI,0xc
0051C4BB  48                        DEC EAX
0051C4BC  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
0051C4BF  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0051C4C2  0F 85 73 FE FF FF         JNZ 0x0051c33b
0051C4C8  46                        INC ESI
0051C4C9  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
0051C4CC  8D 46 CE                  LEA EAX,[ESI + -0x32]
0051C4CF  83 F8 42                  CMP EAX,0x42
0051C4D2  0F 8C 59 FE FF FF         JL 0x0051c331
0051C4D8  8A 45 F7                  MOV AL,byte ptr [EBP + -0x9]
0051C4DB  84 C0                     TEST AL,AL
0051C4DD  75 04                     JNZ 0x0051c4e3
0051C4DF  83 45 FC 0F               ADD dword ptr [EBP + -0x4],0xf
LAB_0051c4e3:
0051C4E3  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0051C4E6  56                        PUSH ESI
0051C4E7  E8 B8 74 EE FF            CALL 0x004039a4
0051C4EC  83 C4 04                  ADD ESP,0x4
0051C4EF  8D 4D FC                  LEA ECX,[EBP + -0x4]
0051C4F2  50                        PUSH EAX
0051C4F3  51                        PUSH ECX
0051C4F4  8B CB                     MOV ECX,EBX
0051C4F6  E8 B0 68 EE FF            CALL 0x00402dab
0051C4FB  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0051C4FE  8D 45 FC                  LEA EAX,[EBP + -0x4]
0051C501  52                        PUSH EDX
0051C502  56                        PUSH ESI
0051C503  6A 04                     PUSH 0x4
0051C505  50                        PUSH EAX
0051C506  8B CB                     MOV ECX,EBX
0051C508  E8 62 8B EE FF            CALL 0x0040506f
0051C50D  8B 8D 60 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff60]
0051C513  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0051C519  5F                        POP EDI
0051C51A  5E                        POP ESI
0051C51B  5B                        POP EBX
0051C51C  8B E5                     MOV ESP,EBP
0051C51E  5D                        POP EBP
0051C51F  C2 0C 00                  RET 0xc
LAB_0051c522:
0051C522  8B 95 60 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff60]
0051C528  68 BC 3C 7C 00            PUSH 0x7c3cbc
0051C52D  68 CC 4C 7A 00            PUSH 0x7a4ccc
0051C532  56                        PUSH ESI
0051C533  6A 00                     PUSH 0x0
0051C535  68 C4 08 00 00            PUSH 0x8c4
0051C53A  68 3C 38 7C 00            PUSH 0x7c383c
0051C53F  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0051C545  E8 86 0F 19 00            CALL 0x006ad4d0
0051C54A  83 C4 18                  ADD ESP,0x18
0051C54D  85 C0                     TEST EAX,EAX
0051C54F  74 01                     JZ 0x0051c552
0051C551  CC                        INT3
LAB_0051c552:
0051C552  68 C4 08 00 00            PUSH 0x8c4
0051C557  68 3C 38 7C 00            PUSH 0x7c383c
0051C55C  6A 00                     PUSH 0x0
0051C55E  56                        PUSH ESI
0051C55F  E8 DC 98 18 00            CALL 0x006a5e40
LAB_0051c564:
0051C564  5F                        POP EDI
0051C565  5E                        POP ESI
0051C566  5B                        POP EBX
0051C567  8B E5                     MOV ESP,EBP
0051C569  5D                        POP EBP
0051C56A  C2 0C 00                  RET 0xc
