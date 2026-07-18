FUN_00734240:
00734240  55                        PUSH EBP
00734241  8B EC                     MOV EBP,ESP
00734243  83 EC 20                  SUB ESP,0x20
00734246  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00734249  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0073424C  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
00734253  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00734256  8A 11                     MOV DL,byte ptr [ECX]
00734258  88 55 F8                  MOV byte ptr [EBP + -0x8],DL
0073425B  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0073425E  83 C0 01                  ADD EAX,0x1
00734261  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_00734264:
00734264  83 3D 8C 14 7F 00 01      CMP dword ptr [0x007f148c],0x1
0073426B  7E 19                     JLE 0x00734286
0073426D  6A 08                     PUSH 0x8
0073426F  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00734272  81 E1 FF 00 00 00         AND ECX,0xff
00734278  51                        PUSH ECX
00734279  E8 92 C3 FF FF            CALL 0x00730610
0073427E  83 C4 08                  ADD ESP,0x8
00734281  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
00734284  EB 1A                     JMP 0x007342a0
LAB_00734286:
00734286  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00734289  81 E2 FF 00 00 00         AND EDX,0xff
0073428F  A1 80 12 7F 00            MOV EAX,[0x007f1280]
00734294  33 C9                     XOR ECX,ECX
00734296  66 8B 0C 50               MOV CX,word ptr [EAX + EDX*0x2]
0073429A  83 E1 08                  AND ECX,0x8
0073429D  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
LAB_007342a0:
007342A0  83 7D E8 00               CMP dword ptr [EBP + -0x18],0x0
007342A4  74 13                     JZ 0x007342b9
007342A6  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
007342A9  8A 02                     MOV AL,byte ptr [EDX]
007342AB  88 45 F8                  MOV byte ptr [EBP + -0x8],AL
007342AE  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
007342B1  83 C1 01                  ADD ECX,0x1
007342B4  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
007342B7  EB AB                     JMP 0x00734264
LAB_007342b9:
007342B9  0F BE 55 F8               MOVSX EDX,byte ptr [EBP + -0x8]
007342BD  83 FA 2D                  CMP EDX,0x2d
007342C0  75 1B                     JNZ 0x007342dd
007342C2  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
007342C5  0C 02                     OR AL,0x2
007342C7  89 45 14                  MOV dword ptr [EBP + 0x14],EAX
007342CA  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
007342CD  8A 11                     MOV DL,byte ptr [ECX]
007342CF  88 55 F8                  MOV byte ptr [EBP + -0x8],DL
007342D2  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
007342D5  83 C0 01                  ADD EAX,0x1
007342D8  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
007342DB  EB 1A                     JMP 0x007342f7
LAB_007342dd:
007342DD  0F BE 4D F8               MOVSX ECX,byte ptr [EBP + -0x8]
007342E1  83 F9 2B                  CMP ECX,0x2b
007342E4  75 11                     JNZ 0x007342f7
007342E6  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
007342E9  8A 02                     MOV AL,byte ptr [EDX]
007342EB  88 45 F8                  MOV byte ptr [EBP + -0x8],AL
007342EE  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
007342F1  83 C1 01                  ADD ECX,0x1
007342F4  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_007342f7:
007342F7  83 7D 10 00               CMP dword ptr [EBP + 0x10],0x0
007342FB  7C 0C                     JL 0x00734309
007342FD  83 7D 10 01               CMP dword ptr [EBP + 0x10],0x1
00734301  74 06                     JZ 0x00734309
00734303  83 7D 10 24               CMP dword ptr [EBP + 0x10],0x24
00734307  7E 15                     JLE 0x0073431e
LAB_00734309:
00734309  83 7D 0C 00               CMP dword ptr [EBP + 0xc],0x0
0073430D  74 08                     JZ 0x00734317
0073430F  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00734312  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00734315  89 02                     MOV dword ptr [EDX],EAX
LAB_00734317:
00734317  33 C0                     XOR EAX,EAX
00734319  E9 4E 02 00 00            JMP 0x0073456c
LAB_0073431e:
0073431E  83 7D 10 00               CMP dword ptr [EBP + 0x10],0x0
00734322  75 38                     JNZ 0x0073435c
00734324  0F BE 4D F8               MOVSX ECX,byte ptr [EBP + -0x8]
00734328  83 F9 30                  CMP ECX,0x30
0073432B  74 09                     JZ 0x00734336
0073432D  C7 45 10 0A 00 00 00      MOV dword ptr [EBP + 0x10],0xa
00734334  EB 26                     JMP 0x0073435c
LAB_00734336:
00734336  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00734339  0F BE 02                  MOVSX EAX,byte ptr [EDX]
0073433C  83 F8 78                  CMP EAX,0x78
0073433F  74 0B                     JZ 0x0073434c
00734341  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00734344  0F BE 11                  MOVSX EDX,byte ptr [ECX]
00734347  83 FA 58                  CMP EDX,0x58
0073434A  75 09                     JNZ 0x00734355
LAB_0073434c:
0073434C  C7 45 10 10 00 00 00      MOV dword ptr [EBP + 0x10],0x10
00734353  EB 07                     JMP 0x0073435c
LAB_00734355:
00734355  C7 45 10 08 00 00 00      MOV dword ptr [EBP + 0x10],0x8
LAB_0073435c:
0073435C  83 7D 10 10               CMP dword ptr [EBP + 0x10],0x10
00734360  75 39                     JNZ 0x0073439b
00734362  0F BE 45 F8               MOVSX EAX,byte ptr [EBP + -0x8]
00734366  83 F8 30                  CMP EAX,0x30
00734369  75 30                     JNZ 0x0073439b
0073436B  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0073436E  0F BE 11                  MOVSX EDX,byte ptr [ECX]
00734371  83 FA 78                  CMP EDX,0x78
00734374  74 0B                     JZ 0x00734381
00734376  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00734379  0F BE 08                  MOVSX ECX,byte ptr [EAX]
0073437C  83 F9 58                  CMP ECX,0x58
0073437F  75 1A                     JNZ 0x0073439b
LAB_00734381:
00734381  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00734384  83 C2 01                  ADD EDX,0x1
00734387  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0073438A  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0073438D  8A 08                     MOV CL,byte ptr [EAX]
0073438F  88 4D F8                  MOV byte ptr [EBP + -0x8],CL
00734392  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00734395  83 C2 01                  ADD EDX,0x1
00734398  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
LAB_0073439b:
0073439B  83 C8 FF                  OR EAX,0xffffffff
0073439E  33 D2                     XOR EDX,EDX
007343A0  F7 75 10                  DIV dword ptr [EBP + 0x10]
007343A3  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
LAB_007343a6:
007343A6  83 3D 8C 14 7F 00 01      CMP dword ptr [0x007f148c],0x1
007343AD  7E 18                     JLE 0x007343c7
007343AF  6A 04                     PUSH 0x4
007343B1  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
007343B4  25 FF 00 00 00            AND EAX,0xff
007343B9  50                        PUSH EAX
007343BA  E8 51 C2 FF FF            CALL 0x00730610
007343BF  83 C4 08                  ADD ESP,0x8
007343C2  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
007343C5  EB 1B                     JMP 0x007343e2
LAB_007343c7:
007343C7  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
007343CA  81 E1 FF 00 00 00         AND ECX,0xff
007343D0  8B 15 80 12 7F 00         MOV EDX,dword ptr [0x007f1280]
007343D6  33 C0                     XOR EAX,EAX
007343D8  66 8B 04 4A               MOV AX,word ptr [EDX + ECX*0x2]
007343DC  83 E0 04                  AND EAX,0x4
007343DF  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
LAB_007343e2:
007343E2  83 7D E4 00               CMP dword ptr [EBP + -0x1c],0x0
007343E6  74 0C                     JZ 0x007343f4
007343E8  0F BE 4D F8               MOVSX ECX,byte ptr [EBP + -0x8]
007343EC  83 E9 30                  SUB ECX,0x30
007343EF  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
007343F2  EB 5F                     JMP 0x00734453
LAB_007343f4:
007343F4  83 3D 8C 14 7F 00 01      CMP dword ptr [0x007f148c],0x1
007343FB  7E 1C                     JLE 0x00734419
007343FD  68 03 01 00 00            PUSH 0x103
00734402  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00734405  81 E2 FF 00 00 00         AND EDX,0xff
0073440B  52                        PUSH EDX
0073440C  E8 FF C1 FF FF            CALL 0x00730610
00734411  83 C4 08                  ADD ESP,0x8
00734414  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
00734417  EB 1D                     JMP 0x00734436
LAB_00734419:
00734419  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0073441C  25 FF 00 00 00            AND EAX,0xff
00734421  8B 0D 80 12 7F 00         MOV ECX,dword ptr [0x007f1280]
00734427  33 D2                     XOR EDX,EDX
00734429  66 8B 14 41               MOV DX,word ptr [ECX + EAX*0x2]
0073442D  81 E2 03 01 00 00         AND EDX,0x103
00734433  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
LAB_00734436:
00734436  83 7D E0 00               CMP dword ptr [EBP + -0x20],0x0
0073443A  74 15                     JZ 0x00734451
0073443C  0F BE 45 F8               MOVSX EAX,byte ptr [EBP + -0x8]
00734440  50                        PUSH EAX
00734441  E8 EA FB FF FF            CALL 0x00734030
00734446  83 C4 04                  ADD ESP,0x4
00734449  83 E8 37                  SUB EAX,0x37
0073444C  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0073444F  EB 02                     JMP 0x00734453
LAB_00734451:
00734451  EB 5D                     JMP 0x007344b0
LAB_00734453:
00734453  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
00734456  3B 4D 10                  CMP ECX,dword ptr [EBP + 0x10]
00734459  72 02                     JC 0x0073445d
0073445B  EB 53                     JMP 0x007344b0
LAB_0073445d:
0073445D  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00734460  83 CA 08                  OR EDX,0x8
00734463  89 55 14                  MOV dword ptr [EBP + 0x14],EDX
00734466  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00734469  3B 45 F0                  CMP EAX,dword ptr [EBP + -0x10]
0073446C  72 15                     JC 0x00734483
0073446E  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00734471  3B 4D F0                  CMP ECX,dword ptr [EBP + -0x10]
00734474  75 1C                     JNZ 0x00734492
00734476  83 C8 FF                  OR EAX,0xffffffff
00734479  33 D2                     XOR EDX,EDX
0073447B  F7 75 10                  DIV dword ptr [EBP + 0x10]
0073447E  39 55 EC                  CMP dword ptr [EBP + -0x14],EDX
00734481  77 0F                     JA 0x00734492
LAB_00734483:
00734483  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00734486  0F AF 55 10               IMUL EDX,dword ptr [EBP + 0x10]
0073448A  03 55 EC                  ADD EDX,dword ptr [EBP + -0x14]
0073448D  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
00734490  EB 08                     JMP 0x0073449a
LAB_00734492:
00734492  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00734495  0C 04                     OR AL,0x4
00734497  89 45 14                  MOV dword ptr [EBP + 0x14],EAX
LAB_0073449a:
0073449A  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0073449D  8A 11                     MOV DL,byte ptr [ECX]
0073449F  88 55 F8                  MOV byte ptr [EBP + -0x8],DL
007344A2  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
007344A5  83 C0 01                  ADD EAX,0x1
007344A8  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
007344AB  E9 F6 FE FF FF            JMP 0x007343a6
LAB_007344b0:
007344B0  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
007344B3  83 E9 01                  SUB ECX,0x1
007344B6  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
007344B9  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
007344BC  83 E2 08                  AND EDX,0x8
007344BF  85 D2                     TEST EDX,EDX
007344C1  75 15                     JNZ 0x007344d8
007344C3  83 7D 0C 00               CMP dword ptr [EBP + 0xc],0x0
007344C7  74 06                     JZ 0x007344cf
007344C9  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
007344CC  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_007344cf:
007344CF  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
007344D6  EB 71                     JMP 0x00734549
LAB_007344d8:
007344D8  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
007344DB  83 E1 04                  AND ECX,0x4
007344DE  85 C9                     TEST ECX,ECX
007344E0  75 30                     JNZ 0x00734512
007344E2  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
007344E5  83 E2 01                  AND EDX,0x1
007344E8  85 D2                     TEST EDX,EDX
007344EA  75 5D                     JNZ 0x00734549
007344EC  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
007344EF  83 E0 02                  AND EAX,0x2
007344F2  85 C0                     TEST EAX,EAX
007344F4  74 09                     JZ 0x007344ff
007344F6  81 7D F4 00 00 00 80      CMP dword ptr [EBP + -0xc],0x80000000
007344FD  77 13                     JA 0x00734512
LAB_007344ff:
007344FF  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00734502  83 E1 02                  AND ECX,0x2
00734505  85 C9                     TEST ECX,ECX
00734507  75 40                     JNZ 0x00734549
00734509  81 7D F4 FF FF FF 7F      CMP dword ptr [EBP + -0xc],0x7fffffff
00734510  76 37                     JBE 0x00734549
LAB_00734512:
00734512  C7 05 48 71 85 00 22 00 00 00  MOV dword ptr [0x00857148],0x22
0073451C  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
0073451F  83 E2 01                  AND EDX,0x1
00734522  85 D2                     TEST EDX,EDX
00734524  74 09                     JZ 0x0073452f
00734526  C7 45 F4 FF FF FF FF      MOV dword ptr [EBP + -0xc],0xffffffff
0073452D  EB 1A                     JMP 0x00734549
LAB_0073452f:
0073452F  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00734532  83 E0 02                  AND EAX,0x2
00734535  85 C0                     TEST EAX,EAX
00734537  74 09                     JZ 0x00734542
00734539  C7 45 F4 00 00 00 80      MOV dword ptr [EBP + -0xc],0x80000000
00734540  EB 07                     JMP 0x00734549
LAB_00734542:
00734542  C7 45 F4 FF FF FF 7F      MOV dword ptr [EBP + -0xc],0x7fffffff
LAB_00734549:
00734549  83 7D 0C 00               CMP dword ptr [EBP + 0xc],0x0
0073454D  74 08                     JZ 0x00734557
0073454F  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00734552  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00734555  89 11                     MOV dword ptr [ECX],EDX
LAB_00734557:
00734557  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0073455A  83 E0 02                  AND EAX,0x2
0073455D  85 C0                     TEST EAX,EAX
0073455F  74 08                     JZ 0x00734569
00734561  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00734564  F7 D9                     NEG ECX
00734566  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
LAB_00734569:
00734569  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
LAB_0073456c:
0073456C  8B E5                     MOV ESP,EBP
0073456E  5D                        POP EBP
0073456F  C3                        RET
