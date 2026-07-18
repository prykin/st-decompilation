FUN_0058f680:
0058F680  55                        PUSH EBP
0058F681  8B EC                     MOV EBP,ESP
0058F683  83 EC 18                  SUB ESP,0x18
0058F686  53                        PUSH EBX
0058F687  56                        PUSH ESI
0058F688  57                        PUSH EDI
0058F689  8B F1                     MOV ESI,ECX
0058F68B  33 FF                     XOR EDI,EDI
0058F68D  33 DB                     XOR EBX,EBX
0058F68F  E8 06 2F E7 FF            CALL 0x0040259a
0058F694  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
0058F697  8B 86 3D 02 00 00         MOV EAX,dword ptr [ESI + 0x23d]
0058F69D  85 C0                     TEST EAX,EAX
0058F69F  0F 85 87 06 00 00         JNZ 0x0058fd2c
0058F6A5  0F BF 4E 47               MOVSX ECX,word ptr [ESI + 0x47]
0058F6A9  8B 86 7F 02 00 00         MOV EAX,dword ptr [ESI + 0x27f]
0058F6AF  3B C8                     CMP ECX,EAX
0058F6B1  7F 16                     JG 0x0058f6c9
0058F6B3  66 8B 46 6C               MOV AX,word ptr [ESI + 0x6c]
0058F6B7  66 3D E1 00               CMP AX,0xe1
0058F6BB  74 6B                     JZ 0x0058f728
0058F6BD  66 3D B4 00               CMP AX,0xb4
0058F6C1  74 65                     JZ 0x0058f728
0058F6C3  66 3D 87 00               CMP AX,0x87
0058F6C7  74 5F                     JZ 0x0058f728
LAB_0058f6c9:
0058F6C9  8B 86 87 02 00 00         MOV EAX,dword ptr [ESI + 0x287]
0058F6CF  3B C8                     CMP ECX,EAX
0058F6D1  7C 15                     JL 0x0058f6e8
0058F6D3  66 8B 46 6C               MOV AX,word ptr [ESI + 0x6c]
0058F6D7  66 3D 2D 00               CMP AX,0x2d
0058F6DB  74 4B                     JZ 0x0058f728
0058F6DD  66 85 C0                  TEST AX,AX
0058F6E0  74 46                     JZ 0x0058f728
0058F6E2  66 3D 3B 01               CMP AX,0x13b
0058F6E6  74 40                     JZ 0x0058f728
LAB_0058f6e8:
0058F6E8  0F BF 56 49               MOVSX EDX,word ptr [ESI + 0x49]
0058F6EC  3B 96 83 02 00 00         CMP EDX,dword ptr [ESI + 0x283]
0058F6F2  7F 16                     JG 0x0058f70a
0058F6F4  66 8B 46 6C               MOV AX,word ptr [ESI + 0x6c]
0058F6F8  66 3D 87 00               CMP AX,0x87
0058F6FC  74 2A                     JZ 0x0058f728
0058F6FE  66 3D 5A 00               CMP AX,0x5a
0058F702  74 24                     JZ 0x0058f728
0058F704  66 3D 2D 00               CMP AX,0x2d
0058F708  74 1E                     JZ 0x0058f728
LAB_0058f70a:
0058F70A  3B 96 8B 02 00 00         CMP EDX,dword ptr [ESI + 0x28b]
0058F710  7C 48                     JL 0x0058f75a
0058F712  66 8B 46 6C               MOV AX,word ptr [ESI + 0x6c]
0058F716  66 3D E1 00               CMP AX,0xe1
0058F71A  74 0C                     JZ 0x0058f728
0058F71C  66 3D 0E 01               CMP AX,0x10e
0058F720  74 06                     JZ 0x0058f728
0058F722  66 3D 3B 01               CMP AX,0x13b
0058F726  75 32                     JNZ 0x0058f75a
LAB_0058f728:
0058F728  0F BF C0                  MOVSX EAX,AX
0058F72B  83 C0 2D                  ADD EAX,0x2d
0058F72E  B9 68 01 00 00            MOV ECX,0x168
0058F733  99                        CDQ
0058F734  F7 F9                     IDIV ECX
0058F736  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0058F739  66 85 D2                  TEST DX,DX
0058F73C  66 89 10                  MOV word ptr [EAX],DX
0058F73F  7D 0B                     JGE 0x0058f74c
LAB_0058f741:
0058F741  66 81 00 68 01            ADD word ptr [EAX],0x168
0058F746  66 83 38 00               CMP word ptr [EAX],0x0
0058F74A  7C F5                     JL 0x0058f741
LAB_0058f74c:
0058F74C  5F                        POP EDI
0058F74D  5E                        POP ESI
0058F74E  B8 06 00 00 00            MOV EAX,0x6
0058F753  5B                        POP EBX
0058F754  8B E5                     MOV ESP,EBP
0058F756  5D                        POP EBP
0058F757  C2 10 00                  RET 0x10
LAB_0058f75a:
0058F75A  8D 41 FF                  LEA EAX,[ECX + -0x1]
0058F75D  8B 8E 7F 02 00 00         MOV ECX,dword ptr [ESI + 0x27f]
0058F763  3B C1                     CMP EAX,ECX
0058F765  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0058F768  7D 05                     JGE 0x0058f76f
0058F76A  8B C1                     MOV EAX,ECX
0058F76C  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
LAB_0058f76f:
0058F76F  8B 8E 83 02 00 00         MOV ECX,dword ptr [ESI + 0x283]
0058F775  8D 42 FF                  LEA EAX,[EDX + -0x1]
0058F778  3B C1                     CMP EAX,ECX
0058F77A  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0058F77D  7D 03                     JGE 0x0058f782
0058F77F  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
LAB_0058f782:
0058F782  0F BF 4E 47               MOVSX ECX,word ptr [ESI + 0x47]
0058F786  8B 86 87 02 00 00         MOV EAX,dword ptr [ESI + 0x287]
0058F78C  41                        INC ECX
0058F78D  3B C8                     CMP ECX,EAX
0058F78F  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0058F792  7E 05                     JLE 0x0058f799
0058F794  8B C8                     MOV ECX,EAX
0058F796  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
LAB_0058f799:
0058F799  8D 42 01                  LEA EAX,[EDX + 0x1]
0058F79C  8B 96 8B 02 00 00         MOV EDX,dword ptr [ESI + 0x28b]
0058F7A2  3B C2                     CMP EAX,EDX
0058F7A4  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0058F7A7  7E 03                     JLE 0x0058f7ac
0058F7A9  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
LAB_0058f7ac:
0058F7AC  0F BF 56 6C               MOVSX EDX,word ptr [ESI + 0x6c]
0058F7B0  B8 B7 60 0B B6            MOV EAX,0xb60b60b7
0058F7B5  F7 EA                     IMUL EDX
0058F7B7  0F BF 46 6C               MOVSX EAX,word ptr [ESI + 0x6c]
0058F7BB  03 D0                     ADD EDX,EAX
0058F7BD  C1 FA 05                  SAR EDX,0x5
0058F7C0  8B C2                     MOV EAX,EDX
0058F7C2  C1 E8 1F                  SHR EAX,0x1f
0058F7C5  03 D0                     ADD EDX,EAX
0058F7C7  83 FA 07                  CMP EDX,0x7
0058F7CA  0F 87 77 03 00 00         JA 0x0058fb47
switchD_0058f7d0::switchD:
0058F7D0  FF 24 95 74 FD 58 00      JMP dword ptr [EDX*0x4 + 0x58fd74]
switchD_0058f7d0::caseD_0:
0058F7D7  8B BE 87 02 00 00         MOV EDI,dword ptr [ESI + 0x287]
0058F7DD  85 C9                     TEST ECX,ECX
0058F7DF  7D 11                     JGE 0x0058f7f2
0058F7E1  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
0058F7E4  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
0058F7EA  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
0058F7F0  EB 0E                     JMP 0x0058f800
LAB_0058f7f2:
0058F7F2  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
0058F7F5  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
0058F7FB  05 39 30 00 00            ADD EAX,0x3039
LAB_0058f800:
0058F800  2B F9                     SUB EDI,ECX
0058F802  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
0058F805  47                        INC EDI
0058F806  33 D2                     XOR EDX,EDX
0058F808  C1 E8 10                  SHR EAX,0x10
0058F80B  F7 F7                     DIV EDI
0058F80D  8B FA                     MOV EDI,EDX
0058F80F  0F BF 56 47               MOVSX EDX,word ptr [ESI + 0x47]
0058F813  03 F9                     ADD EDI,ECX
0058F815  8B C7                     MOV EAX,EDI
0058F817  2B C2                     SUB EAX,EDX
0058F819  0F BF 56 49               MOVSX EDX,word ptr [ESI + 0x49]
0058F81D  8D 1C 02                  LEA EBX,[EDX + EAX*0x1]
0058F820  2B D0                     SUB EDX,EAX
0058F822  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
0058F825  79 2A                     JNS 0x0058f851
0058F827  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
0058F82A  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
0058F830  05 39 30 00 00            ADD EAX,0x3039
LAB_0058f835:
0058F835  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0058F838  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
0058F83B  2B DA                     SUB EBX,EDX
0058F83D  33 D2                     XOR EDX,EDX
0058F83F  43                        INC EBX
0058F840  C1 E8 10                  SHR EAX,0x10
0058F843  F7 F3                     DIV EBX
0058F845  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0058F848  8B DA                     MOV EBX,EDX
0058F84A  03 D8                     ADD EBX,EAX
0058F84C  E9 F6 02 00 00            JMP 0x0058fb47
LAB_0058f851:
0058F851  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
0058F854  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
0058F85A  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
0058F860  EB D3                     JMP 0x0058f835
switchD_0058f7d0::caseD_1:
0058F862  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
0058F865  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
0058F868  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
0058F86E  05 39 30 00 00            ADD EAX,0x3039
0058F873  8D 7A 01                  LEA EDI,[EDX + 0x1]
0058F876  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
0058F879  33 D2                     XOR EDX,EDX
0058F87B  C1 E8 10                  SHR EAX,0x10
0058F87E  F7 F7                     DIV EDI
0058F880  8B DA                     MOV EBX,EDX
0058F882  E9 86 02 00 00            JMP 0x0058fb0d
switchD_0058f7d0::caseD_2:
0058F887  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
0058F88A  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0058F88D  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
0058F893  05 39 30 00 00            ADD EAX,0x3039
0058F898  33 D2                     XOR EDX,EDX
0058F89A  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
0058F89D  C1 E8 10                  SHR EAX,0x10
0058F8A0  41                        INC ECX
0058F8A1  F7 F1                     DIV ECX
0058F8A3  0F BF 46 49               MOVSX EAX,word ptr [ESI + 0x49]
0058F8A7  8B DA                     MOV EBX,EDX
0058F8A9  0F BF 56 47               MOVSX EDX,word ptr [ESI + 0x47]
0058F8AD  2B C3                     SUB EAX,EBX
0058F8AF  8D 3C 02                  LEA EDI,[EDX + EAX*0x1]
0058F8B2  2B D0                     SUB EDX,EAX
0058F8B4  8B CA                     MOV ECX,EDX
0058F8B6  79 28                     JNS 0x0058f8e0
0058F8B8  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
0058F8BB  2B F9                     SUB EDI,ECX
0058F8BD  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
0058F8C3  47                        INC EDI
0058F8C4  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
0058F8CA  33 D2                     XOR EDX,EDX
0058F8CC  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
0058F8CF  C1 E8 10                  SHR EAX,0x10
0058F8D2  F7 F7                     DIV EDI
0058F8D4  8B FA                     MOV EDI,EDX
0058F8D6  03 F9                     ADD EDI,ECX
0058F8D8  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0058F8DB  E9 67 02 00 00            JMP 0x0058fb47
LAB_0058f8e0:
0058F8E0  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
0058F8E3  2B F9                     SUB EDI,ECX
0058F8E5  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
0058F8EB  05 39 30 00 00            ADD EAX,0x3039
0058F8F0  47                        INC EDI
0058F8F1  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
0058F8F4  33 D2                     XOR EDX,EDX
0058F8F6  C1 E8 10                  SHR EAX,0x10
0058F8F9  F7 F7                     DIV EDI
0058F8FB  8B FA                     MOV EDI,EDX
0058F8FD  03 F9                     ADD EDI,ECX
0058F8FF  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0058F902  E9 40 02 00 00            JMP 0x0058fb47
switchD_0058f7d0::caseD_3:
0058F907  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
0058F90A  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
0058F910  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
0058F916  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
0058F919  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
0058F91C  8D 7A 01                  LEA EDI,[EDX + 0x1]
0058F91F  33 D2                     XOR EDX,EDX
0058F921  C1 E8 10                  SHR EAX,0x10
0058F924  F7 F7                     DIV EDI
0058F926  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
0058F929  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
0058F92F  05 39 30 00 00            ADD EAX,0x3039
0058F934  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
0058F937  C1 E8 10                  SHR EAX,0x10
0058F93A  8B FA                     MOV EDI,EDX
0058F93C  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
0058F93F  8D 5A 01                  LEA EBX,[EDX + 0x1]
0058F942  33 D2                     XOR EDX,EDX
0058F944  F7 F3                     DIV EBX
0058F946  8B DA                     MOV EBX,EDX
0058F948  E9 FA 01 00 00            JMP 0x0058fb47
switchD_0058f7d0::caseD_4:
0058F94D  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
0058F950  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
0058F953  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
0058F959  05 39 30 00 00            ADD EAX,0x3039
0058F95E  33 D2                     XOR EDX,EDX
0058F960  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
0058F963  C1 E8 10                  SHR EAX,0x10
0058F966  41                        INC ECX
0058F967  F7 F1                     DIV ECX
0058F969  0F BF 46 47               MOVSX EAX,word ptr [ESI + 0x47]
0058F96D  8B FA                     MOV EDI,EDX
0058F96F  0F BF 56 49               MOVSX EDX,word ptr [ESI + 0x49]
0058F973  2B C7                     SUB EAX,EDI
0058F975  8D 1C 02                  LEA EBX,[EDX + EAX*0x1]
0058F978  2B D0                     SUB EDX,EAX
0058F97A  8B CA                     MOV ECX,EDX
0058F97C  79 28                     JNS 0x0058f9a6
0058F97E  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
0058F981  2B D9                     SUB EBX,ECX
0058F983  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
0058F989  43                        INC EBX
0058F98A  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
0058F990  33 D2                     XOR EDX,EDX
0058F992  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
0058F995  C1 E8 10                  SHR EAX,0x10
0058F998  F7 F3                     DIV EBX
0058F99A  8B DA                     MOV EBX,EDX
0058F99C  03 D9                     ADD EBX,ECX
0058F99E  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0058F9A1  E9 A1 01 00 00            JMP 0x0058fb47
LAB_0058f9a6:
0058F9A6  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
0058F9A9  2B D9                     SUB EBX,ECX
0058F9AB  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
0058F9B1  05 39 30 00 00            ADD EAX,0x3039
0058F9B6  43                        INC EBX
0058F9B7  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
0058F9BA  33 D2                     XOR EDX,EDX
0058F9BC  C1 E8 10                  SHR EAX,0x10
0058F9BF  F7 F3                     DIV EBX
0058F9C1  8B DA                     MOV EBX,EDX
0058F9C3  03 D9                     ADD EBX,ECX
0058F9C5  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0058F9C8  E9 7A 01 00 00            JMP 0x0058fb47
switchD_0058f7d0::caseD_5:
0058F9CD  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0058F9D0  8B BE 8B 02 00 00         MOV EDI,dword ptr [ESI + 0x28b]
0058F9D6  85 C0                     TEST EAX,EAX
0058F9D8  7D 11                     JGE 0x0058f9eb
0058F9DA  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
0058F9DD  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
0058F9E3  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
0058F9E9  EB 0E                     JMP 0x0058f9f9
LAB_0058f9eb:
0058F9EB  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
0058F9EE  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
0058F9F4  05 39 30 00 00            ADD EAX,0x3039
LAB_0058f9f9:
0058F9F9  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0058F9FC  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
0058F9FF  2B FA                     SUB EDI,EDX
0058FA01  33 D2                     XOR EDX,EDX
0058FA03  47                        INC EDI
0058FA04  C1 E8 10                  SHR EAX,0x10
0058FA07  F7 F7                     DIV EDI
0058FA09  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0058FA0C  8B DA                     MOV EBX,EDX
0058FA0E  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
0058FA11  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
0058FA17  03 D8                     ADD EBX,EAX
0058FA19  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
0058FA1F  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
0058FA22  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
0058FA25  8D 7A 01                  LEA EDI,[EDX + 0x1]
0058FA28  33 D2                     XOR EDX,EDX
0058FA2A  C1 E8 10                  SHR EAX,0x10
0058FA2D  F7 F7                     DIV EDI
0058FA2F  8B FA                     MOV EDI,EDX
0058FA31  E9 11 01 00 00            JMP 0x0058fb47
switchD_0058f7d0::caseD_6:
0058FA36  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0058FA39  8B BE 8B 02 00 00         MOV EDI,dword ptr [ESI + 0x28b]
0058FA3F  85 C0                     TEST EAX,EAX
0058FA41  7D 10                     JGE 0x0058fa53
0058FA43  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
0058FA46  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
0058FA4C  05 39 30 00 00            ADD EAX,0x3039
0058FA51  EB 0F                     JMP 0x0058fa62
LAB_0058fa53:
0058FA53  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
0058FA56  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
0058FA5C  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
LAB_0058fa62:
0058FA62  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0058FA65  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
0058FA68  2B FA                     SUB EDI,EDX
0058FA6A  33 D2                     XOR EDX,EDX
0058FA6C  47                        INC EDI
0058FA6D  C1 E8 10                  SHR EAX,0x10
0058FA70  F7 F7                     DIV EDI
0058FA72  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0058FA75  8B DA                     MOV EBX,EDX
0058FA77  0F BF 56 49               MOVSX EDX,word ptr [ESI + 0x49]
0058FA7B  03 D8                     ADD EBX,EAX
0058FA7D  8B C3                     MOV EAX,EBX
0058FA7F  2B C2                     SUB EAX,EDX
0058FA81  0F BF 56 47               MOVSX EDX,word ptr [ESI + 0x47]
0058FA85  8D 3C 02                  LEA EDI,[EDX + EAX*0x1]
0058FA88  2B D0                     SUB EDX,EAX
0058FA8A  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
0058FA8D  79 2A                     JNS 0x0058fab9
0058FA8F  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
0058FA92  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
0058FA98  05 39 30 00 00            ADD EAX,0x3039
LAB_0058fa9d:
0058FA9D  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0058FAA0  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
0058FAA3  2B FA                     SUB EDI,EDX
0058FAA5  33 D2                     XOR EDX,EDX
0058FAA7  47                        INC EDI
0058FAA8  C1 E8 10                  SHR EAX,0x10
0058FAAB  F7 F7                     DIV EDI
0058FAAD  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0058FAB0  8B FA                     MOV EDI,EDX
0058FAB2  03 F8                     ADD EDI,EAX
0058FAB4  E9 8E 00 00 00            JMP 0x0058fb47
LAB_0058fab9:
0058FAB9  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
0058FABC  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
0058FAC2  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
0058FAC8  EB D3                     JMP 0x0058fa9d
switchD_0058f7d0::caseD_7:
0058FACA  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0058FACD  8B BE 8B 02 00 00         MOV EDI,dword ptr [ESI + 0x28b]
0058FAD3  85 C0                     TEST EAX,EAX
0058FAD5  7D 10                     JGE 0x0058fae7
0058FAD7  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
0058FADA  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
0058FAE0  05 39 30 00 00            ADD EAX,0x3039
0058FAE5  EB 0F                     JMP 0x0058faf6
LAB_0058fae7:
0058FAE7  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
0058FAEA  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
0058FAF0  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
LAB_0058faf6:
0058FAF6  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0058FAF9  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
0058FAFC  2B FA                     SUB EDI,EDX
0058FAFE  33 D2                     XOR EDX,EDX
0058FB00  47                        INC EDI
0058FB01  C1 E8 10                  SHR EAX,0x10
0058FB04  F7 F7                     DIV EDI
0058FB06  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0058FB09  8B DA                     MOV EBX,EDX
0058FB0B  03 D8                     ADD EBX,EAX
LAB_0058fb0d:
0058FB0D  8B BE 87 02 00 00         MOV EDI,dword ptr [ESI + 0x287]
0058FB13  85 C9                     TEST ECX,ECX
0058FB15  7D 10                     JGE 0x0058fb27
0058FB17  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
0058FB1A  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
0058FB20  05 39 30 00 00            ADD EAX,0x3039
0058FB25  EB 0F                     JMP 0x0058fb36
LAB_0058fb27:
0058FB27  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
0058FB2A  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
0058FB30  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
LAB_0058fb36:
0058FB36  2B F9                     SUB EDI,ECX
0058FB38  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
0058FB3B  47                        INC EDI
0058FB3C  33 D2                     XOR EDX,EDX
0058FB3E  C1 E8 10                  SHR EAX,0x10
0058FB41  F7 F7                     DIV EDI
0058FB43  8B FA                     MOV EDI,EDX
0058FB45  03 F9                     ADD EDI,ECX
switchD_0058f7d0::default:
0058FB47  0F BF 46 47               MOVSX EAX,word ptr [ESI + 0x47]
0058FB4B  3B F8                     CMP EDI,EAX
0058FB4D  75 0C                     JNZ 0x0058fb5b
0058FB4F  0F BF 56 49               MOVSX EDX,word ptr [ESI + 0x49]
0058FB53  3B DA                     CMP EBX,EDX
0058FB55  0F 84 51 FC FF FF         JZ 0x0058f7ac
LAB_0058fb5b:
0058FB5B  85 FF                     TEST EDI,EDI
0058FB5D  7D 02                     JGE 0x0058fb61
0058FB5F  33 FF                     XOR EDI,EDI
LAB_0058fb61:
0058FB61  8B 86 87 02 00 00         MOV EAX,dword ptr [ESI + 0x287]
0058FB67  3B F8                     CMP EDI,EAX
0058FB69  7E 02                     JLE 0x0058fb6d
0058FB6B  8B F8                     MOV EDI,EAX
LAB_0058fb6d:
0058FB6D  85 DB                     TEST EBX,EBX
0058FB6F  7D 02                     JGE 0x0058fb73
0058FB71  33 DB                     XOR EBX,EBX
LAB_0058fb73:
0058FB73  8B 86 8B 02 00 00         MOV EAX,dword ptr [ESI + 0x28b]
0058FB79  3B D8                     CMP EBX,EAX
0058FB7B  7E 02                     JLE 0x0058fb7f
0058FB7D  8B D8                     MOV EBX,EAX
LAB_0058fb7f:
0058FB7F  8B 4E 1C                  MOV ECX,dword ptr [ESI + 0x1c]
0058FB82  33 D2                     XOR EDX,EDX
0058FB84  0F BF 46 4B               MOVSX EAX,word ptr [ESI + 0x4b]
0058FB88  69 C9 6D 4E C6 41         IMUL ECX,ECX,0x41c64e6d
0058FB8E  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0058FB91  8D 81 39 30 00 00         LEA EAX,[ECX + 0x3039]
0058FB97  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
0058FB9A  B9 05 00 00 00            MOV ECX,0x5
0058FB9F  C1 E8 10                  SHR EAX,0x10
0058FBA2  F7 F1                     DIV ECX
0058FBA4  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0058FBA7  8D 44 10 FE               LEA EAX,[EAX + EDX*0x1 + -0x2]
0058FBAB  3B C1                     CMP EAX,ECX
0058FBAD  7C 07                     JL 0x0058fbb6
0058FBAF  B8 04 00 00 00            MOV EAX,0x4
0058FBB4  EB 06                     JMP 0x0058fbbc
LAB_0058fbb6:
0058FBB6  85 C0                     TEST EAX,EAX
0058FBB8  7D 02                     JGE 0x0058fbbc
0058FBBA  33 C0                     XOR EAX,EAX
LAB_0058fbbc:
0058FBBC  8D 48 05                  LEA ECX,[EAX + 0x5]
0058FBBF  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
0058FBC2  3B C1                     CMP EAX,ECX
0058FBC4  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
0058FBC7  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0058FBCA  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0058FBCD  0F 8D 65 01 00 00         JGE 0x0058fd38
0058FBD3  C7 45 E8 02 00 00 00      MOV dword ptr [EBP + -0x18],0x2
LAB_0058fbda:
0058FBDA  83 F8 05                  CMP EAX,0x5
0058FBDD  7C 03                     JL 0x0058fbe2
0058FBDF  83 C0 FB                  ADD EAX,-0x5
LAB_0058fbe2:
0058FBE2  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_0058fbe5:
0058FBE5  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0058FBE8  51                        PUSH ECX
0058FBE9  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
0058FBEF  53                        PUSH EBX
0058FBF0  57                        PUSH EDI
0058FBF1  E8 45 51 E7 FF            CALL 0x00404d3b
0058FBF6  85 C0                     TEST EAX,EAX
0058FBF8  0F 84 C8 00 00 00         JZ 0x0058fcc6
0058FBFE  66 8B 0D 40 B2 7F 00      MOV CX,word ptr [0x007fb240]
0058FC05  66 85 FF                  TEST DI,DI
0058FC08  7C 54                     JL 0x0058fc5e
0058FC0A  66 3B F9                  CMP DI,CX
0058FC0D  7D 4F                     JGE 0x0058fc5e
0058FC0F  66 85 DB                  TEST BX,BX
0058FC12  7C 4A                     JL 0x0058fc5e
0058FC14  66 3B 1D 42 B2 7F 00      CMP BX,word ptr [0x007fb242]
0058FC1B  7D 41                     JGE 0x0058fc5e
0058FC1D  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0058FC20  66 85 C0                  TEST AX,AX
0058FC23  7C 3C                     JL 0x0058fc61
0058FC25  66 3B 05 44 B2 7F 00      CMP AX,word ptr [0x007fb244]
0058FC2C  7D 33                     JGE 0x0058fc61
0058FC2E  0F BF D0                  MOVSX EDX,AX
0058FC31  0F BF 05 46 B2 7F 00      MOVSX EAX,word ptr [0x007fb246]
0058FC38  0F AF D0                  IMUL EDX,EAX
0058FC3B  0F BF C3                  MOVSX EAX,BX
0058FC3E  0F BF C9                  MOVSX ECX,CX
0058FC41  0F AF C1                  IMUL EAX,ECX
0058FC44  8B 0D 48 B2 7F 00         MOV ECX,dword ptr [0x007fb248]
0058FC4A  03 D0                     ADD EDX,EAX
0058FC4C  0F BF C7                  MOVSX EAX,DI
0058FC4F  03 D0                     ADD EDX,EAX
0058FC51  83 3C D1 00               CMP dword ptr [ECX + EDX*0x8],0x0
0058FC55  75 6F                     JNZ 0x0058fcc6
0058FC57  66 8B 0D 40 B2 7F 00      MOV CX,word ptr [0x007fb240]
LAB_0058fc5e:
0058FC5E  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_0058fc61:
0058FC61  66 85 FF                  TEST DI,DI
0058FC64  0F 8C B0 00 00 00         JL 0x0058fd1a
0058FC6A  66 3B F9                  CMP DI,CX
0058FC6D  0F 8D A7 00 00 00         JGE 0x0058fd1a
0058FC73  66 85 DB                  TEST BX,BX
0058FC76  0F 8C 9E 00 00 00         JL 0x0058fd1a
0058FC7C  66 3B 1D 42 B2 7F 00      CMP BX,word ptr [0x007fb242]
0058FC83  0F 8D 91 00 00 00         JGE 0x0058fd1a
0058FC89  66 85 C0                  TEST AX,AX
0058FC8C  0F 8C 88 00 00 00         JL 0x0058fd1a
0058FC92  66 3B 05 44 B2 7F 00      CMP AX,word ptr [0x007fb244]
0058FC99  7D 7F                     JGE 0x0058fd1a
0058FC9B  0F BF D0                  MOVSX EDX,AX
0058FC9E  0F BF 05 46 B2 7F 00      MOVSX EAX,word ptr [0x007fb246]
0058FCA5  0F AF D0                  IMUL EDX,EAX
0058FCA8  0F BF C3                  MOVSX EAX,BX
0058FCAB  0F BF C9                  MOVSX ECX,CX
0058FCAE  0F AF C1                  IMUL EAX,ECX
0058FCB1  8B 0D 48 B2 7F 00         MOV ECX,dword ptr [0x007fb248]
0058FCB7  03 D0                     ADD EDX,EAX
0058FCB9  0F BF C7                  MOVSX EAX,DI
0058FCBC  03 D0                     ADD EDX,EAX
0058FCBE  8B 44 D1 04               MOV EAX,dword ptr [ECX + EDX*0x8 + 0x4]
0058FCC2  85 C0                     TEST EAX,EAX
0058FCC4  74 51                     JZ 0x0058fd17
LAB_0058fcc6:
0058FCC6  0F BF 56 47               MOVSX EDX,word ptr [ESI + 0x47]
0058FCCA  8B C7                     MOV EAX,EDI
0058FCCC  2B C2                     SUB EAX,EDX
0058FCCE  85 C0                     TEST EAX,EAX
0058FCD0  7E 08                     JLE 0x0058fcda
0058FCD2  4F                        DEC EDI
0058FCD3  78 29                     JS 0x0058fcfe
0058FCD5  E9 0B FF FF FF            JMP 0x0058fbe5
LAB_0058fcda:
0058FCDA  7D 06                     JGE 0x0058fce2
0058FCDC  47                        INC EDI
0058FCDD  E9 03 FF FF FF            JMP 0x0058fbe5
LAB_0058fce2:
0058FCE2  0F BF 4E 49               MOVSX ECX,word ptr [ESI + 0x49]
0058FCE6  8B C3                     MOV EAX,EBX
0058FCE8  2B C1                     SUB EAX,ECX
0058FCEA  85 C0                     TEST EAX,EAX
0058FCEC  7E 08                     JLE 0x0058fcf6
0058FCEE  4B                        DEC EBX
0058FCEF  78 0D                     JS 0x0058fcfe
0058FCF1  E9 EF FE FF FF            JMP 0x0058fbe5
LAB_0058fcf6:
0058FCF6  7D 06                     JGE 0x0058fcfe
0058FCF8  43                        INC EBX
0058FCF9  E9 E7 FE FF FF            JMP 0x0058fbe5
LAB_0058fcfe:
0058FCFE  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0058FD01  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0058FD04  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
0058FD07  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
0058FD0A  40                        INC EAX
0058FD0B  3B C1                     CMP EAX,ECX
0058FD0D  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0058FD10  7D 2D                     JGE 0x0058fd3f
0058FD12  E9 C3 FE FF FF            JMP 0x0058fbda
LAB_0058fd17:
0058FD17  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_0058fd1a:
0058FD1A  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0058FD1D  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0058FD20  66 89 3A                  MOV word ptr [EDX],DI
0058FD23  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0058FD26  66 89 19                  MOV word ptr [ECX],BX
0058FD29  66 89 02                  MOV word ptr [EDX],AX
LAB_0058fd2c:
0058FD2C  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0058FD2F  5F                        POP EDI
0058FD30  5E                        POP ESI
0058FD31  5B                        POP EBX
0058FD32  8B E5                     MOV ESP,EBP
0058FD34  5D                        POP EBP
0058FD35  C2 10 00                  RET 0x10
LAB_0058fd38:
0058FD38  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
0058FD3B  85 C9                     TEST ECX,ECX
0058FD3D  75 DB                     JNZ 0x0058fd1a
LAB_0058fd3f:
0058FD3F  0F BF 46 6C               MOVSX EAX,word ptr [ESI + 0x6c]
0058FD43  83 C0 2D                  ADD EAX,0x2d
0058FD46  B9 68 01 00 00            MOV ECX,0x168
0058FD4B  99                        CDQ
0058FD4C  F7 F9                     IDIV ECX
0058FD4E  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0058FD51  66 85 D2                  TEST DX,DX
0058FD54  66 89 10                  MOV word ptr [EAX],DX
0058FD57  7D 0B                     JGE 0x0058fd64
LAB_0058fd59:
0058FD59  66 81 00 68 01            ADD word ptr [EAX],0x168
0058FD5E  66 83 38 00               CMP word ptr [EAX],0x0
0058FD62  7C F5                     JL 0x0058fd59
LAB_0058fd64:
0058FD64  5F                        POP EDI
0058FD65  5E                        POP ESI
0058FD66  B8 06 00 00 00            MOV EAX,0x6
0058FD6B  5B                        POP EBX
0058FD6C  8B E5                     MOV ESP,EBP
0058FD6E  5D                        POP EBP
0058FD6F  C2 10 00                  RET 0x10
