FUN_0051d540:
0051D540  55                        PUSH EBP
0051D541  8B EC                     MOV EBP,ESP
0051D543  83 EC 74                  SUB ESP,0x74
0051D546  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0051D549  53                        PUSH EBX
0051D54A  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0051D54D  56                        PUSH ESI
0051D54E  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0051D551  57                        PUSH EDI
0051D552  50                        PUSH EAX
0051D553  51                        PUSH ECX
0051D554  E8 1A 4F EE FF            CALL 0x00402473
0051D559  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0051D55C  B9 06 00 00 00            MOV ECX,0x6
0051D561  33 C0                     XOR EAX,EAX
0051D563  8D 7D D0                  LEA EDI,[EBP + -0x30]
0051D566  F3 AB                     STOSD.REP ES:EDI
0051D568  8B 15 F8 8D 85 00         MOV EDX,dword ptr [0x00858df8]
0051D56E  33 F6                     XOR ESI,ESI
0051D570  AA                        STOSB ES:EDI
0051D571  8D 4D 90                  LEA ECX,[EBP + -0x70]
0051D574  8D 45 8C                  LEA EAX,[EBP + -0x74]
0051D577  56                        PUSH ESI
0051D578  51                        PUSH ECX
0051D579  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
0051D57C  89 55 8C                  MOV dword ptr [EBP + -0x74],EDX
0051D57F  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0051D584  E8 67 02 21 00            CALL 0x0072d7f0
0051D589  8B F8                     MOV EDI,EAX
0051D58B  83 C4 10                  ADD ESP,0x10
0051D58E  3B FE                     CMP EDI,ESI
0051D590  0F 85 81 03 00 00         JNZ 0x0051d917
0051D596  8A 45 10                  MOV AL,byte ptr [EBP + 0x10]
0051D599  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
0051D59C  84 C0                     TEST AL,AL
0051D59E  0F 85 E5 00 00 00         JNZ 0x0051d689
0051D5A4  8A 83 A1 01 00 00         MOV AL,byte ptr [EBX + 0x1a1]
0051D5AA  84 C0                     TEST AL,AL
0051D5AC  74 17                     JZ 0x0051d5c5
0051D5AE  3C 06                     CMP AL,0x6
0051D5B0  74 13                     JZ 0x0051d5c5
0051D5B2  3C 0A                     CMP AL,0xa
0051D5B4  74 0F                     JZ 0x0051d5c5
0051D5B6  C6 83 A2 01 00 00 00      MOV byte ptr [EBX + 0x1a2],0x0
0051D5BD  89 B3 AB 01 00 00         MOV dword ptr [EBX + 0x1ab],ESI
0051D5C3  EB 12                     JMP 0x0051d5d7
LAB_0051d5c5:
0051D5C5  8B 93 A3 01 00 00         MOV EDX,dword ptr [EBX + 0x1a3]
0051D5CB  88 83 A2 01 00 00         MOV byte ptr [EBX + 0x1a2],AL
0051D5D1  89 93 AB 01 00 00         MOV dword ptr [EBX + 0x1ab],EDX
LAB_0051d5d7:
0051D5D7  8B 83 78 01 00 00         MOV EAX,dword ptr [EBX + 0x178]
0051D5DD  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0051D5E0  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
0051D5E3  C6 83 A1 01 00 00 08      MOV byte ptr [EBX + 0x1a1],0x8
0051D5EA  85 C0                     TEST EAX,EAX
0051D5EC  89 BB A3 01 00 00         MOV dword ptr [EBX + 0x1a3],EDI
0051D5F2  89 B3 A7 01 00 00         MOV dword ptr [EBX + 0x1a7],ESI
0051D5F8  66 C7 83 AF 01 00 00 14 00  MOV word ptr [EBX + 0x1af],0x14
0051D601  66 C7 83 B1 01 00 00 05 00  MOV word ptr [EBX + 0x1b1],0x5
0051D60A  74 28                     JZ 0x0051d634
0051D60C  C7 43 28 02 42 00 00      MOV dword ptr [EBX + 0x28],0x4202
0051D613  66 C7 43 2C 00 00         MOV word ptr [EBX + 0x2c],0x0
0051D619  66 C7 43 2E 02 00         MOV word ptr [EBX + 0x2e],0x2
0051D61F  89 43 30                  MOV dword ptr [EBX + 0x30],EAX
0051D622  8B 0D 30 2A 80 00         MOV ECX,dword ptr [0x00802a30]
0051D628  85 C9                     TEST ECX,ECX
0051D62A  74 08                     JZ 0x0051d634
0051D62C  8B 01                     MOV EAX,dword ptr [ECX]
0051D62E  8D 53 18                  LEA EDX,[EBX + 0x18]
0051D631  52                        PUSH EDX
0051D632  FF 10                     CALL dword ptr [EAX]
LAB_0051d634:
0051D634  8B C6                     MOV EAX,ESI
0051D636  48                        DEC EAX
0051D637  74 08                     JZ 0x0051d641
0051D639  48                        DEC EAX
0051D63A  74 14                     JZ 0x0051d650
0051D63C  48                        DEC EAX
0051D63D  74 26                     JZ 0x0051d665
0051D63F  EB 33                     JMP 0x0051d674
LAB_0051d641:
0051D641  B8 01 00 00 00            MOV EAX,0x1
0051D646  8B CF                     MOV ECX,EDI
0051D648  D3 E0                     SHL EAX,CL
0051D64A  09 05 52 73 80 00         OR dword ptr [0x00807352],EAX
LAB_0051d650:
0051D650  A1 56 73 80 00            MOV EAX,[0x00807356]
0051D655  BA 01 00 00 00            MOV EDX,0x1
0051D65A  8B CF                     MOV ECX,EDI
0051D65C  D3 E2                     SHL EDX,CL
0051D65E  0B C2                     OR EAX,EDX
0051D660  A3 56 73 80 00            MOV [0x00807356],EAX
LAB_0051d665:
0051D665  B8 01 00 00 00            MOV EAX,0x1
0051D66A  8B CF                     MOV ECX,EDI
0051D66C  D3 E0                     SHL EAX,CL
0051D66E  09 05 5A 73 80 00         OR dword ptr [0x0080735a],EAX
LAB_0051d674:
0051D674  A1 4E 73 80 00            MOV EAX,[0x0080734e]
0051D679  BA 01 00 00 00            MOV EDX,0x1
0051D67E  8B CF                     MOV ECX,EDI
0051D680  D3 E2                     SHL EDX,CL
0051D682  0B C2                     OR EAX,EDX
0051D684  A3 4E 73 80 00            MOV [0x0080734e],EAX
LAB_0051d689:
0051D689  6A 00                     PUSH 0x0
0051D68B  6A 00                     PUSH 0x0
0051D68D  68 F2 55 00 00            PUSH 0x55f2
0051D692  8B CB                     MOV ECX,EBX
0051D694  E8 60 68 EE FF            CALL 0x00403ef9
0051D699  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0051D69C  3D 10 27 00 00            CMP EAX,0x2710
0051D6A1  0F 84 C5 00 00 00         JZ 0x0051d76c
0051D6A7  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
0051D6AD  51                        PUSH ECX
0051D6AE  50                        PUSH EAX
0051D6AF  E8 8C 2A 19 00            CALL 0x006b0140
0051D6B4  8B F8                     MOV EDI,EAX
0051D6B6  83 C9 FF                  OR ECX,0xffffffff
0051D6B9  33 C0                     XOR EAX,EAX
0051D6BB  6A 01                     PUSH 0x1
0051D6BD  F2 AE                     SCASB.REPNE ES:EDI
0051D6BF  F7 D1                     NOT ECX
0051D6C1  2B F9                     SUB EDI,ECX
0051D6C3  68 98 21 7C 00            PUSH 0x7c2198
0051D6C8  8B D1                     MOV EDX,ECX
0051D6CA  8B F7                     MOV ESI,EDI
0051D6CC  BF 3A F3 80 00            MOV EDI,0x80f33a
0051D6D1  68 9C 01 00 00            PUSH 0x19c
0051D6D6  C1 E9 02                  SHR ECX,0x2
0051D6D9  F3 A5                     MOVSD.REP ES:EDI,ESI
0051D6DB  8B CA                     MOV ECX,EDX
0051D6DD  68 EC 21 7C 00            PUSH 0x7c21ec
0051D6E2  83 E1 03                  AND ECX,0x3
0051D6E5  68 D8 21 7C 00            PUSH 0x7c21d8
0051D6EA  F3 A4                     MOVSB.REP ES:EDI,ESI
0051D6EC  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
0051D6F2  68 3A F3 80 00            PUSH 0x80f33a
0051D6F7  68 3A F3 80 00            PUSH 0x80f33a
0051D6FC  E8 2F 56 1F 00            CALL 0x00712d30
0051D701  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
0051D707  68 3A F3 80 00            PUSH 0x80f33a
0051D70C  E8 CF 3C 1F 00            CALL 0x007113e0
0051D711  8B F8                     MOV EDI,EAX
0051D713  8B CB                     MOV ECX,EBX
0051D715  57                        PUSH EDI
0051D716  6A 00                     PUSH 0x0
0051D718  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
0051D71B  E8 50 41 EE FF            CALL 0x00401870
0051D720  8B 8B 18 02 00 00         MOV ECX,dword ptr [EBX + 0x218]
0051D726  8D 47 02                  LEA EAX,[EDI + 0x2]
0051D729  50                        PUSH EAX
0051D72A  68 9C 01 00 00            PUSH 0x19c
0051D72F  6A 00                     PUSH 0x0
0051D731  6A 00                     PUSH 0x0
0051D733  6A 00                     PUSH 0x0
0051D735  51                        PUSH ECX
0051D736  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
0051D73C  E8 4F 33 1F 00            CALL 0x00710a90
0051D741  A0 4E 87 80 00            MOV AL,[0x0080874e]
0051D746  33 D2                     XOR EDX,EDX
0051D748  3C 03                     CMP AL,0x3
0051D74A  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
0051D750  0F 95 C2                  SETNZ DL
0051D753  4A                        DEC EDX
0051D754  6A FF                     PUSH -0x1
0051D756  83 E2 05                  AND EDX,0x5
0051D759  6A FF                     PUSH -0x1
0051D75B  52                        PUSH EDX
0051D75C  6A FF                     PUSH -0x1
0051D75E  6A 01                     PUSH 0x1
0051D760  68 3A F3 80 00            PUSH 0x80f33a
0051D765  E8 06 44 1F 00            CALL 0x00711b70
0051D76A  EB 03                     JMP 0x0051d76f
LAB_0051d76c:
0051D76C  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
LAB_0051d76f:
0051D76F  6A 1E                     PUSH 0x1e
0051D771  57                        PUSH EDI
0051D772  8B CB                     MOV ECX,EBX
0051D774  E8 F7 40 EE FF            CALL 0x00401870
0051D779  8A 0D 4D 73 80 00         MOV CL,byte ptr [0x0080734d]
0051D77F  33 C0                     XOR EAX,EAX
0051D781  84 C9                     TEST CL,CL
0051D783  6A 01                     PUSH 0x1
0051D785  6A 00                     PUSH 0x0
0051D787  0F 95 C0                  SETNZ AL
0051D78A  50                        PUSH EAX
0051D78B  6A 01                     PUSH 0x1
0051D78D  6A 00                     PUSH 0x0
0051D78F  68 A8 3D 7C 00            PUSH 0x7c3da8
0051D794  E8 E3 7F EE FF            CALL 0x0040577c
0051D799  83 C4 08                  ADD ESP,0x8
0051D79C  50                        PUSH EAX
0051D79D  E8 5E 54 1D 00            CALL 0x006f2c00
0051D7A2  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
0051D7A8  83 C4 0C                  ADD ESP,0xc
0051D7AB  50                        PUSH EAX
0051D7AC  6A 01                     PUSH 0x1
0051D7AE  E8 2D 45 1D 00            CALL 0x006f1ce0
0051D7B3  8B 8B 18 02 00 00         MOV ECX,dword ptr [EBX + 0x218]
0051D7B9  8D 77 0A                  LEA ESI,[EDI + 0xa]
0051D7BC  50                        PUSH EAX
0051D7BD  6A 01                     PUSH 0x1
0051D7BF  56                        PUSH ESI
0051D7C0  6A 50                     PUSH 0x50
0051D7C2  51                        PUSH ECX
0051D7C3  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0051D7C6  E8 5E 5A EE FF            CALL 0x00403229
0051D7CB  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0051D7CE  83 C4 14                  ADD ESP,0x14
0051D7D1  B9 3D 01 00 00            MOV ECX,0x13d
0051D7D6  8B 42 04                  MOV EAX,dword ptr [EDX + 0x4]
0051D7D9  8B 93 18 02 00 00         MOV EDX,dword ptr [EBX + 0x218]
0051D7DF  2B C8                     SUB ECX,EAX
0051D7E1  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0051D7E4  6A 0F                     PUSH 0xf
0051D7E6  51                        PUSH ECX
0051D7E7  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
0051D7ED  83 C0 5F                  ADD EAX,0x5f
0051D7F0  56                        PUSH ESI
0051D7F1  50                        PUSH EAX
0051D7F2  6A 00                     PUSH 0x0
0051D7F4  52                        PUSH EDX
0051D7F5  E8 96 32 1F 00            CALL 0x00710a90
0051D7FA  8A 15 4E 87 80 00         MOV DL,byte ptr [0x0080874e]
0051D800  33 C0                     XOR EAX,EAX
0051D802  80 FA 03                  CMP DL,0x3
0051D805  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
0051D80B  0F 95 C0                  SETNZ AL
0051D80E  48                        DEC EAX
0051D80F  83 E0 05                  AND EAX,0x5
0051D812  50                        PUSH EAX
0051D813  6A FF                     PUSH -0x1
0051D815  6A 01                     PUSH 0x1
0051D817  51                        PUSH ECX
0051D818  68 93 5C 00 00            PUSH 0x5c93
0051D81D  E8 1E 29 19 00            CALL 0x006b0140
0051D822  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
0051D828  50                        PUSH EAX
0051D829  E8 92 41 1F 00            CALL 0x007119c0
0051D82E  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
0051D831  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0051D834  C7 45 D0 50 00 00 00      MOV dword ptr [EBP + -0x30],0x50
0051D83B  89 55 D8                  MOV dword ptr [EBP + -0x28],EDX
0051D83E  89 75 D4                  MOV dword ptr [EBP + -0x2c],ESI
0051D841  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
0051D844  8B 83 D7 01 00 00         MOV EAX,dword ptr [EBX + 0x1d7]
0051D84A  8D 55 D0                  LEA EDX,[EBP + -0x30]
0051D84D  52                        PUSH EDX
0051D84E  50                        PUSH EAX
0051D84F  89 4D DC                  MOV dword ptr [EBP + -0x24],ECX
0051D852  E8 69 09 19 00            CALL 0x006ae1c0
0051D857  8D 4D FC                  LEA ECX,[EBP + -0x4]
0051D85A  51                        PUSH ECX
0051D85B  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
0051D861  E8 7A 48 1D 00            CALL 0x006f20e0
0051D866  6A 0A                     PUSH 0xa
0051D868  8D 57 1E                  LEA EDX,[EDI + 0x1e]
0051D86B  8B CB                     MOV ECX,EBX
0051D86D  52                        PUSH EDX
0051D86E  E8 FD 3F EE FF            CALL 0x00401870
0051D873  B8 CD CC CC CC            MOV EAX,0xcccccccd
0051D878  F7 E7                     MUL EDI
0051D87A  C1 EA 03                  SHR EDX,0x3
0051D87D  42                        INC EDX
0051D87E  33 C0                     XOR EAX,EAX
0051D880  66 8B 83 AF 01 00 00      MOV AX,word ptr [EBX + 0x1af]
0051D887  8D 14 92                  LEA EDX,[EDX + EDX*0x4]
0051D88A  D1 E2                     SHL EDX,0x1
0051D88C  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
0051D88F  8D 84 10 E8 FE FF FF      LEA EAX,[EAX + EDX*0x1 + 0xfffffee8]
0051D896  85 C0                     TEST EAX,EAX
0051D898  7E 0F                     JLE 0x0051d8a9
0051D89A  33 C9                     XOR ECX,ECX
0051D89C  66 8B 8B B1 01 00 00      MOV CX,word ptr [EBX + 0x1b1]
0051D8A3  99                        CDQ
0051D8A4  F7 F9                     IDIV ECX
0051D8A6  40                        INC EAX
0051D8A7  EB 02                     JMP 0x0051d8ab
LAB_0051d8a9:
0051D8A9  33 C0                     XOR EAX,EAX
LAB_0051d8ab:
0051D8AB  50                        PUSH EAX
0051D8AC  8B CB                     MOV ECX,EBX
0051D8AE  E8 38 56 EE FF            CALL 0x00402eeb
0051D8B3  33 C0                     XOR EAX,EAX
0051D8B5  8B 8B 18 02 00 00         MOV ECX,dword ptr [EBX + 0x218]
0051D8BB  66 8B 83 AF 01 00 00      MOV AX,word ptr [EBX + 0x1af]
0051D8C2  BA 17 01 00 00            MOV EDX,0x117
0051D8C7  2B D0                     SUB EDX,EAX
0051D8C9  68 FF 00 00 00            PUSH 0xff
0051D8CE  52                        PUSH EDX
0051D8CF  8B 53 68                  MOV EDX,dword ptr [EBX + 0x68]
0051D8D2  68 9C 01 00 00            PUSH 0x19c
0051D8D7  6A 00                     PUSH 0x0
0051D8D9  6A 00                     PUSH 0x0
0051D8DB  6A 00                     PUSH 0x0
0051D8DD  83 C0 16                  ADD EAX,0x16
0051D8E0  51                        PUSH ECX
0051D8E1  50                        PUSH EAX
0051D8E2  6A 21                     PUSH 0x21
0051D8E4  6A 00                     PUSH 0x0
0051D8E6  52                        PUSH EDX
0051D8E7  E8 24 78 19 00            CALL 0x006b5110
0051D8EC  8B 43 44                  MOV EAX,dword ptr [EBX + 0x44]
0051D8EF  8B 4B 3C                  MOV ECX,dword ptr [EBX + 0x3c]
0051D8F2  8B 53 60                  MOV EDX,dword ptr [EBX + 0x60]
0051D8F5  50                        PUSH EAX
0051D8F6  A1 A8 75 80 00            MOV EAX,[0x008075a8]
0051D8FB  51                        PUSH ECX
0051D8FC  6A FF                     PUSH -0x1
0051D8FE  52                        PUSH EDX
0051D8FF  50                        PUSH EAX
0051D900  E8 3B 5D 19 00            CALL 0x006b3640
0051D905  8B 4D 8C                  MOV ECX,dword ptr [EBP + -0x74]
0051D908  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0051D90E  5F                        POP EDI
0051D90F  5E                        POP ESI
0051D910  5B                        POP EBX
0051D911  8B E5                     MOV ESP,EBP
0051D913  5D                        POP EBP
0051D914  C2 0C 00                  RET 0xc
LAB_0051d917:
0051D917  8B 55 8C                  MOV EDX,dword ptr [EBP + -0x74]
0051D91A  68 8C 3D 7C 00            PUSH 0x7c3d8c
0051D91F  68 CC 4C 7A 00            PUSH 0x7a4ccc
0051D924  57                        PUSH EDI
0051D925  56                        PUSH ESI
0051D926  68 73 09 00 00            PUSH 0x973
0051D92B  68 3C 38 7C 00            PUSH 0x7c383c
0051D930  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0051D936  E8 95 FB 18 00            CALL 0x006ad4d0
0051D93B  83 C4 18                  ADD ESP,0x18
0051D93E  85 C0                     TEST EAX,EAX
0051D940  74 01                     JZ 0x0051d943
0051D942  CC                        INT3
LAB_0051d943:
0051D943  68 73 09 00 00            PUSH 0x973
0051D948  68 3C 38 7C 00            PUSH 0x7c383c
0051D94D  56                        PUSH ESI
0051D94E  57                        PUSH EDI
0051D94F  E8 EC 84 18 00            CALL 0x006a5e40
0051D954  5F                        POP EDI
0051D955  5E                        POP ESI
0051D956  5B                        POP EBX
0051D957  8B E5                     MOV ESP,EBP
0051D959  5D                        POP EBP
0051D95A  C2 0C 00                  RET 0xc
