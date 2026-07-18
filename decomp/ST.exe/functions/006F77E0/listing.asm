FUN_006f77e0:
006F77E0  55                        PUSH EBP
006F77E1  8B EC                     MOV EBP,ESP
006F77E3  83 EC 08                  SUB ESP,0x8
006F77E6  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
006F77E9  C7 05 00 70 85 00 01 00 00 00  MOV dword ptr [0x00857000],0x1
006F77F3  48                        DEC EAX
006F77F4  89 45 2C                  MOV dword ptr [EBP + 0x2c],EAX
006F77F7  0F 88 03 05 00 00         JS 0x006f7d00
006F77FD  53                        PUSH EBX
006F77FE  56                        PUSH ESI
006F77FF  57                        PUSH EDI
LAB_006f7800:
006F7800  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006F7803  8B 5D 30                  MOV EBX,dword ptr [EBP + 0x30]
006F7806  33 D2                     XOR EDX,EDX
006F7808  33 C9                     XOR ECX,ECX
006F780A  8A 10                     MOV DL,byte ptr [EAX]
006F780C  8A 0B                     MOV CL,byte ptr [EBX]
006F780E  40                        INC EAX
006F780F  43                        INC EBX
006F7810  85 C9                     TEST ECX,ECX
006F7812  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
006F7815  89 45 1C                  MOV dword ptr [EBP + 0x1c],EAX
006F7818  89 5D 30                  MOV dword ptr [EBP + 0x30],EBX
006F781B  74 4A                     JZ 0x006f7867
006F781D  85 D2                     TEST EDX,EDX
006F781F  74 05                     JZ 0x006f7826
006F7821  8B 55 38                  MOV EDX,dword ptr [EBP + 0x38]
006F7824  EB 06                     JMP 0x006f782c
LAB_006f7826:
006F7826  8B 45 34                  MOV EAX,dword ptr [EBP + 0x34]
006F7829  8D 50 FF                  LEA EDX,[EAX + -0x1]
LAB_006f782c:
006F782C  F6 C1 80                  TEST CL,0x80
006F782F  8B C1                     MOV EAX,ECX
006F7831  74 1A                     JZ 0x006f784d
006F7833  83 E0 3F                  AND EAX,0x3f
006F7836  F6 C1 40                  TEST CL,0x40
006F7839  74 03                     JZ 0x006f783e
006F783B  43                        INC EBX
006F783C  EB 02                     JMP 0x006f7840
LAB_006f783e:
006F783E  03 D8                     ADD EBX,EAX
LAB_006f7840:
006F7840  3B C2                     CMP EAX,EDX
006F7842  7F 19                     JG 0x006f785d
006F7844  33 C9                     XOR ECX,ECX
006F7846  2B D0                     SUB EDX,EAX
006F7848  8A 0B                     MOV CL,byte ptr [EBX]
006F784A  43                        INC EBX
006F784B  EB DF                     JMP 0x006f782c
LAB_006f784d:
006F784D  83 E0 7F                  AND EAX,0x7f
006F7850  3B C2                     CMP EAX,EDX
006F7852  7F 09                     JG 0x006f785d
006F7854  33 C9                     XOR ECX,ECX
006F7856  2B D0                     SUB EDX,EAX
006F7858  8A 0B                     MOV CL,byte ptr [EBX]
006F785A  43                        INC EBX
006F785B  EB CF                     JMP 0x006f782c
LAB_006f785d:
006F785D  2B C2                     SUB EAX,EDX
006F785F  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006F7862  89 5D 30                  MOV dword ptr [EBP + 0x30],EBX
006F7865  EB 03                     JMP 0x006f786a
LAB_006f7867:
006F7867  8B 45 34                  MOV EAX,dword ptr [EBP + 0x34]
LAB_006f786a:
006F786A  85 D2                     TEST EDX,EDX
006F786C  0F 84 68 04 00 00         JZ 0x006f7cda
006F7872  8B 7D 24                  MOV EDI,dword ptr [EBP + 0x24]
LAB_006f7875:
006F7875  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006F7878  F6 C2 80                  TEST DL,0x80
006F787B  8B F2                     MOV ESI,EDX
006F787D  74 1C                     JZ 0x006f789b
006F787F  83 E6 3F                  AND ESI,0x3f
006F7882  3B F7                     CMP ESI,EDI
006F7884  7F 30                     JG 0x006f78b6
006F7886  F6 C2 40                  TEST DL,0x40
006F7889  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006F788C  74 06                     JZ 0x006f7894
006F788E  42                        INC EDX
006F788F  89 55 1C                  MOV dword ptr [EBP + 0x1c],EDX
006F7892  EB 0E                     JMP 0x006f78a2
LAB_006f7894:
006F7894  03 D6                     ADD EDX,ESI
006F7896  89 55 1C                  MOV dword ptr [EBP + 0x1c],EDX
006F7899  EB 07                     JMP 0x006f78a2
LAB_006f789b:
006F789B  83 E6 7F                  AND ESI,0x7f
006F789E  3B F7                     CMP ESI,EDI
006F78A0  7F 14                     JG 0x006f78b6
LAB_006f78a2:
006F78A2  2B FE                     SUB EDI,ESI
006F78A4  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
006F78A7  33 D2                     XOR EDX,EDX
006F78A9  8A 16                     MOV DL,byte ptr [ESI]
006F78AB  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
006F78AE  8B D6                     MOV EDX,ESI
006F78B0  42                        INC EDX
006F78B1  89 55 1C                  MOV dword ptr [EBP + 0x1c],EDX
006F78B4  EB BF                     JMP 0x006f7875
LAB_006f78b6:
006F78B6  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006F78B9  2B F7                     SUB ESI,EDI
006F78BB  81 E2 C0 00 00 00         AND EDX,0xc0
006F78C1  80 FA 80                  CMP DL,0x80
006F78C4  75 03                     JNZ 0x006f78c9
006F78C6  01 7D 1C                  ADD dword ptr [EBP + 0x1c],EDI
LAB_006f78c9:
006F78C9  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006F78CC  3B F2                     CMP ESI,EDX
006F78CE  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
006F78D1  0F 8F 97 01 00 00         JG 0x006f7a6e
006F78D7  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
006F78DA  81 E7 80 00 00 00         AND EDI,0x80
LAB_006f78e0:
006F78E0  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006F78E3  2B D6                     SUB EDX,ESI
006F78E5  85 FF                     TEST EDI,EDI
006F78E7  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
006F78EA  0F 84 05 01 00 00         JZ 0x006f79f5
006F78F0  F6 45 FC 40               TEST byte ptr [EBP + -0x4],0x40
006F78F4  0F 84 83 00 00 00         JZ 0x006f797d
006F78FA  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
006F78FD  47                        INC EDI
006F78FE  4E                        DEC ESI
006F78FF  89 7D 1C                  MOV dword ptr [EBP + 0x1c],EDI
006F7902  0F 88 28 01 00 00         JS 0x006f7a30
006F7908  8B F9                     MOV EDI,ECX
006F790A  81 E7 80 00 00 00         AND EDI,0x80
006F7910  46                        INC ESI
006F7911  89 75 30                  MOV dword ptr [EBP + 0x30],ESI
LAB_006f7914:
006F7914  85 FF                     TEST EDI,EDI
006F7916  74 21                     JZ 0x006f7939
006F7918  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
006F791B  33 D2                     XOR EDX,EDX
006F791D  66 8B 16                  MOV DX,word ptr [ESI]
006F7920  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
006F7923  3B F2                     CMP ESI,EDX
006F7925  77 12                     JA 0x006f7939
006F7927  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
006F792A  33 D2                     XOR EDX,EDX
006F792C  8A 16                     MOV DL,byte ptr [ESI]
006F792E  8B 75 3C                  MOV ESI,dword ptr [EBP + 0x3c]
006F7931  8A 14 32                  MOV DL,byte ptr [EDX + ESI*0x1]
006F7934  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006F7937  88 16                     MOV byte ptr [ESI],DL
LAB_006f7939:
006F7939  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006F793C  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006F793F  83 C2 02                  ADD EDX,0x2
006F7942  46                        INC ESI
006F7943  48                        DEC EAX
006F7944  89 55 10                  MOV dword ptr [EBP + 0x10],EDX
006F7947  89 75 08                  MOV dword ptr [EBP + 0x8],ESI
006F794A  79 23                     JNS 0x006f796f
006F794C  33 C9                     XOR ECX,ECX
006F794E  8A 0B                     MOV CL,byte ptr [EBX]
006F7950  43                        INC EBX
006F7951  8B F9                     MOV EDI,ECX
006F7953  8B C1                     MOV EAX,ECX
006F7955  81 E7 80 00 00 00         AND EDI,0x80
006F795B  74 0F                     JZ 0x006f796c
006F795D  83 E0 3F                  AND EAX,0x3f
006F7960  F6 C1 40                  TEST CL,0x40
006F7963  74 03                     JZ 0x006f7968
006F7965  43                        INC EBX
006F7966  EB 07                     JMP 0x006f796f
LAB_006f7968:
006F7968  03 D8                     ADD EBX,EAX
006F796A  EB 03                     JMP 0x006f796f
LAB_006f796c:
006F796C  83 E0 7F                  AND EAX,0x7f
LAB_006f796f:
006F796F  8B 55 30                  MOV EDX,dword ptr [EBP + 0x30]
006F7972  4A                        DEC EDX
006F7973  89 55 30                  MOV dword ptr [EBP + 0x30],EDX
006F7976  75 9C                     JNZ 0x006f7914
006F7978  E9 B3 00 00 00            JMP 0x006f7a30
LAB_006f797d:
006F797D  4E                        DEC ESI
006F797E  0F 88 AC 00 00 00         JS 0x006f7a30
006F7984  8B F9                     MOV EDI,ECX
006F7986  81 E7 80 00 00 00         AND EDI,0x80
006F798C  46                        INC ESI
006F798D  89 75 30                  MOV dword ptr [EBP + 0x30],ESI
LAB_006f7990:
006F7990  85 FF                     TEST EDI,EDI
006F7992  74 19                     JZ 0x006f79ad
006F7994  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
006F7997  33 D2                     XOR EDX,EDX
006F7999  66 8B 16                  MOV DX,word ptr [ESI]
006F799C  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
006F799F  3B F2                     CMP ESI,EDX
006F79A1  77 0A                     JA 0x006f79ad
006F79A3  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006F79A6  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006F79A9  8A 12                     MOV DL,byte ptr [EDX]
006F79AB  88 16                     MOV byte ptr [ESI],DL
LAB_006f79ad:
006F79AD  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
006F79B0  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006F79B3  83 C6 02                  ADD ESI,0x2
006F79B6  42                        INC EDX
006F79B7  89 75 10                  MOV dword ptr [EBP + 0x10],ESI
006F79BA  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
006F79BD  46                        INC ESI
006F79BE  48                        DEC EAX
006F79BF  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
006F79C2  89 75 1C                  MOV dword ptr [EBP + 0x1c],ESI
006F79C5  79 23                     JNS 0x006f79ea
006F79C7  33 C9                     XOR ECX,ECX
006F79C9  8A 0B                     MOV CL,byte ptr [EBX]
006F79CB  43                        INC EBX
006F79CC  8B F9                     MOV EDI,ECX
006F79CE  8B C1                     MOV EAX,ECX
006F79D0  81 E7 80 00 00 00         AND EDI,0x80
006F79D6  74 0F                     JZ 0x006f79e7
006F79D8  83 E0 3F                  AND EAX,0x3f
006F79DB  F6 C1 40                  TEST CL,0x40
006F79DE  74 03                     JZ 0x006f79e3
006F79E0  43                        INC EBX
006F79E1  EB 07                     JMP 0x006f79ea
LAB_006f79e3:
006F79E3  03 D8                     ADD EBX,EAX
006F79E5  EB 03                     JMP 0x006f79ea
LAB_006f79e7:
006F79E7  83 E0 7F                  AND EAX,0x7f
LAB_006f79ea:
006F79EA  8B 55 30                  MOV EDX,dword ptr [EBP + 0x30]
006F79ED  4A                        DEC EDX
006F79EE  89 55 30                  MOV dword ptr [EBP + 0x30],EDX
006F79F1  75 9D                     JNZ 0x006f7990
006F79F3  EB 3B                     JMP 0x006f7a30
LAB_006f79f5:
006F79F5  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006F79F8  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006F79FB  03 FE                     ADD EDI,ESI
006F79FD  3B C6                     CMP EAX,ESI
006F79FF  8D 14 72                  LEA EDX,[EDX + ESI*0x2]
006F7A02  89 7D 08                  MOV dword ptr [EBP + 0x8],EDI
006F7A05  89 55 10                  MOV dword ptr [EBP + 0x10],EDX
006F7A08  7D 24                     JGE 0x006f7a2e
LAB_006f7a0a:
006F7A0A  33 C9                     XOR ECX,ECX
006F7A0C  2B F0                     SUB ESI,EAX
006F7A0E  8A 0B                     MOV CL,byte ptr [EBX]
006F7A10  43                        INC EBX
006F7A11  F6 C1 80                  TEST CL,0x80
006F7A14  8B C1                     MOV EAX,ECX
006F7A16  74 0F                     JZ 0x006f7a27
006F7A18  83 E0 3F                  AND EAX,0x3f
006F7A1B  F6 C1 40                  TEST CL,0x40
006F7A1E  74 03                     JZ 0x006f7a23
006F7A20  43                        INC EBX
006F7A21  EB 07                     JMP 0x006f7a2a
LAB_006f7a23:
006F7A23  03 D8                     ADD EBX,EAX
006F7A25  EB 03                     JMP 0x006f7a2a
LAB_006f7a27:
006F7A27  83 E0 7F                  AND EAX,0x7f
LAB_006f7a2a:
006F7A2A  3B C6                     CMP EAX,ESI
006F7A2C  7C DC                     JL 0x006f7a0a
LAB_006f7a2e:
006F7A2E  2B C6                     SUB EAX,ESI
LAB_006f7a30:
006F7A30  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006F7A33  85 D2                     TEST EDX,EDX
006F7A35  7E 32                     JLE 0x006f7a69
006F7A37  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
006F7A3A  33 D2                     XOR EDX,EDX
006F7A3C  8A 16                     MOV DL,byte ptr [ESI]
006F7A3E  8B FA                     MOV EDI,EDX
006F7A40  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
006F7A43  81 E7 80 00 00 00         AND EDI,0x80
006F7A49  46                        INC ESI
006F7A4A  89 75 1C                  MOV dword ptr [EBP + 0x1c],ESI
006F7A4D  8B F2                     MOV ESI,EDX
006F7A4F  85 FF                     TEST EDI,EDI
006F7A51  74 05                     JZ 0x006f7a58
006F7A53  83 E6 3F                  AND ESI,0x3f
006F7A56  EB 03                     JMP 0x006f7a5b
LAB_006f7a58:
006F7A58  83 E6 7F                  AND ESI,0x7f
LAB_006f7a5b:
006F7A5B  3B 75 F8                  CMP ESI,dword ptr [EBP + -0x8]
006F7A5E  0F 8E 7C FE FF FF         JLE 0x006f78e0
006F7A64  89 5D 30                  MOV dword ptr [EBP + 0x30],EBX
006F7A67  EB 05                     JMP 0x006f7a6e
LAB_006f7a69:
006F7A69  89 5D 30                  MOV dword ptr [EBP + 0x30],EBX
006F7A6C  33 F6                     XOR ESI,ESI
LAB_006f7a6e:
006F7A6E  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006F7A71  85 D2                     TEST EDX,EDX
006F7A73  7E 2B                     JLE 0x006f7aa0
006F7A75  85 C0                     TEST EAX,EAX
006F7A77  7F 27                     JG 0x006f7aa0
006F7A79  33 C9                     XOR ECX,ECX
006F7A7B  8A 0B                     MOV CL,byte ptr [EBX]
006F7A7D  43                        INC EBX
006F7A7E  F6 C1 80                  TEST CL,0x80
006F7A81  89 5D 30                  MOV dword ptr [EBP + 0x30],EBX
006F7A84  8B C1                     MOV EAX,ECX
006F7A86  74 15                     JZ 0x006f7a9d
006F7A88  83 E0 3F                  AND EAX,0x3f
006F7A8B  F6 C1 40                  TEST CL,0x40
006F7A8E  74 06                     JZ 0x006f7a96
006F7A90  43                        INC EBX
006F7A91  89 5D 30                  MOV dword ptr [EBP + 0x30],EBX
006F7A94  EB 0A                     JMP 0x006f7aa0
LAB_006f7a96:
006F7A96  03 D8                     ADD EBX,EAX
006F7A98  89 5D 30                  MOV dword ptr [EBP + 0x30],EBX
006F7A9B  EB 03                     JMP 0x006f7aa0
LAB_006f7a9d:
006F7A9D  83 E0 7F                  AND EAX,0x7f
LAB_006f7aa0:
006F7AA0  2B F2                     SUB ESI,EDX
006F7AA2  8A 55 FC                  MOV DL,byte ptr [EBP + -0x4]
006F7AA5  F6 C2 80                  TEST DL,0x80
006F7AA8  0F 84 31 01 00 00         JZ 0x006f7bdf
006F7AAE  F6 C2 40                  TEST DL,0x40
006F7AB1  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006F7AB4  0F 84 9F 00 00 00         JZ 0x006f7b59
006F7ABA  85 D2                     TEST EDX,EDX
006F7ABC  0F 8E 60 01 00 00         JLE 0x006f7c22
006F7AC2  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
006F7AC5  33 D2                     XOR EDX,EDX
006F7AC7  33 DB                     XOR EBX,EBX
006F7AC9  8A 17                     MOV DL,byte ptr [EDI]
006F7ACB  8B 7D 3C                  MOV EDI,dword ptr [EBP + 0x3c]
006F7ACE  8A 1C 3A                  MOV BL,byte ptr [EDX + EDI*0x1]
006F7AD1  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006F7AD4  42                        INC EDX
006F7AD5  89 55 1C                  MOV dword ptr [EBP + 0x1c],EDX
006F7AD8  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006F7ADB  4A                        DEC EDX
006F7ADC  0F 88 40 01 00 00         JS 0x006f7c22
006F7AE2  81 E1 80 00 00 00         AND ECX,0x80
006F7AE8  42                        INC EDX
006F7AE9  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
LAB_006f7aec:
006F7AEC  85 C9                     TEST ECX,ECX
006F7AEE  74 14                     JZ 0x006f7b04
006F7AF0  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
006F7AF3  33 D2                     XOR EDX,EDX
006F7AF5  66 8B 17                  MOV DX,word ptr [EDI]
006F7AF8  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
006F7AFB  3B FA                     CMP EDI,EDX
006F7AFD  77 05                     JA 0x006f7b04
006F7AFF  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006F7B02  88 1A                     MOV byte ptr [EDX],BL
LAB_006f7b04:
006F7B04  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006F7B07  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006F7B0A  83 C2 02                  ADD EDX,0x2
006F7B0D  47                        INC EDI
006F7B0E  48                        DEC EAX
006F7B0F  89 55 10                  MOV dword ptr [EBP + 0x10],EDX
006F7B12  89 7D 08                  MOV dword ptr [EBP + 0x8],EDI
006F7B15  79 34                     JNS 0x006f7b4b
006F7B17  8B 45 30                  MOV EAX,dword ptr [EBP + 0x30]
006F7B1A  33 D2                     XOR EDX,EDX
006F7B1C  8A 10                     MOV DL,byte ptr [EAX]
006F7B1E  40                        INC EAX
006F7B1F  8B CA                     MOV ECX,EDX
006F7B21  89 45 30                  MOV dword ptr [EBP + 0x30],EAX
006F7B24  81 E1 80 00 00 00         AND ECX,0x80
006F7B2A  74 1A                     JZ 0x006f7b46
006F7B2C  8B C2                     MOV EAX,EDX
006F7B2E  83 E0 3F                  AND EAX,0x3f
006F7B31  F6 C2 40                  TEST DL,0x40
006F7B34  8B 55 30                  MOV EDX,dword ptr [EBP + 0x30]
006F7B37  74 06                     JZ 0x006f7b3f
006F7B39  42                        INC EDX
006F7B3A  89 55 30                  MOV dword ptr [EBP + 0x30],EDX
006F7B3D  EB 0C                     JMP 0x006f7b4b
LAB_006f7b3f:
006F7B3F  03 D0                     ADD EDX,EAX
006F7B41  89 55 30                  MOV dword ptr [EBP + 0x30],EDX
006F7B44  EB 05                     JMP 0x006f7b4b
LAB_006f7b46:
006F7B46  83 E2 7F                  AND EDX,0x7f
006F7B49  8B C2                     MOV EAX,EDX
LAB_006f7b4b:
006F7B4B  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006F7B4E  4A                        DEC EDX
006F7B4F  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
006F7B52  75 98                     JNZ 0x006f7aec
006F7B54  E9 C9 00 00 00            JMP 0x006f7c22
LAB_006f7b59:
006F7B59  4A                        DEC EDX
006F7B5A  0F 88 C2 00 00 00         JS 0x006f7c22
006F7B60  8B 7D 30                  MOV EDI,dword ptr [EBP + 0x30]
006F7B63  81 E1 80 00 00 00         AND ECX,0x80
006F7B69  42                        INC EDX
006F7B6A  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
LAB_006f7b6d:
006F7B6D  85 C9                     TEST ECX,ECX
006F7B6F  74 21                     JZ 0x006f7b92
006F7B71  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
006F7B74  33 D2                     XOR EDX,EDX
006F7B76  66 8B 13                  MOV DX,word ptr [EBX]
006F7B79  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006F7B7C  3B DA                     CMP EBX,EDX
006F7B7E  77 12                     JA 0x006f7b92
006F7B80  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006F7B83  33 D2                     XOR EDX,EDX
006F7B85  8A 13                     MOV DL,byte ptr [EBX]
006F7B87  8B 5D 3C                  MOV EBX,dword ptr [EBP + 0x3c]
006F7B8A  8A 14 1A                  MOV DL,byte ptr [EDX + EBX*0x1]
006F7B8D  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
006F7B90  88 13                     MOV byte ptr [EBX],DL
LAB_006f7b92:
006F7B92  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
006F7B95  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006F7B98  83 C3 02                  ADD EBX,0x2
006F7B9B  42                        INC EDX
006F7B9C  89 5D 10                  MOV dword ptr [EBP + 0x10],EBX
006F7B9F  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006F7BA2  43                        INC EBX
006F7BA3  48                        DEC EAX
006F7BA4  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
006F7BA7  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
006F7BAA  79 25                     JNS 0x006f7bd1
006F7BAC  33 D2                     XOR EDX,EDX
006F7BAE  8A 17                     MOV DL,byte ptr [EDI]
006F7BB0  47                        INC EDI
006F7BB1  8B CA                     MOV ECX,EDX
006F7BB3  81 E1 80 00 00 00         AND ECX,0x80
006F7BB9  74 11                     JZ 0x006f7bcc
006F7BBB  8B C2                     MOV EAX,EDX
006F7BBD  83 E0 3F                  AND EAX,0x3f
006F7BC0  F6 C2 40                  TEST DL,0x40
006F7BC3  74 03                     JZ 0x006f7bc8
006F7BC5  47                        INC EDI
006F7BC6  EB 09                     JMP 0x006f7bd1
LAB_006f7bc8:
006F7BC8  03 F8                     ADD EDI,EAX
006F7BCA  EB 05                     JMP 0x006f7bd1
LAB_006f7bcc:
006F7BCC  83 E2 7F                  AND EDX,0x7f
006F7BCF  8B C2                     MOV EAX,EDX
LAB_006f7bd1:
006F7BD1  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006F7BD4  4A                        DEC EDX
006F7BD5  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
006F7BD8  75 93                     JNZ 0x006f7b6d
006F7BDA  89 7D 30                  MOV dword ptr [EBP + 0x30],EDI
006F7BDD  EB 43                     JMP 0x006f7c22
LAB_006f7bdf:
006F7BDF  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006F7BE2  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006F7BE5  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006F7BE8  03 FA                     ADD EDI,EDX
006F7BEA  8D 0C 51                  LEA ECX,[ECX + EDX*0x2]
006F7BED  3B C2                     CMP EAX,EDX
006F7BEF  89 7D 08                  MOV dword ptr [EBP + 0x8],EDI
006F7BF2  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006F7BF5  7D 29                     JGE 0x006f7c20
LAB_006f7bf7:
006F7BF7  33 C9                     XOR ECX,ECX
006F7BF9  2B D0                     SUB EDX,EAX
006F7BFB  8A 0B                     MOV CL,byte ptr [EBX]
006F7BFD  43                        INC EBX
006F7BFE  F6 C1 80                  TEST CL,0x80
006F7C01  74 11                     JZ 0x006f7c14
006F7C03  8B C1                     MOV EAX,ECX
006F7C05  83 E0 3F                  AND EAX,0x3f
006F7C08  F6 C1 40                  TEST CL,0x40
006F7C0B  74 03                     JZ 0x006f7c10
006F7C0D  43                        INC EBX
006F7C0E  EB 09                     JMP 0x006f7c19
LAB_006f7c10:
006F7C10  03 D8                     ADD EBX,EAX
006F7C12  EB 05                     JMP 0x006f7c19
LAB_006f7c14:
006F7C14  83 E1 7F                  AND ECX,0x7f
006F7C17  8B C1                     MOV EAX,ECX
LAB_006f7c19:
006F7C19  3B C2                     CMP EAX,EDX
006F7C1B  7C DA                     JL 0x006f7bf7
006F7C1D  89 5D 30                  MOV dword ptr [EBP + 0x30],EBX
LAB_006f7c20:
006F7C20  2B C2                     SUB EAX,EDX
LAB_006f7c22:
006F7C22  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006F7C25  8B 5D 24                  MOV EBX,dword ptr [EBP + 0x24]
006F7C28  8B 7D 28                  MOV EDI,dword ptr [EBP + 0x28]
006F7C2B  2B CB                     SUB ECX,EBX
006F7C2D  2B CF                     SUB ECX,EDI
006F7C2F  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
006F7C32  3B F1                     CMP ESI,ECX
006F7C34  7D 35                     JGE 0x006f7c6b
LAB_006f7c36:
006F7C36  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006F7C39  2B CE                     SUB ECX,ESI
006F7C3B  81 E2 C0 00 00 00         AND EDX,0xc0
006F7C41  80 FA 80                  CMP DL,0x80
006F7C44  75 02                     JNZ 0x006f7c48
006F7C46  03 FE                     ADD EDI,ESI
LAB_006f7c48:
006F7C48  33 D2                     XOR EDX,EDX
006F7C4A  8A 17                     MOV DL,byte ptr [EDI]
006F7C4C  8B DA                     MOV EBX,EDX
006F7C4E  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
006F7C51  80 E3 80                  AND BL,0x80
006F7C54  47                        INC EDI
006F7C55  84 DB                     TEST BL,BL
006F7C57  8B F2                     MOV ESI,EDX
006F7C59  74 09                     JZ 0x006f7c64
006F7C5B  83 E6 3F                  AND ESI,0x3f
006F7C5E  F6 C2 40                  TEST DL,0x40
006F7C61  74 01                     JZ 0x006f7c64
006F7C63  47                        INC EDI
LAB_006f7c64:
006F7C64  3B F1                     CMP ESI,ECX
006F7C66  7C CE                     JL 0x006f7c36
006F7C68  89 7D 1C                  MOV dword ptr [EBP + 0x1c],EDI
LAB_006f7c6b:
006F7C6B  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006F7C6E  81 E2 C0 00 00 00         AND EDX,0xc0
006F7C74  80 FA 80                  CMP DL,0x80
006F7C77  75 05                     JNZ 0x006f7c7e
006F7C79  03 F9                     ADD EDI,ECX
006F7C7B  89 7D 1C                  MOV dword ptr [EBP + 0x1c],EDI
LAB_006f7c7e:
006F7C7E  8B 55 34                  MOV EDX,dword ptr [EBP + 0x34]
006F7C81  8B 7D 28                  MOV EDI,dword ptr [EBP + 0x28]
006F7C84  8B 75 38                  MOV ESI,dword ptr [EBP + 0x38]
006F7C87  2B D7                     SUB EDX,EDI
006F7C89  2B D6                     SUB EDX,ESI
006F7C8B  3B C2                     CMP EAX,EDX
006F7C8D  7D 2C                     JGE 0x006f7cbb
006F7C8F  8B 75 30                  MOV ESI,dword ptr [EBP + 0x30]
LAB_006f7c92:
006F7C92  33 C9                     XOR ECX,ECX
006F7C94  2B D0                     SUB EDX,EAX
006F7C96  8A 0E                     MOV CL,byte ptr [ESI]
006F7C98  46                        INC ESI
006F7C99  F6 C1 80                  TEST CL,0x80
006F7C9C  74 11                     JZ 0x006f7caf
006F7C9E  8B C1                     MOV EAX,ECX
006F7CA0  83 E0 3F                  AND EAX,0x3f
006F7CA3  F6 C1 40                  TEST CL,0x40
006F7CA6  74 03                     JZ 0x006f7cab
006F7CA8  46                        INC ESI
006F7CA9  EB 09                     JMP 0x006f7cb4
LAB_006f7cab:
006F7CAB  03 F0                     ADD ESI,EAX
006F7CAD  EB 05                     JMP 0x006f7cb4
LAB_006f7caf:
006F7CAF  83 E1 7F                  AND ECX,0x7f
006F7CB2  8B C1                     MOV EAX,ECX
LAB_006f7cb4:
006F7CB4  3B C2                     CMP EAX,EDX
006F7CB6  7C DA                     JL 0x006f7c92
006F7CB8  89 75 30                  MOV dword ptr [EBP + 0x30],ESI
LAB_006f7cbb:
006F7CBB  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006F7CBE  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006F7CC1  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006F7CC4  8D 04 3F                  LEA EAX,[EDI + EDI*0x1]
006F7CC7  2B D7                     SUB EDX,EDI
006F7CC9  2B C8                     SUB ECX,EAX
006F7CCB  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006F7CCE  03 F2                     ADD ESI,EDX
006F7CD0  03 C1                     ADD EAX,ECX
006F7CD2  89 75 08                  MOV dword ptr [EBP + 0x8],ESI
006F7CD5  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
006F7CD8  EB 16                     JMP 0x006f7cf0
LAB_006f7cda:
006F7CDA  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006F7CDD  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006F7CE0  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006F7CE3  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006F7CE6  03 F2                     ADD ESI,EDX
006F7CE8  03 C8                     ADD ECX,EAX
006F7CEA  89 75 08                  MOV dword ptr [EBP + 0x8],ESI
006F7CED  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
LAB_006f7cf0:
006F7CF0  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
006F7CF3  48                        DEC EAX
006F7CF4  89 45 2C                  MOV dword ptr [EBP + 0x2c],EAX
006F7CF7  0F 89 03 FB FF FF         JNS 0x006f7800
006F7CFD  5F                        POP EDI
006F7CFE  5E                        POP ESI
006F7CFF  5B                        POP EBX
LAB_006f7d00:
006F7D00  8B E5                     MOV ESP,EBP
006F7D02  5D                        POP EBP
006F7D03  C2 38 00                  RET 0x38
