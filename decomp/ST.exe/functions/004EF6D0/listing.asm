FUN_004ef6d0:
004EF6D0  55                        PUSH EBP
004EF6D1  8B EC                     MOV EBP,ESP
004EF6D3  83 EC 54                  SUB ESP,0x54
004EF6D6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
004EF6DB  56                        PUSH ESI
004EF6DC  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
004EF6DF  57                        PUSH EDI
004EF6E0  8D 55 B0                  LEA EDX,[EBP + -0x50]
004EF6E3  8D 4D AC                  LEA ECX,[EBP + -0x54]
004EF6E6  6A 00                     PUSH 0x0
004EF6E8  52                        PUSH EDX
004EF6E9  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
004EF6EC  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004EF6F2  E8 F9 E0 23 00            CALL 0x0072d7f0
004EF6F7  8B F0                     MOV ESI,EAX
004EF6F9  83 C4 08                  ADD ESP,0x8
004EF6FC  85 F6                     TEST ESI,ESI
004EF6FE  0F 85 16 02 00 00         JNZ 0x004ef91a
004EF704  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
004EF707  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
004EF70A  8B 47 10                  MOV EAX,dword ptr [EDI + 0x10]
004EF70D  83 E8 02                  SUB EAX,0x2
004EF710  75 07                     JNZ 0x004ef719
004EF712  8B CE                     MOV ECX,ESI
004EF714  E8 8D 3B F1 FF            CALL 0x004032a6
LAB_004ef719:
004EF719  57                        PUSH EDI
004EF71A  8B CE                     MOV ECX,ESI
004EF71C  E8 B3 62 F1 FF            CALL 0x004059d4
004EF721  8B 47 10                  MOV EAX,dword ptr [EDI + 0x10]
004EF724  3D 02 B2 00 00            CMP EAX,0xb202
004EF729  0F 87 AD 00 00 00         JA 0x004ef7dc
004EF72F  0F 84 87 00 00 00         JZ 0x004ef7bc
004EF735  83 E8 02                  SUB EAX,0x2
004EF738  74 68                     JZ 0x004ef7a2
004EF73A  48                        DEC EAX
004EF73B  74 4B                     JZ 0x004ef788
004EF73D  2D FE B1 00 00            SUB EAX,0xb1fe
004EF742  0F 85 BF 01 00 00         JNZ 0x004ef907
004EF748  8A 86 78 02 00 00         MOV AL,byte ptr [ESI + 0x278]
004EF74E  68 AE 00 00 00            PUSH 0xae
004EF753  88 86 79 02 00 00         MOV byte ptr [ESI + 0x279],AL
004EF759  8B 4F 14                  MOV ECX,dword ptr [EDI + 0x14]
004EF75C  8A 11                     MOV DL,byte ptr [ECX]
004EF75E  FE CA                     DEC DL
004EF760  88 96 78 02 00 00         MOV byte ptr [ESI + 0x278],DL
004EF766  E8 C4 66 F1 FF            CALL 0x00405e2f
004EF76B  8B 06                     MOV EAX,dword ptr [ESI]
004EF76D  83 C4 04                  ADD ESP,0x4
004EF770  8B CE                     MOV ECX,ESI
004EF772  FF 50 1C                  CALL dword ptr [EAX + 0x1c]
004EF775  8B 55 AC                  MOV EDX,dword ptr [EBP + -0x54]
004EF778  33 C0                     XOR EAX,EAX
004EF77A  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
004EF780  5F                        POP EDI
004EF781  5E                        POP ESI
004EF782  8B E5                     MOV ESP,EBP
004EF784  5D                        POP EBP
004EF785  C2 04 00                  RET 0x4
LAB_004ef788:
004EF788  8B CE                     MOV ECX,ESI
004EF78A  E8 1F 56 F1 FF            CALL 0x00404dae
004EF78F  8B 55 AC                  MOV EDX,dword ptr [EBP + -0x54]
004EF792  33 C0                     XOR EAX,EAX
004EF794  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
004EF79A  5F                        POP EDI
004EF79B  5E                        POP ESI
004EF79C  8B E5                     MOV ESP,EBP
004EF79E  5D                        POP EBP
004EF79F  C2 04 00                  RET 0x4
LAB_004ef7a2:
004EF7A2  8B CE                     MOV ECX,ESI
004EF7A4  E8 FE 5C F1 FF            CALL 0x004054a7
004EF7A9  8B 55 AC                  MOV EDX,dword ptr [EBP + -0x54]
004EF7AC  33 C0                     XOR EAX,EAX
004EF7AE  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
004EF7B4  5F                        POP EDI
004EF7B5  5E                        POP ESI
004EF7B6  8B E5                     MOV ESP,EBP
004EF7B8  5D                        POP EBP
004EF7B9  C2 04 00                  RET 0x4
LAB_004ef7bc:
004EF7BC  68 7D 2E 40 00            PUSH 0x402e7d
004EF7C1  57                        PUSH EDI
004EF7C2  8B CE                     MOV ECX,ESI
004EF7C4  E8 1B 25 F1 FF            CALL 0x00401ce4
004EF7C9  8B 55 AC                  MOV EDX,dword ptr [EBP + -0x54]
004EF7CC  33 C0                     XOR EAX,EAX
004EF7CE  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
004EF7D4  5F                        POP EDI
004EF7D5  5E                        POP ESI
004EF7D6  8B E5                     MOV ESP,EBP
004EF7D8  5D                        POP EBP
004EF7D9  C2 04 00                  RET 0x4
LAB_004ef7dc:
004EF7DC  8D 88 61 3F FF FF         LEA ECX,[EAX + 0xffff3f61]
004EF7E2  83 F9 14                  CMP ECX,0x14
004EF7E5  0F 87 1C 01 00 00         JA 0x004ef907
004EF7EB  33 D2                     XOR EDX,EDX
004EF7ED  8A 91 78 F9 4E 00         MOV DL,byte ptr [ECX + 0x4ef978]
switchD_004ef7f3::switchD:
004EF7F3  FF 24 95 68 F9 4E 00      JMP dword ptr [EDX*0x4 + 0x4ef968]
switchD_004ef7f3::caseD_c09f:
004EF7FA  33 C9                     XOR ECX,ECX
004EF7FC  8A 8E 78 02 00 00         MOV CL,byte ptr [ESI + 0x278]
004EF802  8B 8C 8E 7A 02 00 00      MOV ECX,dword ptr [ESI + ECX*0x4 + 0x27a]
004EF809  85 C9                     TEST ECX,ECX
004EF80B  74 25                     JZ 0x004ef832
004EF80D  8B 96 99 01 00 00         MOV EDX,dword ptr [ESI + 0x199]
004EF813  8B 71 0C                  MOV ESI,dword ptr [ECX + 0xc]
004EF816  03 C2                     ADD EAX,EDX
004EF818  8D 90 61 3F FF FF         LEA EDX,[EAX + 0xffff3f61]
004EF81E  3B D6                     CMP EDX,ESI
004EF820  73 10                     JNC 0x004ef832
004EF822  05 61 3F FF FF            ADD EAX,0xffff3f61
004EF827  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
004EF82A  0F AF 41 08               IMUL EAX,dword ptr [ECX + 0x8]
004EF82E  03 C2                     ADD EAX,EDX
004EF830  EB 02                     JMP 0x004ef834
LAB_004ef832:
004EF832  33 C0                     XOR EAX,EAX
LAB_004ef834:
004EF834  85 C0                     TEST EAX,EAX
004EF836  0F 84 CB 00 00 00         JZ 0x004ef907
004EF83C  8A 48 08                  MOV CL,byte ptr [EAX + 0x8]
004EF83F  84 C9                     TEST CL,CL
004EF841  0F 84 C0 00 00 00         JZ 0x004ef907
004EF847  8B 10                     MOV EDX,dword ptr [EAX]
004EF849  8B 47 18                  MOV EAX,dword ptr [EDI + 0x18]
004EF84C  33 C9                     XOR ECX,ECX
004EF84E  6A 10                     PUSH 0x10
004EF850  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
004EF853  C6 45 F0 01               MOV byte ptr [EBP + -0x10],0x1
004EF857  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
004EF85A  89 55 F1                  MOV dword ptr [EBP + -0xf],EDX
004EF85D  66 89 4D F8               MOV word ptr [EBP + -0x8],CX
004EF861  85 C0                     TEST EAX,EAX
004EF863  88 4D FA                  MOV byte ptr [EBP + -0x6],CL
004EF866  74 14                     JZ 0x004ef87c
004EF868  FF 15 F0 BD 85 00         CALL dword ptr [0x0085bdf0]
004EF86E  25 00 80 00 00            AND EAX,0x8000
004EF873  F7 D8                     NEG EAX
004EF875  1B C0                     SBB EAX,EAX
004EF877  24 F7                     AND AL,0xf7
004EF879  48                        DEC EAX
004EF87A  EB 13                     JMP 0x004ef88f
LAB_004ef87c:
004EF87C  FF 15 F0 BD 85 00         CALL dword ptr [0x0085bdf0]
004EF882  25 00 80 00 00            AND EAX,0x8000
004EF887  F7 D8                     NEG EAX
004EF889  1B C0                     SBB EAX,EAX
004EF88B  83 E0 09                  AND EAX,0x9
004EF88E  40                        INC EAX
LAB_004ef88f:
004EF88F  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004EF895  66 89 45 F5               MOV word ptr [EBP + -0xb],AX
004EF899  6A FF                     PUSH -0x1
004EF89B  8D 45 F0                  LEA EAX,[EBP + -0x10]
004EF89E  6A 00                     PUSH 0x0
004EF8A0  50                        PUSH EAX
004EF8A1  6A 1E                     PUSH 0x1e
004EF8A3  C7 45 F7 FF FF FF FF      MOV dword ptr [EBP + -0x9],0xffffffff
004EF8AA  E8 84 43 F1 FF            CALL 0x00403c33
004EF8AF  68 AE 00 00 00            PUSH 0xae
004EF8B4  E8 76 65 F1 FF            CALL 0x00405e2f
004EF8B9  8B 55 AC                  MOV EDX,dword ptr [EBP + -0x54]
004EF8BC  83 C4 04                  ADD ESP,0x4
004EF8BF  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
004EF8C5  33 C0                     XOR EAX,EAX
004EF8C7  5F                        POP EDI
004EF8C8  5E                        POP ESI
004EF8C9  8B E5                     MOV ESP,EBP
004EF8CB  5D                        POP EBP
004EF8CC  C2 04 00                  RET 0x4
switchD_004ef7f3::caseD_c0a4:
004EF8CF  8B 4F 14                  MOV ECX,dword ptr [EDI + 0x14]
004EF8D2  89 8E 99 01 00 00         MOV dword ptr [ESI + 0x199],ECX
004EF8D8  8B CE                     MOV ECX,ESI
004EF8DA  E8 8B 43 F1 FF            CALL 0x00403c6a
004EF8DF  68 AE 00 00 00            PUSH 0xae
004EF8E4  E8 46 65 F1 FF            CALL 0x00405e2f
004EF8E9  8B 55 AC                  MOV EDX,dword ptr [EBP + -0x54]
004EF8EC  83 C4 04                  ADD ESP,0x4
004EF8EF  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
004EF8F5  33 C0                     XOR EAX,EAX
004EF8F7  5F                        POP EDI
004EF8F8  5E                        POP ESI
004EF8F9  8B E5                     MOV ESP,EBP
004EF8FB  5D                        POP EBP
004EF8FC  C2 04 00                  RET 0x4
switchD_004ef7f3::caseD_c0af:
004EF8FF  57                        PUSH EDI
004EF900  8B CE                     MOV ECX,ESI
004EF902  E8 E3 18 F1 FF            CALL 0x004011ea
switchD_004ef7f3::caseD_c0a5:
004EF907  8B 55 AC                  MOV EDX,dword ptr [EBP + -0x54]
004EF90A  33 C0                     XOR EAX,EAX
004EF90C  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
004EF912  5F                        POP EDI
004EF913  5E                        POP ESI
004EF914  8B E5                     MOV ESP,EBP
004EF916  5D                        POP EBP
004EF917  C2 04 00                  RET 0x4
LAB_004ef91a:
004EF91A  8B 45 AC                  MOV EAX,dword ptr [EBP + -0x54]
004EF91D  68 94 18 7C 00            PUSH 0x7c1894
004EF922  68 CC 4C 7A 00            PUSH 0x7a4ccc
004EF927  56                        PUSH ESI
004EF928  6A 00                     PUSH 0x0
004EF92A  68 EC 00 00 00            PUSH 0xec
004EF92F  68 B4 17 7C 00            PUSH 0x7c17b4
004EF934  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004EF939  E8 92 DB 1B 00            CALL 0x006ad4d0
004EF93E  83 C4 18                  ADD ESP,0x18
004EF941  85 C0                     TEST EAX,EAX
004EF943  74 01                     JZ 0x004ef946
004EF945  CC                        INT3
LAB_004ef946:
004EF946  68 EC 00 00 00            PUSH 0xec
004EF94B  68 B4 17 7C 00            PUSH 0x7c17b4
004EF950  6A 00                     PUSH 0x0
004EF952  56                        PUSH ESI
004EF953  E8 E8 64 1B 00            CALL 0x006a5e40
004EF958  5F                        POP EDI
004EF959  B8 FF FF 00 00            MOV EAX,0xffff
004EF95E  5E                        POP ESI
004EF95F  8B E5                     MOV ESP,EBP
004EF961  5D                        POP EBP
004EF962  C2 04 00                  RET 0x4
