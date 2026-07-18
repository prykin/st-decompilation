FUN_005c5130:
005C5130  55                        PUSH EBP
005C5131  8B EC                     MOV EBP,ESP
005C5133  83 EC 4C                  SUB ESP,0x4c
005C5136  53                        PUSH EBX
005C5137  56                        PUSH ESI
005C5138  8B F1                     MOV ESI,ECX
005C513A  57                        PUSH EDI
005C513B  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
005C513E  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
005C5145  FF 15 DC BE 85 00         CALL dword ptr [0x0085bedc]
005C514B  33 FF                     XOR EDI,EDI
005C514D  89 46 61                  MOV dword ptr [ESI + 0x61],EAX
005C5150  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005C5155  8D 55 B8                  LEA EDX,[EBP + -0x48]
005C5158  8D 4D B4                  LEA ECX,[EBP + -0x4c]
005C515B  57                        PUSH EDI
005C515C  52                        PUSH EDX
005C515D  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
005C5160  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005C5166  E8 85 86 16 00            CALL 0x0072d7f0
005C516B  8B F0                     MOV ESI,EAX
005C516D  83 C4 08                  ADD ESP,0x8
005C5170  3B F7                     CMP ESI,EDI
005C5172  0F 85 85 07 00 00         JNZ 0x005c58fd
005C5178  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
005C517B  33 C0                     XOR EAX,EAX
005C517D  8A 46 65                  MOV AL,byte ptr [ESI + 0x65]
005C5180  48                        DEC EAX
005C5181  0F 84 4F 07 00 00         JZ 0x005c58d6
005C5187  BB 02 00 00 00            MOV EBX,0x2
005C518C  2B C3                     SUB EAX,EBX
005C518E  0F 84 4B 02 00 00         JZ 0x005c53df
005C5194  48                        DEC EAX
005C5195  74 15                     JZ 0x005c51ac
005C5197  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
005C519A  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
005C519D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005C51A3  8B C7                     MOV EAX,EDI
005C51A5  5F                        POP EDI
005C51A6  5E                        POP ESI
005C51A7  5B                        POP EBX
005C51A8  8B E5                     MOV ESP,EBP
005C51AA  5D                        POP EBP
005C51AB  C3                        RET
LAB_005c51ac:
005C51AC  8A 86 E4 21 00 00         MOV AL,byte ptr [ESI + 0x21e4]
005C51B2  84 C0                     TEST AL,AL
005C51B4  74 4D                     JZ 0x005c5203
005C51B6  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005C51BC  8B 81 00 03 00 00         MOV EAX,dword ptr [ECX + 0x300]
005C51C2  3B C7                     CMP EAX,EDI
005C51C4  7E 3D                     JLE 0x005c5203
005C51C6  48                        DEC EAX
005C51C7  89 81 00 03 00 00         MOV dword ptr [ECX + 0x300],EAX
005C51CD  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005C51D3  8B 81 FC 02 00 00         MOV EAX,dword ptr [ECX + 0x2fc]
005C51D9  83 F8 FF                  CMP EAX,-0x1
005C51DC  74 22                     JZ 0x005c5200
005C51DE  8B 91 18 03 00 00         MOV EDX,dword ptr [ECX + 0x318]
005C51E4  52                        PUSH EDX
005C51E5  8B 91 14 03 00 00         MOV EDX,dword ptr [ECX + 0x314]
005C51EB  52                        PUSH EDX
005C51EC  8B 91 00 03 00 00         MOV EDX,dword ptr [ECX + 0x300]
005C51F2  52                        PUSH EDX
005C51F3  50                        PUSH EAX
005C51F4  8B 81 40 03 00 00         MOV EAX,dword ptr [ECX + 0x340]
005C51FA  50                        PUSH EAX
005C51FB  E8 30 E5 0E 00            CALL 0x006b3730
LAB_005c5200:
005C5200  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
LAB_005c5203:
005C5203  8A 86 E1 21 00 00         MOV AL,byte ptr [ESI + 0x21e1]
005C5209  84 C0                     TEST AL,AL
005C520B  74 32                     JZ 0x005c523f
005C520D  8B 8E E8 21 00 00         MOV ECX,dword ptr [ESI + 0x21e8]
005C5213  3B CF                     CMP ECX,EDI
005C5215  74 28                     JZ 0x005c523f
005C5217  E8 D5 03 E4 FF            CALL 0x004055f1
005C521C  85 C0                     TEST EAX,EAX
005C521E  74 05                     JZ 0x005c5225
005C5220  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
005C5223  EB 1A                     JMP 0x005c523f
LAB_005c5225:
005C5225  8B 86 E8 21 00 00         MOV EAX,dword ptr [ESI + 0x21e8]
005C522B  8B 40 03                  MOV EAX,dword ptr [EAX + 0x3]
005C522E  3B C7                     CMP EAX,EDI
005C5230  7C 0D                     JL 0x005c523f
005C5232  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005C5238  50                        PUSH EAX
005C5239  51                        PUSH ECX
005C523A  E8 B1 E8 0E 00            CALL 0x006b3af0
LAB_005c523f:
005C523F  8A 86 E5 21 00 00         MOV AL,byte ptr [ESI + 0x21e5]
005C5245  84 C0                     TEST AL,AL
005C5247  74 32                     JZ 0x005c527b
005C5249  8B 8E F4 21 00 00         MOV ECX,dword ptr [ESI + 0x21f4]
005C524F  3B CF                     CMP ECX,EDI
005C5251  74 28                     JZ 0x005c527b
005C5253  E8 99 03 E4 FF            CALL 0x004055f1
005C5258  85 C0                     TEST EAX,EAX
005C525A  74 05                     JZ 0x005c5261
005C525C  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
005C525F  EB 1A                     JMP 0x005c527b
LAB_005c5261:
005C5261  8B 86 F4 21 00 00         MOV EAX,dword ptr [ESI + 0x21f4]
005C5267  8B 40 03                  MOV EAX,dword ptr [EAX + 0x3]
005C526A  3B C7                     CMP EAX,EDI
005C526C  7C 0D                     JL 0x005c527b
005C526E  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005C5274  50                        PUSH EAX
005C5275  52                        PUSH EDX
005C5276  E8 75 E8 0E 00            CALL 0x006b3af0
LAB_005c527b:
005C527B  8A 86 26 1E 00 00         MOV AL,byte ptr [ESI + 0x1e26]
005C5281  3C 06                     CMP AL,0x6
005C5283  74 43                     JZ 0x005c52c8
005C5285  3C 07                     CMP AL,0x7
005C5287  74 3F                     JZ 0x005c52c8
005C5289  3C 0E                     CMP AL,0xe
005C528B  74 3B                     JZ 0x005c52c8
005C528D  8A 86 E2 21 00 00         MOV AL,byte ptr [ESI + 0x21e2]
005C5293  84 C0                     TEST AL,AL
005C5295  74 31                     JZ 0x005c52c8
005C5297  8B 8E EC 21 00 00         MOV ECX,dword ptr [ESI + 0x21ec]
005C529D  3B CF                     CMP ECX,EDI
005C529F  74 27                     JZ 0x005c52c8
005C52A1  E8 4B 03 E4 FF            CALL 0x004055f1
005C52A6  85 C0                     TEST EAX,EAX
005C52A8  74 05                     JZ 0x005c52af
005C52AA  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
005C52AD  EB 19                     JMP 0x005c52c8
LAB_005c52af:
005C52AF  8B 86 EC 21 00 00         MOV EAX,dword ptr [ESI + 0x21ec]
005C52B5  8B 40 03                  MOV EAX,dword ptr [EAX + 0x3]
005C52B8  3B C7                     CMP EAX,EDI
005C52BA  7C 0C                     JL 0x005c52c8
005C52BC  50                        PUSH EAX
005C52BD  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005C52C2  50                        PUSH EAX
005C52C3  E8 28 E8 0E 00            CALL 0x006b3af0
LAB_005c52c8:
005C52C8  8A 86 26 1E 00 00         MOV AL,byte ptr [ESI + 0x1e26]
005C52CE  3C 06                     CMP AL,0x6
005C52D0  74 08                     JZ 0x005c52da
005C52D2  3C 07                     CMP AL,0x7
005C52D4  74 04                     JZ 0x005c52da
005C52D6  3C 0E                     CMP AL,0xe
005C52D8  75 3C                     JNZ 0x005c5316
LAB_005c52da:
005C52DA  8A 86 E3 21 00 00         MOV AL,byte ptr [ESI + 0x21e3]
005C52E0  84 C0                     TEST AL,AL
005C52E2  74 32                     JZ 0x005c5316
005C52E4  8B 8E F0 21 00 00         MOV ECX,dword ptr [ESI + 0x21f0]
005C52EA  3B CF                     CMP ECX,EDI
005C52EC  74 28                     JZ 0x005c5316
005C52EE  E8 FE 02 E4 FF            CALL 0x004055f1
005C52F3  85 C0                     TEST EAX,EAX
005C52F5  74 05                     JZ 0x005c52fc
005C52F7  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
005C52FA  EB 1A                     JMP 0x005c5316
LAB_005c52fc:
005C52FC  8B 86 F0 21 00 00         MOV EAX,dword ptr [ESI + 0x21f0]
005C5302  8B 40 03                  MOV EAX,dword ptr [EAX + 0x3]
005C5305  3B C7                     CMP EAX,EDI
005C5307  7C 0D                     JL 0x005c5316
005C5309  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005C530F  50                        PUSH EAX
005C5310  51                        PUSH ECX
005C5311  E8 DA E7 0E 00            CALL 0x006b3af0
LAB_005c5316:
005C5316  8A 86 26 1E 00 00         MOV AL,byte ptr [ESI + 0x1e26]
005C531C  3C 06                     CMP AL,0x6
005C531E  74 44                     JZ 0x005c5364
005C5320  3C 01                     CMP AL,0x1
005C5322  74 40                     JZ 0x005c5364
005C5324  3A C3                     CMP AL,BL
005C5326  74 3C                     JZ 0x005c5364
005C5328  8A 86 E6 21 00 00         MOV AL,byte ptr [ESI + 0x21e6]
005C532E  84 C0                     TEST AL,AL
005C5330  74 32                     JZ 0x005c5364
005C5332  8B 8E F8 21 00 00         MOV ECX,dword ptr [ESI + 0x21f8]
005C5338  3B CF                     CMP ECX,EDI
005C533A  74 28                     JZ 0x005c5364
005C533C  E8 B0 02 E4 FF            CALL 0x004055f1
005C5341  85 C0                     TEST EAX,EAX
005C5343  74 05                     JZ 0x005c534a
005C5345  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
005C5348  EB 1A                     JMP 0x005c5364
LAB_005c534a:
005C534A  8B 86 F8 21 00 00         MOV EAX,dword ptr [ESI + 0x21f8]
005C5350  8B 40 03                  MOV EAX,dword ptr [EAX + 0x3]
005C5353  3B C7                     CMP EAX,EDI
005C5355  7C 0D                     JL 0x005c5364
005C5357  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005C535D  50                        PUSH EAX
005C535E  52                        PUSH EDX
005C535F  E8 8C E7 0E 00            CALL 0x006b3af0
LAB_005c5364:
005C5364  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005C5369  8B 80 E6 02 00 00         MOV EAX,dword ptr [EAX + 0x2e6]
005C536F  3B C7                     CMP EAX,EDI
005C5371  74 08                     JZ 0x005c537b
005C5373  38 58 65                  CMP byte ptr [EAX + 0x65],BL
005C5376  74 03                     JZ 0x005c537b
005C5378  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
LAB_005c537b:
005C537B  39 7D FC                  CMP dword ptr [EBP + -0x4],EDI
005C537E  0F 84 66 05 00 00         JZ 0x005c58ea
005C5384  8A 8E 5A 1A 00 00         MOV CL,byte ptr [ESI + 0x1a5a]
005C538A  88 5E 65                  MOV byte ptr [ESI + 0x65],BL
005C538D  80 F9 FF                  CMP CL,0xff
005C5390  0F 84 54 05 00 00         JZ 0x005c58ea
005C5396  81 E1 FF 00 00 00         AND ECX,0xff
005C539C  8D 04 CD 00 00 00 00      LEA EAX,[ECX*0x8 + 0x0]
005C53A3  2B C1                     SUB EAX,ECX
005C53A5  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
005C53A8  8D 04 D1                  LEA EAX,[ECX + EDX*0x8]
005C53AB  8D 0C 46                  LEA ECX,[ESI + EAX*0x2]
005C53AE  03 C1                     ADD EAX,ECX
005C53B0  39 B8 D1 00 00 00         CMP dword ptr [EAX + 0xd1],EDI
005C53B6  0F 84 2E 05 00 00         JZ 0x005c58ea
005C53BC  05 C1 00 00 00            ADD EAX,0xc1
005C53C1  B9 20 76 80 00            MOV ECX,0x807620
005C53C6  50                        PUSH EAX
005C53C7  E8 84 E7 11 00            CALL 0x006e3b50
005C53CC  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
005C53CF  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005C53D2  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005C53D8  5F                        POP EDI
005C53D9  5E                        POP ESI
005C53DA  5B                        POP EBX
005C53DB  8B E5                     MOV ESP,EBP
005C53DD  5D                        POP EBP
005C53DE  C3                        RET
LAB_005c53df:
005C53DF  8A 86 E1 21 00 00         MOV AL,byte ptr [ESI + 0x21e1]
005C53E5  84 C0                     TEST AL,AL
005C53E7  74 16                     JZ 0x005c53ff
005C53E9  8B 8E E8 21 00 00         MOV ECX,dword ptr [ESI + 0x21e8]
005C53EF  3B CF                     CMP ECX,EDI
005C53F1  74 0C                     JZ 0x005c53ff
005C53F3  E8 F9 01 E4 FF            CALL 0x004055f1
005C53F8  85 C0                     TEST EAX,EAX
005C53FA  74 03                     JZ 0x005c53ff
005C53FC  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
LAB_005c53ff:
005C53FF  8A 86 E5 21 00 00         MOV AL,byte ptr [ESI + 0x21e5]
005C5405  84 C0                     TEST AL,AL
005C5407  74 16                     JZ 0x005c541f
005C5409  8B 8E F4 21 00 00         MOV ECX,dword ptr [ESI + 0x21f4]
005C540F  3B CF                     CMP ECX,EDI
005C5411  74 0C                     JZ 0x005c541f
005C5413  E8 D9 01 E4 FF            CALL 0x004055f1
005C5418  85 C0                     TEST EAX,EAX
005C541A  74 03                     JZ 0x005c541f
005C541C  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
LAB_005c541f:
005C541F  8A 86 26 1E 00 00         MOV AL,byte ptr [ESI + 0x1e26]
005C5425  3C 06                     CMP AL,0x6
005C5427  74 28                     JZ 0x005c5451
005C5429  3C 07                     CMP AL,0x7
005C542B  74 24                     JZ 0x005c5451
005C542D  3C 0E                     CMP AL,0xe
005C542F  74 20                     JZ 0x005c5451
005C5431  8A 86 E2 21 00 00         MOV AL,byte ptr [ESI + 0x21e2]
005C5437  84 C0                     TEST AL,AL
005C5439  74 16                     JZ 0x005c5451
005C543B  8B 8E EC 21 00 00         MOV ECX,dword ptr [ESI + 0x21ec]
005C5441  3B CF                     CMP ECX,EDI
005C5443  74 0C                     JZ 0x005c5451
005C5445  E8 A7 01 E4 FF            CALL 0x004055f1
005C544A  85 C0                     TEST EAX,EAX
005C544C  74 03                     JZ 0x005c5451
005C544E  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
LAB_005c5451:
005C5451  8A 86 26 1E 00 00         MOV AL,byte ptr [ESI + 0x1e26]
005C5457  3C 06                     CMP AL,0x6
005C5459  74 08                     JZ 0x005c5463
005C545B  3C 07                     CMP AL,0x7
005C545D  74 04                     JZ 0x005c5463
005C545F  3C 0E                     CMP AL,0xe
005C5461  75 20                     JNZ 0x005c5483
LAB_005c5463:
005C5463  8A 86 E3 21 00 00         MOV AL,byte ptr [ESI + 0x21e3]
005C5469  84 C0                     TEST AL,AL
005C546B  74 16                     JZ 0x005c5483
005C546D  8B 8E F0 21 00 00         MOV ECX,dword ptr [ESI + 0x21f0]
005C5473  3B CF                     CMP ECX,EDI
005C5475  74 0C                     JZ 0x005c5483
005C5477  E8 75 01 E4 FF            CALL 0x004055f1
005C547C  85 C0                     TEST EAX,EAX
005C547E  74 03                     JZ 0x005c5483
005C5480  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
LAB_005c5483:
005C5483  8A 86 26 1E 00 00         MOV AL,byte ptr [ESI + 0x1e26]
005C5489  3C 06                     CMP AL,0x6
005C548B  74 28                     JZ 0x005c54b5
005C548D  3C 01                     CMP AL,0x1
005C548F  74 24                     JZ 0x005c54b5
005C5491  3A C3                     CMP AL,BL
005C5493  74 20                     JZ 0x005c54b5
005C5495  8A 86 E6 21 00 00         MOV AL,byte ptr [ESI + 0x21e6]
005C549B  84 C0                     TEST AL,AL
005C549D  74 16                     JZ 0x005c54b5
005C549F  8B 8E F8 21 00 00         MOV ECX,dword ptr [ESI + 0x21f8]
005C54A5  3B CF                     CMP ECX,EDI
005C54A7  74 0C                     JZ 0x005c54b5
005C54A9  E8 43 01 E4 FF            CALL 0x004055f1
005C54AE  85 C0                     TEST EAX,EAX
005C54B0  74 03                     JZ 0x005c54b5
005C54B2  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
LAB_005c54b5:
005C54B5  8A 86 E4 21 00 00         MOV AL,byte ptr [ESI + 0x21e4]
005C54BB  84 C0                     TEST AL,AL
005C54BD  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005C54C2  74 52                     JZ 0x005c5516
005C54C4  8B 90 04 03 00 00         MOV EDX,dword ptr [EAX + 0x304]
005C54CA  8B 88 00 03 00 00         MOV ECX,dword ptr [EAX + 0x300]
005C54D0  4A                        DEC EDX
005C54D1  3B CA                     CMP ECX,EDX
005C54D3  7D 41                     JGE 0x005c5516
005C54D5  41                        INC ECX
005C54D6  89 88 00 03 00 00         MOV dword ptr [EAX + 0x300],ECX
005C54DC  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005C54E1  8B 88 FC 02 00 00         MOV ECX,dword ptr [EAX + 0x2fc]
005C54E7  83 F9 FF                  CMP ECX,-0x1
005C54EA  74 27                     JZ 0x005c5513
005C54EC  8B 90 18 03 00 00         MOV EDX,dword ptr [EAX + 0x318]
005C54F2  52                        PUSH EDX
005C54F3  8B 90 14 03 00 00         MOV EDX,dword ptr [EAX + 0x314]
005C54F9  52                        PUSH EDX
005C54FA  8B 90 00 03 00 00         MOV EDX,dword ptr [EAX + 0x300]
005C5500  8B 80 40 03 00 00         MOV EAX,dword ptr [EAX + 0x340]
005C5506  52                        PUSH EDX
005C5507  51                        PUSH ECX
005C5508  50                        PUSH EAX
005C5509  E8 22 E2 0E 00            CALL 0x006b3730
005C550E  A1 6C 17 81 00            MOV EAX,[0x0081176c]
LAB_005c5513:
005C5513  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
LAB_005c5516:
005C5516  8B 88 E6 02 00 00         MOV ECX,dword ptr [EAX + 0x2e6]
005C551C  3B CF                     CMP ECX,EDI
005C551E  74 09                     JZ 0x005c5529
005C5520  80 79 65 01               CMP byte ptr [ECX + 0x65],0x1
005C5524  74 03                     JZ 0x005c5529
005C5526  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
LAB_005c5529:
005C5529  39 7D FC                  CMP dword ptr [EBP + -0x4],EDI
005C552C  0F 84 B8 03 00 00         JZ 0x005c58ea
005C5532  8B 8E F0 21 00 00         MOV ECX,dword ptr [ESI + 0x21f0]
005C5538  3B CF                     CMP ECX,EDI
005C553A  74 1F                     JZ 0x005c555b
005C553C  E8 49 BD E3 FF            CALL 0x0040128a
005C5541  8B 8E F0 21 00 00         MOV ECX,dword ptr [ESI + 0x21f0]
005C5547  51                        PUSH ECX
005C5548  E8 63 8D 16 00            CALL 0x0072e2b0
005C554D  89 BE F0 21 00 00         MOV dword ptr [ESI + 0x21f0],EDI
005C5553  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005C5558  83 C4 04                  ADD ESP,0x4
LAB_005c555b:
005C555B  8A 8E 26 1E 00 00         MOV CL,byte ptr [ESI + 0x1e26]
005C5561  80 F9 06                  CMP CL,0x6
005C5564  74 0A                     JZ 0x005c5570
005C5566  80 F9 07                  CMP CL,0x7
005C5569  74 05                     JZ 0x005c5570
005C556B  80 F9 0E                  CMP CL,0xe
005C556E  75 21                     JNZ 0x005c5591
LAB_005c5570:
005C5570  8A 8E E3 21 00 00         MOV CL,byte ptr [ESI + 0x21e3]
005C5576  84 C9                     TEST CL,CL
005C5578  74 17                     JZ 0x005c5591
005C557A  8B 96 80 1F 00 00         MOV EDX,dword ptr [ESI + 0x1f80]
005C5580  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005C5585  52                        PUSH EDX
005C5586  50                        PUSH EAX
005C5587  E8 A4 DE 0E 00            CALL 0x006b3430
005C558C  A1 6C 17 81 00            MOV EAX,[0x0081176c]
LAB_005c5591:
005C5591  8B 8E E8 21 00 00         MOV ECX,dword ptr [ESI + 0x21e8]
005C5597  3B CF                     CMP ECX,EDI
005C5599  74 1F                     JZ 0x005c55ba
005C559B  E8 EA BC E3 FF            CALL 0x0040128a
005C55A0  8B 8E E8 21 00 00         MOV ECX,dword ptr [ESI + 0x21e8]
005C55A6  51                        PUSH ECX
005C55A7  E8 04 8D 16 00            CALL 0x0072e2b0
005C55AC  89 BE E8 21 00 00         MOV dword ptr [ESI + 0x21e8],EDI
005C55B2  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005C55B7  83 C4 04                  ADD ESP,0x4
LAB_005c55ba:
005C55BA  8A 8E E1 21 00 00         MOV CL,byte ptr [ESI + 0x21e1]
005C55C0  84 C9                     TEST CL,CL
005C55C2  0F 84 9D 00 00 00         JZ 0x005c5665
005C55C8  8B 86 6F 1C 00 00         MOV EAX,dword ptr [ESI + 0x1c6f]
005C55CE  83 F8 FF                  CMP EAX,-0x1
005C55D1  74 1D                     JZ 0x005c55f0
005C55D3  8B 96 8B 1C 00 00         MOV EDX,dword ptr [ESI + 0x1c8b]
005C55D9  8B 8E 87 1C 00 00         MOV ECX,dword ptr [ESI + 0x1c87]
005C55DF  52                        PUSH EDX
005C55E0  8B 96 B3 1C 00 00         MOV EDX,dword ptr [ESI + 0x1cb3]
005C55E6  51                        PUSH ECX
005C55E7  6A FE                     PUSH -0x2
005C55E9  50                        PUSH EAX
005C55EA  52                        PUSH EDX
005C55EB  E8 E0 DE 0E 00            CALL 0x006b34d0
LAB_005c55f0:
005C55F0  8B 86 00 1D 00 00         MOV EAX,dword ptr [ESI + 0x1d00]
005C55F6  83 F8 FF                  CMP EAX,-0x1
005C55F9  74 1D                     JZ 0x005c5618
005C55FB  8B 8E 1C 1D 00 00         MOV ECX,dword ptr [ESI + 0x1d1c]
005C5601  8B 96 18 1D 00 00         MOV EDX,dword ptr [ESI + 0x1d18]
005C5607  51                        PUSH ECX
005C5608  52                        PUSH EDX
005C5609  6A FE                     PUSH -0x2
005C560B  50                        PUSH EAX
005C560C  8B 86 44 1D 00 00         MOV EAX,dword ptr [ESI + 0x1d44]
005C5612  50                        PUSH EAX
005C5613  E8 B8 DE 0E 00            CALL 0x006b34d0
LAB_005c5618:
005C5618  8B 86 91 1D 00 00         MOV EAX,dword ptr [ESI + 0x1d91]
005C561E  83 F8 FF                  CMP EAX,-0x1
005C5621  74 1D                     JZ 0x005c5640
005C5623  8B 8E AD 1D 00 00         MOV ECX,dword ptr [ESI + 0x1dad]
005C5629  8B 96 A9 1D 00 00         MOV EDX,dword ptr [ESI + 0x1da9]
005C562F  51                        PUSH ECX
005C5630  52                        PUSH EDX
005C5631  6A FE                     PUSH -0x2
005C5633  50                        PUSH EAX
005C5634  8B 86 D5 1D 00 00         MOV EAX,dword ptr [ESI + 0x1dd5]
005C563A  50                        PUSH EAX
005C563B  E8 90 DE 0E 00            CALL 0x006b34d0
LAB_005c5640:
005C5640  8D BE CC 20 00 00         LEA EDI,[ESI + 0x20cc]
005C5646  BB 0A 00 00 00            MOV EBX,0xa
LAB_005c564b:
005C564B  8B 0F                     MOV ECX,dword ptr [EDI]
005C564D  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005C5653  51                        PUSH ECX
005C5654  52                        PUSH EDX
005C5655  E8 D6 DD 0E 00            CALL 0x006b3430
005C565A  83 C7 04                  ADD EDI,0x4
005C565D  4B                        DEC EBX
005C565E  75 EB                     JNZ 0x005c564b
005C5660  A1 6C 17 81 00            MOV EAX,[0x0081176c]
LAB_005c5665:
005C5665  8B 8E F4 21 00 00         MOV ECX,dword ptr [ESI + 0x21f4]
005C566B  33 FF                     XOR EDI,EDI
005C566D  3B CF                     CMP ECX,EDI
005C566F  74 1F                     JZ 0x005c5690
005C5671  E8 14 BC E3 FF            CALL 0x0040128a
005C5676  8B 86 F4 21 00 00         MOV EAX,dword ptr [ESI + 0x21f4]
005C567C  50                        PUSH EAX
005C567D  E8 2E 8C 16 00            CALL 0x0072e2b0
005C5682  89 BE F4 21 00 00         MOV dword ptr [ESI + 0x21f4],EDI
005C5688  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005C568D  83 C4 04                  ADD ESP,0x4
LAB_005c5690:
005C5690  8A 8E E5 21 00 00         MOV CL,byte ptr [ESI + 0x21e5]
005C5696  84 C9                     TEST CL,CL
005C5698  74 18                     JZ 0x005c56b2
005C569A  8B 8E 22 1E 00 00         MOV ECX,dword ptr [ESI + 0x1e22]
005C56A0  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005C56A6  51                        PUSH ECX
005C56A7  52                        PUSH EDX
005C56A8  E8 83 DD 0E 00            CALL 0x006b3430
005C56AD  A1 6C 17 81 00            MOV EAX,[0x0081176c]
LAB_005c56b2:
005C56B2  8B 8E EC 21 00 00         MOV ECX,dword ptr [ESI + 0x21ec]
005C56B8  3B CF                     CMP ECX,EDI
005C56BA  74 1F                     JZ 0x005c56db
005C56BC  E8 C9 BB E3 FF            CALL 0x0040128a
005C56C1  8B 86 EC 21 00 00         MOV EAX,dword ptr [ESI + 0x21ec]
005C56C7  50                        PUSH EAX
005C56C8  E8 E3 8B 16 00            CALL 0x0072e2b0
005C56CD  89 BE EC 21 00 00         MOV dword ptr [ESI + 0x21ec],EDI
005C56D3  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005C56D8  83 C4 04                  ADD ESP,0x4
LAB_005c56db:
005C56DB  8A 8E 26 1E 00 00         MOV CL,byte ptr [ESI + 0x1e26]
005C56E1  80 F9 06                  CMP CL,0x6
005C56E4  0F 84 B1 00 00 00         JZ 0x005c579b
005C56EA  80 F9 07                  CMP CL,0x7
005C56ED  0F 84 A8 00 00 00         JZ 0x005c579b
005C56F3  80 F9 0E                  CMP CL,0xe
005C56F6  0F 84 9F 00 00 00         JZ 0x005c579b
005C56FC  8B 88 91 03 00 00         MOV ECX,dword ptr [EAX + 0x391]
005C5702  83 F9 FF                  CMP ECX,-0x1
005C5705  74 22                     JZ 0x005c5729
005C5707  8B 90 AD 03 00 00         MOV EDX,dword ptr [EAX + 0x3ad]
005C570D  52                        PUSH EDX
005C570E  8B 90 A9 03 00 00         MOV EDX,dword ptr [EAX + 0x3a9]
005C5714  8B 80 D5 03 00 00         MOV EAX,dword ptr [EAX + 0x3d5]
005C571A  52                        PUSH EDX
005C571B  6A FE                     PUSH -0x2
005C571D  51                        PUSH ECX
005C571E  50                        PUSH EAX
005C571F  E8 AC DD 0E 00            CALL 0x006b34d0
005C5724  A1 6C 17 81 00            MOV EAX,[0x0081176c]
LAB_005c5729:
005C5729  8B 88 22 04 00 00         MOV ECX,dword ptr [EAX + 0x422]
005C572F  83 F9 FF                  CMP ECX,-0x1
005C5732  74 22                     JZ 0x005c5756
005C5734  8B 90 3E 04 00 00         MOV EDX,dword ptr [EAX + 0x43e]
005C573A  52                        PUSH EDX
005C573B  8B 90 3A 04 00 00         MOV EDX,dword ptr [EAX + 0x43a]
005C5741  8B 80 66 04 00 00         MOV EAX,dword ptr [EAX + 0x466]
005C5747  52                        PUSH EDX
005C5748  6A FE                     PUSH -0x2
005C574A  51                        PUSH ECX
005C574B  50                        PUSH EAX
005C574C  E8 7F DD 0E 00            CALL 0x006b34d0
005C5751  A1 6C 17 81 00            MOV EAX,[0x0081176c]
LAB_005c5756:
005C5756  8B 88 B3 04 00 00         MOV ECX,dword ptr [EAX + 0x4b3]
005C575C  83 F9 FF                  CMP ECX,-0x1
005C575F  74 22                     JZ 0x005c5783
005C5761  8B 90 CF 04 00 00         MOV EDX,dword ptr [EAX + 0x4cf]
005C5767  52                        PUSH EDX
005C5768  8B 90 CB 04 00 00         MOV EDX,dword ptr [EAX + 0x4cb]
005C576E  8B 80 F7 04 00 00         MOV EAX,dword ptr [EAX + 0x4f7]
005C5774  52                        PUSH EDX
005C5775  6A FE                     PUSH -0x2
005C5777  51                        PUSH ECX
005C5778  50                        PUSH EAX
005C5779  E8 52 DD 0E 00            CALL 0x006b34d0
005C577E  A1 6C 17 81 00            MOV EAX,[0x0081176c]
LAB_005c5783:
005C5783  8B 88 40 05 00 00         MOV ECX,dword ptr [EAX + 0x540]
005C5789  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005C578F  51                        PUSH ECX
005C5790  52                        PUSH EDX
005C5791  E8 9A DC 0E 00            CALL 0x006b3430
005C5796  A1 6C 17 81 00            MOV EAX,[0x0081176c]
LAB_005c579b:
005C579B  8A 8E E4 21 00 00         MOV CL,byte ptr [ESI + 0x21e4]
005C57A1  84 C9                     TEST CL,CL
005C57A3  74 35                     JZ 0x005c57da
005C57A5  8B 80 EC 02 00 00         MOV EAX,dword ptr [EAX + 0x2ec]
005C57AB  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005C57B1  50                        PUSH EAX
005C57B2  51                        PUSH ECX
005C57B3  E8 78 DC 0E 00            CALL 0x006b3430
005C57B8  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005C57BD  8B 88 FC 02 00 00         MOV ECX,dword ptr [EAX + 0x2fc]
005C57C3  83 F9 FF                  CMP ECX,-0x1
005C57C6  74 12                     JZ 0x005c57da
005C57C8  8B 90 40 03 00 00         MOV EDX,dword ptr [EAX + 0x340]
005C57CE  51                        PUSH ECX
005C57CF  52                        PUSH EDX
005C57D0  E8 1B E3 0E 00            CALL 0x006b3af0
005C57D5  A1 6C 17 81 00            MOV EAX,[0x0081176c]
LAB_005c57da:
005C57DA  8B 8E F8 21 00 00         MOV ECX,dword ptr [ESI + 0x21f8]
005C57E0  3B CF                     CMP ECX,EDI
005C57E2  74 1F                     JZ 0x005c5803
005C57E4  E8 A1 BA E3 FF            CALL 0x0040128a
005C57E9  8B 86 F8 21 00 00         MOV EAX,dword ptr [ESI + 0x21f8]
005C57EF  50                        PUSH EAX
005C57F0  E8 BB 8A 16 00            CALL 0x0072e2b0
005C57F5  89 BE F8 21 00 00         MOV dword ptr [ESI + 0x21f8],EDI
005C57FB  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005C5800  83 C4 04                  ADD ESP,0x4
LAB_005c5803:
005C5803  8A 8E E6 21 00 00         MOV CL,byte ptr [ESI + 0x21e6]
005C5809  84 C9                     TEST CL,CL
005C580B  0F 84 85 00 00 00         JZ 0x005c5896
005C5811  8B 88 60 05 00 00         MOV ECX,dword ptr [EAX + 0x560]
005C5817  83 F9 FF                  CMP ECX,-0x1
005C581A  74 22                     JZ 0x005c583e
005C581C  8B 90 7C 05 00 00         MOV EDX,dword ptr [EAX + 0x57c]
005C5822  52                        PUSH EDX
005C5823  8B 90 78 05 00 00         MOV EDX,dword ptr [EAX + 0x578]
005C5829  8B 80 A4 05 00 00         MOV EAX,dword ptr [EAX + 0x5a4]
005C582F  52                        PUSH EDX
005C5830  6A FE                     PUSH -0x2
005C5832  51                        PUSH ECX
005C5833  50                        PUSH EAX
005C5834  E8 97 DC 0E 00            CALL 0x006b34d0
005C5839  A1 6C 17 81 00            MOV EAX,[0x0081176c]
LAB_005c583e:
005C583E  8B 88 F1 05 00 00         MOV ECX,dword ptr [EAX + 0x5f1]
005C5844  83 F9 FF                  CMP ECX,-0x1
005C5847  74 22                     JZ 0x005c586b
005C5849  8B 90 0D 06 00 00         MOV EDX,dword ptr [EAX + 0x60d]
005C584F  52                        PUSH EDX
005C5850  8B 90 09 06 00 00         MOV EDX,dword ptr [EAX + 0x609]
005C5856  8B 80 35 06 00 00         MOV EAX,dword ptr [EAX + 0x635]
005C585C  52                        PUSH EDX
005C585D  6A FE                     PUSH -0x2
005C585F  51                        PUSH ECX
005C5860  50                        PUSH EAX
005C5861  E8 6A DC 0E 00            CALL 0x006b34d0
005C5866  A1 6C 17 81 00            MOV EAX,[0x0081176c]
LAB_005c586b:
005C586B  8B 88 58 05 00 00         MOV ECX,dword ptr [EAX + 0x558]
005C5871  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005C5877  51                        PUSH ECX
005C5878  52                        PUSH EDX
005C5879  E8 B2 DB 0E 00            CALL 0x006b3430
005C587E  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005C5883  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005C5889  8B 88 54 05 00 00         MOV ECX,dword ptr [EAX + 0x554]
005C588F  51                        PUSH ECX
005C5890  52                        PUSH EDX
005C5891  E8 9A DB 0E 00            CALL 0x006b3430
LAB_005c5896:
005C5896  8B 06                     MOV EAX,dword ptr [ESI]
005C5898  57                        PUSH EDI
005C5899  8B CE                     MOV ECX,ESI
005C589B  C6 46 65 01               MOV byte ptr [ESI + 0x65],0x1
005C589F  FF 50 18                  CALL dword ptr [EAX + 0x18]
005C58A2  8A 86 26 1E 00 00         MOV AL,byte ptr [ESI + 0x1e26]
005C58A8  3C 06                     CMP AL,0x6
005C58AA  74 08                     JZ 0x005c58b4
005C58AC  3C 07                     CMP AL,0x7
005C58AE  74 04                     JZ 0x005c58b4
005C58B0  3C 0E                     CMP AL,0xe
005C58B2  75 07                     JNZ 0x005c58bb
LAB_005c58b4:
005C58B4  8B CE                     MOV ECX,ESI
005C58B6  E8 69 FC E3 FF            CALL 0x00405524
LAB_005c58bb:
005C58BB  57                        PUSH EDI
005C58BC  8B CE                     MOV ECX,ESI
005C58BE  E8 12 F1 E3 FF            CALL 0x004049d5
005C58C3  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
005C58C6  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005C58C9  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005C58CF  5F                        POP EDI
005C58D0  5E                        POP ESI
005C58D1  5B                        POP EBX
005C58D2  8B E5                     MOV ESP,EBP
005C58D4  5D                        POP EBP
005C58D5  C3                        RET
LAB_005c58d6:
005C58D6  A0 A0 67 80 00            MOV AL,[0x008067a0]
005C58DB  84 C0                     TEST AL,AL
005C58DD  74 0B                     JZ 0x005c58ea
005C58DF  B9 90 2A 80 00            MOV ECX,0x802a90
005C58E4  FF 15 5C C0 85 00         CALL dword ptr [0x0085c05c]
LAB_005c58ea:
005C58EA  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
005C58ED  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005C58F0  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005C58F6  5F                        POP EDI
005C58F7  5E                        POP ESI
005C58F8  5B                        POP EBX
005C58F9  8B E5                     MOV ESP,EBP
005C58FB  5D                        POP EBP
005C58FC  C3                        RET
LAB_005c58fd:
005C58FD  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
005C5900  68 A8 D1 7C 00            PUSH 0x7cd1a8
005C5905  68 CC 4C 7A 00            PUSH 0x7a4ccc
005C590A  56                        PUSH ESI
005C590B  57                        PUSH EDI
005C590C  68 43 02 00 00            PUSH 0x243
005C5911  68 E8 D0 7C 00            PUSH 0x7cd0e8
005C5916  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005C591C  E8 AF 7B 0E 00            CALL 0x006ad4d0
005C5921  83 C4 18                  ADD ESP,0x18
005C5924  85 C0                     TEST EAX,EAX
005C5926  74 01                     JZ 0x005c5929
005C5928  CC                        INT3
LAB_005c5929:
005C5929  68 43 02 00 00            PUSH 0x243
005C592E  68 E8 D0 7C 00            PUSH 0x7cd0e8
005C5933  57                        PUSH EDI
005C5934  56                        PUSH ESI
005C5935  E8 06 05 0E 00            CALL 0x006a5e40
005C593A  5F                        POP EDI
005C593B  5E                        POP ESI
005C593C  33 C0                     XOR EAX,EAX
005C593E  5B                        POP EBX
005C593F  8B E5                     MOV ESP,EBP
005C5941  5D                        POP EBP
005C5942  C3                        RET
