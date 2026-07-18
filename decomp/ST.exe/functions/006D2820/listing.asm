FUN_006d2820:
006D2820  55                        PUSH EBP
006D2821  8B EC                     MOV EBP,ESP
006D2823  83 EC 08                  SUB ESP,0x8
006D2826  53                        PUSH EBX
006D2827  56                        PUSH ESI
006D2828  8B 75 28                  MOV ESI,dword ptr [EBP + 0x28]
006D282B  57                        PUSH EDI
006D282C  85 F6                     TEST ESI,ESI
006D282E  74 16                     JZ 0x006d2846
006D2830  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
006D2833  8B 4D 30                  MOV ECX,dword ptr [EBP + 0x30]
006D2836  0F AF 45 34               IMUL EAX,dword ptr [EBP + 0x34]
006D283A  C1 F9 03                  SAR ECX,0x3
006D283D  03 CE                     ADD ECX,ESI
006D283F  03 C8                     ADD ECX,EAX
006D2841  89 4D 28                  MOV dword ptr [EBP + 0x28],ECX
006D2844  8B F1                     MOV ESI,ECX
LAB_006d2846:
006D2846  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006D2849  85 C0                     TEST EAX,EAX
006D284B  7E 0E                     JLE 0x006d285b
006D284D  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
006D2850  50                        PUSH EAX
006D2851  57                        PUSH EDI
006D2852  E8 B9 D5 FF FF            CALL 0x006cfe10
006D2857  8B D8                     MOV EBX,EAX
006D2859  EB 0F                     JMP 0x006d286a
LAB_006d285b:
006D285B  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
006D285E  8A 57 0D                  MOV DL,byte ptr [EDI + 0xd]
006D2861  D1 EA                     SHR EDX,0x1
006D2863  83 E2 0E                  AND EDX,0xe
006D2866  8D 5C 3A 16               LEA EBX,[EDX + EDI*0x1 + 0x16]
LAB_006d286a:
006D286A  0F BF 4F 12               MOVSX ECX,word ptr [EDI + 0x12]
006D286E  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006D2871  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006D2874  3B C1                     CMP EAX,ECX
006D2876  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006D2879  0F 85 6F 02 00 00         JNZ 0x006d2aee
006D287F  85 D2                     TEST EDX,EDX
006D2881  75 46                     JNZ 0x006d28c9
006D2883  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006D2886  85 F6                     TEST ESI,ESI
006D2888  51                        PUSH ECX
006D2889  50                        PUSH EAX
006D288A  75 17                     JNZ 0x006d28a3
006D288C  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006D288F  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006D2892  53                        PUSH EBX
006D2893  52                        PUSH EDX
006D2894  50                        PUSH EAX
006D2895  E8 46 FD FF FF            CALL 0x006d25e0
006D289A  5F                        POP EDI
006D289B  5E                        POP ESI
006D289C  5B                        POP EBX
006D289D  8B E5                     MOV ESP,EBP
006D289F  5D                        POP EBP
006D28A0  C2 30 00                  RET 0x30
LAB_006d28a3:
006D28A3  8B 45 30                  MOV EAX,dword ptr [EBP + 0x30]
006D28A6  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
006D28A9  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006D28AC  83 E0 07                  AND EAX,0x7
006D28AF  50                        PUSH EAX
006D28B0  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006D28B3  52                        PUSH EDX
006D28B4  56                        PUSH ESI
006D28B5  53                        PUSH EBX
006D28B6  50                        PUSH EAX
006D28B7  51                        PUSH ECX
006D28B8  E8 A3 7D 00 00            CALL 0x006da660
006D28BD  83 C4 20                  ADD ESP,0x20
006D28C0  5F                        POP EDI
006D28C1  5E                        POP ESI
006D28C2  5B                        POP EBX
006D28C3  8B E5                     MOV ESP,EBP
006D28C5  5D                        POP EBP
006D28C6  C2 30 00                  RET 0x30
LAB_006d28c9:
006D28C9  85 F6                     TEST ESI,ESI
006D28CB  0F 85 CF 00 00 00         JNZ 0x006d29a0
006D28D1  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
006D28D4  48                        DEC EAX
006D28D5  0F 88 0E 0A 00 00         JS 0x006d32e9
006D28DB  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006D28DE  40                        INC EAX
006D28DF  89 45 28                  MOV dword ptr [EBP + 0x28],EAX
LAB_006d28e2:
006D28E2  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
006D28E5  33 C0                     XOR EAX,EAX
006D28E7  8A 03                     MOV AL,byte ptr [EBX]
006D28E9  43                        INC EBX
006D28EA  85 C0                     TEST EAX,EAX
006D28EC  0F 84 92 00 00 00         JZ 0x006d2984
LAB_006d28f2:
006D28F2  A8 80                     TEST AL,0x80
006D28F4  74 65                     JZ 0x006d295b
006D28F6  8B C8                     MOV ECX,EAX
006D28F8  83 E1 3F                  AND ECX,0x3f
006D28FB  2B F1                     SUB ESI,ECX
006D28FD  A8 40                     TEST AL,0x40
006D28FF  89 75 18                  MOV dword ptr [EBP + 0x18],ESI
006D2902  74 3F                     JZ 0x006d2943
006D2904  33 C0                     XOR EAX,EAX
006D2906  8A 03                     MOV AL,byte ptr [EBX]
006D2908  8B F0                     MOV ESI,EAX
006D290A  33 C0                     XOR EAX,EAX
006D290C  43                        INC EBX
006D290D  49                        DEC ECX
006D290E  8A 04 16                  MOV AL,byte ptr [ESI + EDX*0x1]
006D2911  78 54                     JS 0x006d2967
006D2913  8A D0                     MOV DL,AL
006D2915  41                        INC ECX
006D2916  8A F2                     MOV DH,DL
006D2918  89 4D 20                  MOV dword ptr [EBP + 0x20],ECX
006D291B  8B C2                     MOV EAX,EDX
006D291D  8B F1                     MOV ESI,ECX
006D291F  C1 E0 10                  SHL EAX,0x10
006D2922  66 8B C2                  MOV AX,DX
006D2925  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006D2928  C1 E9 02                  SHR ECX,0x2
006D292B  F3 AB                     STOSD.REP ES:EDI
006D292D  8B CE                     MOV ECX,ESI
006D292F  83 E1 03                  AND ECX,0x3
006D2932  F3 AA                     STOSB.REP ES:EDI
006D2934  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006D2937  8B C6                     MOV EAX,ESI
006D2939  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
006D293C  03 F8                     ADD EDI,EAX
006D293E  89 7D 08                  MOV dword ptr [EBP + 0x8],EDI
006D2941  EB 27                     JMP 0x006d296a
LAB_006d2943:
006D2943  49                        DEC ECX
006D2944  78 24                     JS 0x006d296a
006D2946  41                        INC ECX
LAB_006d2947:
006D2947  33 C0                     XOR EAX,EAX
006D2949  47                        INC EDI
006D294A  8A 03                     MOV AL,byte ptr [EBX]
006D294C  43                        INC EBX
006D294D  49                        DEC ECX
006D294E  8A 04 10                  MOV AL,byte ptr [EAX + EDX*0x1]
006D2951  88 47 FF                  MOV byte ptr [EDI + -0x1],AL
006D2954  75 F1                     JNZ 0x006d2947
006D2956  89 7D 08                  MOV dword ptr [EBP + 0x8],EDI
006D2959  EB 0F                     JMP 0x006d296a
LAB_006d295b:
006D295B  83 E0 7F                  AND EAX,0x7f
006D295E  2B F0                     SUB ESI,EAX
006D2960  03 F8                     ADD EDI,EAX
006D2962  89 7D 08                  MOV dword ptr [EBP + 0x8],EDI
006D2965  EB 03                     JMP 0x006d296a
LAB_006d2967:
006D2967  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
LAB_006d296a:
006D296A  85 F6                     TEST ESI,ESI
006D296C  7E 0A                     JLE 0x006d2978
006D296E  33 C0                     XOR EAX,EAX
006D2970  8A 03                     MOV AL,byte ptr [EBX]
006D2972  43                        INC EBX
006D2973  E9 7A FF FF FF            JMP 0x006d28f2
LAB_006d2978:
006D2978  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006D297B  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
006D297E  2B CE                     SUB ECX,ESI
006D2980  03 F9                     ADD EDI,ECX
006D2982  EB 03                     JMP 0x006d2987
LAB_006d2984:
006D2984  03 7D 0C                  ADD EDI,dword ptr [EBP + 0xc]
LAB_006d2987:
006D2987  8B 45 28                  MOV EAX,dword ptr [EBP + 0x28]
006D298A  89 7D 08                  MOV dword ptr [EBP + 0x8],EDI
006D298D  48                        DEC EAX
006D298E  89 45 28                  MOV dword ptr [EBP + 0x28],EAX
006D2991  0F 85 4B FF FF FF         JNZ 0x006d28e2
006D2997  5F                        POP EDI
006D2998  5E                        POP ESI
006D2999  5B                        POP EBX
006D299A  8B E5                     MOV ESP,EBP
006D299C  5D                        POP EBP
006D299D  C2 30 00                  RET 0x30
LAB_006d29a0:
006D29A0  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
006D29A3  4A                        DEC EDX
006D29A4  0F 88 3F 09 00 00         JS 0x006d32e9
006D29AA  8B 4D 30                  MOV ECX,dword ptr [EBP + 0x30]
006D29AD  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006D29B0  83 E1 07                  AND ECX,0x7
006D29B3  B8 80 00 00 00            MOV EAX,0x80
006D29B8  D3 F8                     SAR EAX,CL
006D29BA  42                        INC EDX
006D29BB  89 55 20                  MOV dword ptr [EBP + 0x20],EDX
006D29BE  89 45 14                  MOV dword ptr [EBP + 0x14],EAX
006D29C1  EB 03                     JMP 0x006d29c6
LAB_006d29c3:
006D29C3  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
LAB_006d29c6:
006D29C6  8A C8                     MOV CL,AL
006D29C8  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006D29CB  89 45 18                  MOV dword ptr [EBP + 0x18],EAX
006D29CE  33 C0                     XOR EAX,EAX
006D29D0  8A 03                     MOV AL,byte ptr [EBX]
006D29D2  8B D6                     MOV EDX,ESI
006D29D4  43                        INC EBX
006D29D5  89 55 10                  MOV dword ptr [EBP + 0x10],EDX
006D29D8  85 C0                     TEST EAX,EAX
006D29DA  0F 84 EA 00 00 00         JZ 0x006d2aca
LAB_006d29e0:
006D29E0  A8 80                     TEST AL,0x80
006D29E2  74 79                     JZ 0x006d2a5d
006D29E4  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006D29E7  8B F0                     MOV ESI,EAX
006D29E9  83 E6 3F                  AND ESI,0x3f
006D29EC  2B D6                     SUB EDX,ESI
006D29EE  A8 40                     TEST AL,0x40
006D29F0  89 55 18                  MOV dword ptr [EBP + 0x18],EDX
006D29F3  74 34                     JZ 0x006d2a29
006D29F5  8B 7D 24                  MOV EDI,dword ptr [EBP + 0x24]
006D29F8  33 D2                     XOR EDX,EDX
006D29FA  8A 13                     MOV DL,byte ptr [EBX]
006D29FC  33 C0                     XOR EAX,EAX
006D29FE  43                        INC EBX
006D29FF  4E                        DEC ESI
006D2A00  8A 04 3A                  MOV AL,byte ptr [EDX + EDI*0x1]
006D2A03  0F 88 93 00 00 00         JS 0x006d2a9c
006D2A09  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006D2A0C  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006D2A0F  46                        INC ESI
LAB_006d2a10:
006D2A10  84 0A                     TEST byte ptr [EDX],CL
006D2A12  74 02                     JZ 0x006d2a16
006D2A14  88 07                     MOV byte ptr [EDI],AL
LAB_006d2a16:
006D2A16  47                        INC EDI
006D2A17  D0 E9                     SHR CL,0x1
006D2A19  75 03                     JNZ 0x006d2a1e
006D2A1B  B1 80                     MOV CL,0x80
006D2A1D  42                        INC EDX
LAB_006d2a1e:
006D2A1E  4E                        DEC ESI
006D2A1F  75 EF                     JNZ 0x006d2a10
006D2A21  89 55 10                  MOV dword ptr [EBP + 0x10],EDX
006D2A24  89 7D 08                  MOV dword ptr [EBP + 0x8],EDI
006D2A27  EB 7E                     JMP 0x006d2aa7
LAB_006d2a29:
006D2A29  4E                        DEC ESI
006D2A2A  78 78                     JS 0x006d2aa4
006D2A2C  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006D2A2F  46                        INC ESI
006D2A30  89 75 08                  MOV dword ptr [EBP + 0x8],ESI
006D2A33  8B 75 24                  MOV ESI,dword ptr [EBP + 0x24]
LAB_006d2a36:
006D2A36  84 0A                     TEST byte ptr [EDX],CL
006D2A38  74 09                     JZ 0x006d2a43
006D2A3A  33 C0                     XOR EAX,EAX
006D2A3C  8A 03                     MOV AL,byte ptr [EBX]
006D2A3E  8A 04 30                  MOV AL,byte ptr [EAX + ESI*0x1]
006D2A41  88 07                     MOV byte ptr [EDI],AL
LAB_006d2a43:
006D2A43  47                        INC EDI
006D2A44  43                        INC EBX
006D2A45  D0 E9                     SHR CL,0x1
006D2A47  75 03                     JNZ 0x006d2a4c
006D2A49  B1 80                     MOV CL,0x80
006D2A4B  42                        INC EDX
LAB_006d2a4c:
006D2A4C  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006D2A4F  48                        DEC EAX
006D2A50  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
006D2A53  75 E1                     JNZ 0x006d2a36
006D2A55  89 55 10                  MOV dword ptr [EBP + 0x10],EDX
006D2A58  89 7D 08                  MOV dword ptr [EBP + 0x8],EDI
006D2A5B  EB 4A                     JMP 0x006d2aa7
LAB_006d2a5d:
006D2A5D  83 E0 7F                  AND EAX,0x7f
006D2A60  8B F0                     MOV ESI,EAX
006D2A62  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006D2A65  2B C6                     SUB EAX,ESI
006D2A67  03 FE                     ADD EDI,ESI
006D2A69  89 45 18                  MOV dword ptr [EBP + 0x18],EAX
006D2A6C  33 C0                     XOR EAX,EAX
006D2A6E  8A E1                     MOV AH,CL
006D2A70  8B CE                     MOV ECX,ESI
006D2A72  83 E1 07                  AND ECX,0x7
006D2A75  89 7D 08                  MOV dword ptr [EBP + 0x8],EDI
006D2A78  D3 E8                     SHR EAX,CL
006D2A7A  3D 80 00 00 00            CMP EAX,0x80
006D2A7F  77 0D                     JA 0x006d2a8e
006D2A81  42                        INC EDX
006D2A82  8A C8                     MOV CL,AL
006D2A84  C1 FE 03                  SAR ESI,0x3
006D2A87  03 D6                     ADD EDX,ESI
006D2A89  89 55 10                  MOV dword ptr [EBP + 0x10],EDX
006D2A8C  EB 19                     JMP 0x006d2aa7
LAB_006d2a8e:
006D2A8E  C1 FE 03                  SAR ESI,0x3
006D2A91  33 C9                     XOR ECX,ECX
006D2A93  03 D6                     ADD EDX,ESI
006D2A95  8A CC                     MOV CL,AH
006D2A97  89 55 10                  MOV dword ptr [EBP + 0x10],EDX
006D2A9A  EB 0B                     JMP 0x006d2aa7
LAB_006d2a9c:
006D2A9C  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006D2A9F  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006D2AA2  EB 03                     JMP 0x006d2aa7
LAB_006d2aa4:
006D2AA4  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
LAB_006d2aa7:
006D2AA7  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006D2AAA  85 C0                     TEST EAX,EAX
006D2AAC  7E 0A                     JLE 0x006d2ab8
006D2AAE  33 C0                     XOR EAX,EAX
006D2AB0  8A 03                     MOV AL,byte ptr [EBX]
006D2AB2  43                        INC EBX
006D2AB3  E9 28 FF FF FF            JMP 0x006d29e0
LAB_006d2ab8:
006D2AB8  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006D2ABB  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006D2ABE  8B 75 28                  MOV ESI,dword ptr [EBP + 0x28]
006D2AC1  2B CA                     SUB ECX,EDX
006D2AC3  03 F9                     ADD EDI,ECX
006D2AC5  89 7D 08                  MOV dword ptr [EBP + 0x8],EDI
006D2AC8  EB 06                     JMP 0x006d2ad0
LAB_006d2aca:
006D2ACA  03 7D 0C                  ADD EDI,dword ptr [EBP + 0xc]
006D2ACD  89 7D 08                  MOV dword ptr [EBP + 0x8],EDI
LAB_006d2ad0:
006D2AD0  8B 4D 2C                  MOV ECX,dword ptr [EBP + 0x2c]
006D2AD3  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
006D2AD6  03 F1                     ADD ESI,ECX
006D2AD8  48                        DEC EAX
006D2AD9  89 75 28                  MOV dword ptr [EBP + 0x28],ESI
006D2ADC  89 45 20                  MOV dword ptr [EBP + 0x20],EAX
006D2ADF  0F 85 DE FE FF FF         JNZ 0x006d29c3
006D2AE5  5F                        POP EDI
006D2AE6  5E                        POP ESI
006D2AE7  5B                        POP EBX
006D2AE8  8B E5                     MOV ESP,EBP
006D2AEA  5D                        POP EBP
006D2AEB  C2 30 00                  RET 0x30
LAB_006d2aee:
006D2AEE  85 D2                     TEST EDX,EDX
006D2AF0  0F 85 CC 02 00 00         JNZ 0x006d2dc2
006D2AF6  85 F6                     TEST ESI,ESI
006D2AF8  75 21                     JNZ 0x006d2b1b
006D2AFA  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
006D2AFD  52                        PUSH EDX
006D2AFE  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006D2B01  50                        PUSH EAX
006D2B02  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006D2B05  50                        PUSH EAX
006D2B06  51                        PUSH ECX
006D2B07  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006D2B0A  53                        PUSH EBX
006D2B0B  51                        PUSH ECX
006D2B0C  52                        PUSH EDX
006D2B0D  E8 BE FB FF FF            CALL 0x006d26d0
006D2B12  5F                        POP EDI
006D2B13  5E                        POP ESI
006D2B14  5B                        POP EBX
006D2B15  8B E5                     MOV ESP,EBP
006D2B17  5D                        POP EBP
006D2B18  C2 30 00                  RET 0x30
LAB_006d2b1b:
006D2B1B  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
006D2B1E  48                        DEC EAX
006D2B1F  0F 88 C4 07 00 00         JS 0x006d32e9
006D2B25  40                        INC EAX
006D2B26  89 45 24                  MOV dword ptr [EBP + 0x24],EAX
LAB_006d2b29:
006D2B29  33 D2                     XOR EDX,EDX
006D2B2B  8A 13                     MOV DL,byte ptr [EBX]
006D2B2D  43                        INC EBX
006D2B2E  85 D2                     TEST EDX,EDX
006D2B30  89 5D 34                  MOV dword ptr [EBP + 0x34],EBX
006D2B33  0F 84 5E 02 00 00         JZ 0x006d2d97
006D2B39  8B 4D 30                  MOV ECX,dword ptr [EBP + 0x30]
006D2B3C  B8 80 00 00 00            MOV EAX,0x80
006D2B41  83 E1 07                  AND ECX,0x7
006D2B44  89 75 10                  MOV dword ptr [EBP + 0x10],ESI
006D2B47  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
006D2B4A  D3 F8                     SAR EAX,CL
006D2B4C  88 45 23                  MOV byte ptr [EBP + 0x23],AL
LAB_006d2b4f:
006D2B4F  F6 C2 80                  TEST DL,0x80
006D2B52  8B C2                     MOV EAX,EDX
006D2B54  74 21                     JZ 0x006d2b77
006D2B56  83 E0 3F                  AND EAX,0x3f
006D2B59  3B C6                     CMP EAX,ESI
006D2B5B  7F 2A                     JG 0x006d2b87
006D2B5D  F6 C2 40                  TEST DL,0x40
006D2B60  74 0A                     JZ 0x006d2b6c
006D2B62  43                        INC EBX
006D2B63  33 D2                     XOR EDX,EDX
006D2B65  2B F0                     SUB ESI,EAX
006D2B67  8A 13                     MOV DL,byte ptr [EBX]
006D2B69  43                        INC EBX
006D2B6A  EB E3                     JMP 0x006d2b4f
LAB_006d2b6c:
006D2B6C  03 D8                     ADD EBX,EAX
006D2B6E  33 D2                     XOR EDX,EDX
006D2B70  2B F0                     SUB ESI,EAX
006D2B72  8A 13                     MOV DL,byte ptr [EBX]
006D2B74  43                        INC EBX
006D2B75  EB D8                     JMP 0x006d2b4f
LAB_006d2b77:
006D2B77  83 E0 7F                  AND EAX,0x7f
006D2B7A  3B C6                     CMP EAX,ESI
006D2B7C  7F 09                     JG 0x006d2b87
006D2B7E  33 D2                     XOR EDX,EDX
006D2B80  2B F0                     SUB ESI,EAX
006D2B82  8A 13                     MOV DL,byte ptr [EBX]
006D2B84  43                        INC EBX
006D2B85  EB C8                     JMP 0x006d2b4f
LAB_006d2b87:
006D2B87  8B CA                     MOV ECX,EDX
006D2B89  2B C6                     SUB EAX,ESI
006D2B8B  81 E1 C0 00 00 00         AND ECX,0xc0
006D2B91  89 5D 34                  MOV dword ptr [EBP + 0x34],EBX
006D2B94  80 F9 80                  CMP CL,0x80
006D2B97  75 05                     JNZ 0x006d2b9e
006D2B99  03 DE                     ADD EBX,ESI
006D2B9B  89 5D 34                  MOV dword ptr [EBP + 0x34],EBX
LAB_006d2b9e:
006D2B9E  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
006D2BA1  3B C7                     CMP EAX,EDI
006D2BA3  0F 8F 02 01 00 00         JG 0x006d2cab
006D2BA9  8B CA                     MOV ECX,EDX
006D2BAB  81 E1 80 00 00 00         AND ECX,0x80
LAB_006d2bb1:
006D2BB1  2B F8                     SUB EDI,EAX
006D2BB3  85 C9                     TEST ECX,ECX
006D2BB5  89 7D 18                  MOV dword ptr [EBP + 0x18],EDI
006D2BB8  0F 84 80 00 00 00         JZ 0x006d2c3e
006D2BBE  F6 C2 40                  TEST DL,0x40
006D2BC1  74 42                     JZ 0x006d2c05
006D2BC3  33 C9                     XOR ECX,ECX
006D2BC5  8A 0B                     MOV CL,byte ptr [EBX]
006D2BC7  43                        INC EBX
006D2BC8  48                        DEC EAX
006D2BC9  0F 88 AE 00 00 00         JS 0x006d2c7d
006D2BCF  8D 70 01                  LEA ESI,[EAX + 0x1]
LAB_006d2bd2:
006D2BD2  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
006D2BD5  8A 45 23                  MOV AL,byte ptr [EBP + 0x23]
006D2BD8  84 07                     TEST byte ptr [EDI],AL
006D2BDA  74 05                     JZ 0x006d2be1
006D2BDC  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006D2BDF  88 08                     MOV byte ptr [EAX],CL
LAB_006d2be1:
006D2BE1  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006D2BE4  8A 45 23                  MOV AL,byte ptr [EBP + 0x23]
006D2BE7  47                        INC EDI
006D2BE8  D0 E8                     SHR AL,0x1
006D2BEA  89 7D 08                  MOV dword ptr [EBP + 0x8],EDI
006D2BED  88 45 23                  MOV byte ptr [EBP + 0x23],AL
006D2BF0  75 0B                     JNZ 0x006d2bfd
006D2BF2  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006D2BF5  C6 45 23 80               MOV byte ptr [EBP + 0x23],0x80
006D2BF9  40                        INC EAX
006D2BFA  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
LAB_006d2bfd:
006D2BFD  4E                        DEC ESI
006D2BFE  75 D2                     JNZ 0x006d2bd2
006D2C00  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
006D2C03  EB 78                     JMP 0x006d2c7d
LAB_006d2c05:
006D2C05  48                        DEC EAX
006D2C06  78 75                     JS 0x006d2c7d
006D2C08  8D 70 01                  LEA ESI,[EAX + 0x1]
LAB_006d2c0b:
006D2C0B  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006D2C0E  8A 45 23                  MOV AL,byte ptr [EBP + 0x23]
006D2C11  84 01                     TEST byte ptr [ECX],AL
006D2C13  74 07                     JZ 0x006d2c1c
006D2C15  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006D2C18  8A 0B                     MOV CL,byte ptr [EBX]
006D2C1A  88 08                     MOV byte ptr [EAX],CL
LAB_006d2c1c:
006D2C1C  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006D2C1F  40                        INC EAX
006D2C20  43                        INC EBX
006D2C21  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
006D2C24  8A 45 23                  MOV AL,byte ptr [EBP + 0x23]
006D2C27  D0 E8                     SHR AL,0x1
006D2C29  88 45 23                  MOV byte ptr [EBP + 0x23],AL
006D2C2C  75 0B                     JNZ 0x006d2c39
006D2C2E  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006D2C31  C6 45 23 80               MOV byte ptr [EBP + 0x23],0x80
006D2C35  40                        INC EAX
006D2C36  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
LAB_006d2c39:
006D2C39  4E                        DEC ESI
006D2C3A  75 CF                     JNZ 0x006d2c0b
006D2C3C  EB 3F                     JMP 0x006d2c7d
LAB_006d2c3e:
006D2C3E  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
006D2C41  8B C8                     MOV ECX,EAX
006D2C43  03 D8                     ADD EBX,EAX
006D2C45  83 E1 07                  AND ECX,0x7
006D2C48  89 5D 08                  MOV dword ptr [EBP + 0x8],EBX
006D2C4B  33 DB                     XOR EBX,EBX
006D2C4D  8A 7D 23                  MOV BH,byte ptr [EBP + 0x23]
006D2C50  D3 EB                     SHR EBX,CL
006D2C52  8B CB                     MOV ECX,EBX
006D2C54  81 F9 80 00 00 00         CMP ECX,0x80
006D2C5A  77 0C                     JA 0x006d2c68
006D2C5C  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
006D2C5F  88 4D 23                  MOV byte ptr [EBP + 0x23],CL
006D2C62  46                        INC ESI
006D2C63  89 75 10                  MOV dword ptr [EBP + 0x10],ESI
006D2C66  EB 07                     JMP 0x006d2c6f
LAB_006d2c68:
006D2C68  33 DB                     XOR EBX,EBX
006D2C6A  8A DD                     MOV BL,CH
006D2C6C  88 5D 23                  MOV byte ptr [EBP + 0x23],BL
LAB_006d2c6f:
006D2C6F  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006D2C72  8B 5D 34                  MOV EBX,dword ptr [EBP + 0x34]
006D2C75  C1 F8 03                  SAR EAX,0x3
006D2C78  03 C8                     ADD ECX,EAX
006D2C7A  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
LAB_006d2c7d:
006D2C7D  85 FF                     TEST EDI,EDI
006D2C7F  7E 28                     JLE 0x006d2ca9
006D2C81  33 D2                     XOR EDX,EDX
006D2C83  8A 13                     MOV DL,byte ptr [EBX]
006D2C85  8B CA                     MOV ECX,EDX
006D2C87  8B C2                     MOV EAX,EDX
006D2C89  81 E1 80 00 00 00         AND ECX,0x80
006D2C8F  43                        INC EBX
006D2C90  85 C9                     TEST ECX,ECX
006D2C92  89 5D 34                  MOV dword ptr [EBP + 0x34],EBX
006D2C95  74 05                     JZ 0x006d2c9c
006D2C97  83 E0 3F                  AND EAX,0x3f
006D2C9A  EB 03                     JMP 0x006d2c9f
LAB_006d2c9c:
006D2C9C  83 E0 7F                  AND EAX,0x7f
LAB_006d2c9f:
006D2C9F  3B C7                     CMP EAX,EDI
006D2CA1  0F 8E 0A FF FF FF         JLE 0x006d2bb1
006D2CA7  EB 02                     JMP 0x006d2cab
LAB_006d2ca9:
006D2CA9  33 C0                     XOR EAX,EAX
LAB_006d2cab:
006D2CAB  2B C7                     SUB EAX,EDI
006D2CAD  F6 C2 80                  TEST DL,0x80
006D2CB0  0F 84 83 00 00 00         JZ 0x006d2d39
006D2CB6  F6 C2 40                  TEST DL,0x40
006D2CB9  74 45                     JZ 0x006d2d00
006D2CBB  85 FF                     TEST EDI,EDI
006D2CBD  7E 7D                     JLE 0x006d2d3c
006D2CBF  33 C9                     XOR ECX,ECX
006D2CC1  8A 0B                     MOV CL,byte ptr [EBX]
006D2CC3  43                        INC EBX
006D2CC4  4F                        DEC EDI
006D2CC5  89 4D 34                  MOV dword ptr [EBP + 0x34],ECX
006D2CC8  78 72                     JS 0x006d2d3c
006D2CCA  8D 77 01                  LEA ESI,[EDI + 0x1]
LAB_006d2ccd:
006D2CCD  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
006D2CD0  8A 4D 23                  MOV CL,byte ptr [EBP + 0x23]
006D2CD3  84 0F                     TEST byte ptr [EDI],CL
006D2CD5  74 08                     JZ 0x006d2cdf
006D2CD7  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006D2CDA  8A 4D 34                  MOV CL,byte ptr [EBP + 0x34]
006D2CDD  88 0F                     MOV byte ptr [EDI],CL
LAB_006d2cdf:
006D2CDF  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006D2CE2  8A 4D 23                  MOV CL,byte ptr [EBP + 0x23]
006D2CE5  47                        INC EDI
006D2CE6  D0 E9                     SHR CL,0x1
006D2CE8  89 7D 08                  MOV dword ptr [EBP + 0x8],EDI
006D2CEB  88 4D 23                  MOV byte ptr [EBP + 0x23],CL
006D2CEE  75 0B                     JNZ 0x006d2cfb
006D2CF0  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006D2CF3  C6 45 23 80               MOV byte ptr [EBP + 0x23],0x80
006D2CF7  41                        INC ECX
006D2CF8  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
LAB_006d2cfb:
006D2CFB  4E                        DEC ESI
006D2CFC  75 CF                     JNZ 0x006d2ccd
006D2CFE  EB 3C                     JMP 0x006d2d3c
LAB_006d2d00:
006D2D00  4F                        DEC EDI
006D2D01  78 39                     JS 0x006d2d3c
006D2D03  8D 77 01                  LEA ESI,[EDI + 0x1]
LAB_006d2d06:
006D2D06  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
006D2D09  8A 4D 23                  MOV CL,byte ptr [EBP + 0x23]
006D2D0C  84 0F                     TEST byte ptr [EDI],CL
006D2D0E  74 07                     JZ 0x006d2d17
006D2D10  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006D2D13  8A 0B                     MOV CL,byte ptr [EBX]
006D2D15  88 0F                     MOV byte ptr [EDI],CL
LAB_006d2d17:
006D2D17  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006D2D1A  41                        INC ECX
006D2D1B  43                        INC EBX
006D2D1C  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
006D2D1F  8A 4D 23                  MOV CL,byte ptr [EBP + 0x23]
006D2D22  D0 E9                     SHR CL,0x1
006D2D24  88 4D 23                  MOV byte ptr [EBP + 0x23],CL
006D2D27  75 0B                     JNZ 0x006d2d34
006D2D29  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006D2D2C  C6 45 23 80               MOV byte ptr [EBP + 0x23],0x80
006D2D30  41                        INC ECX
006D2D31  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
LAB_006d2d34:
006D2D34  4E                        DEC ESI
006D2D35  75 CF                     JNZ 0x006d2d06
006D2D37  EB 03                     JMP 0x006d2d3c
LAB_006d2d39:
006D2D39  01 7D 08                  ADD dword ptr [EBP + 0x8],EDI
LAB_006d2d3c:
006D2D3C  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
006D2D3F  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
006D2D42  2B F7                     SUB ESI,EDI
006D2D44  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
006D2D47  2B F7                     SUB ESI,EDI
006D2D49  3B C6                     CMP EAX,ESI
006D2D4B  7D 2B                     JGE 0x006d2d78
LAB_006d2d4d:
006D2D4D  81 E2 C0 00 00 00         AND EDX,0xc0
006D2D53  2B F0                     SUB ESI,EAX
006D2D55  80 FA 80                  CMP DL,0x80
006D2D58  75 02                     JNZ 0x006d2d5c
006D2D5A  03 D8                     ADD EBX,EAX
LAB_006d2d5c:
006D2D5C  33 D2                     XOR EDX,EDX
006D2D5E  8A 13                     MOV DL,byte ptr [EBX]
006D2D60  8B C2                     MOV EAX,EDX
006D2D62  24 80                     AND AL,0x80
006D2D64  43                        INC EBX
006D2D65  84 C0                     TEST AL,AL
006D2D67  8B C2                     MOV EAX,EDX
006D2D69  74 09                     JZ 0x006d2d74
006D2D6B  83 E0 3F                  AND EAX,0x3f
006D2D6E  F6 C2 40                  TEST DL,0x40
006D2D71  74 01                     JZ 0x006d2d74
006D2D73  43                        INC EBX
LAB_006d2d74:
006D2D74  3B C6                     CMP EAX,ESI
006D2D76  7C D5                     JL 0x006d2d4d
LAB_006d2d78:
006D2D78  81 E2 C0 00 00 00         AND EDX,0xc0
006D2D7E  80 FA 80                  CMP DL,0x80
006D2D81  75 02                     JNZ 0x006d2d85
006D2D83  03 DE                     ADD EBX,ESI
LAB_006d2d85:
006D2D85  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006D2D88  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006D2D8B  8B 75 28                  MOV ESI,dword ptr [EBP + 0x28]
006D2D8E  2B CF                     SUB ECX,EDI
006D2D90  03 C1                     ADD EAX,ECX
006D2D92  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
006D2D95  EB 0B                     JMP 0x006d2da2
LAB_006d2d97:
006D2D97  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006D2D9A  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006D2D9D  03 C2                     ADD EAX,EDX
006D2D9F  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
LAB_006d2da2:
006D2DA2  85 F6                     TEST ESI,ESI
006D2DA4  74 06                     JZ 0x006d2dac
006D2DA6  03 75 2C                  ADD ESI,dword ptr [EBP + 0x2c]
006D2DA9  89 75 28                  MOV dword ptr [EBP + 0x28],ESI
LAB_006d2dac:
006D2DAC  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
006D2DAF  48                        DEC EAX
006D2DB0  89 45 24                  MOV dword ptr [EBP + 0x24],EAX
006D2DB3  0F 85 70 FD FF FF         JNZ 0x006d2b29
006D2DB9  5F                        POP EDI
006D2DBA  5E                        POP ESI
006D2DBB  5B                        POP EBX
006D2DBC  8B E5                     MOV ESP,EBP
006D2DBE  5D                        POP EBP
006D2DBF  C2 30 00                  RET 0x30
LAB_006d2dc2:
006D2DC2  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
006D2DC5  85 F6                     TEST ESI,ESI
006D2DC7  0F 85 39 02 00 00         JNZ 0x006d3006
006D2DCD  48                        DEC EAX
006D2DCE  0F 88 15 05 00 00         JS 0x006d32e9
006D2DD4  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006D2DD7  40                        INC EAX
006D2DD8  89 45 30                  MOV dword ptr [EBP + 0x30],EAX
006D2DDB  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
LAB_006d2dde:
006D2DDE  33 D2                     XOR EDX,EDX
006D2DE0  8A 13                     MOV DL,byte ptr [EBX]
006D2DE2  43                        INC EBX
006D2DE3  85 D2                     TEST EDX,EDX
006D2DE5  89 55 20                  MOV dword ptr [EBP + 0x20],EDX
006D2DE8  89 5D 34                  MOV dword ptr [EBP + 0x34],EBX
006D2DEB  0F 84 ED 01 00 00         JZ 0x006d2fde
006D2DF1  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
LAB_006d2df4:
006D2DF4  F6 C2 80                  TEST DL,0x80
006D2DF7  8B F2                     MOV ESI,EDX
006D2DF9  74 21                     JZ 0x006d2e1c
006D2DFB  83 E6 3F                  AND ESI,0x3f
006D2DFE  3B F0                     CMP ESI,EAX
006D2E00  7F 2A                     JG 0x006d2e2c
006D2E02  F6 C2 40                  TEST DL,0x40
006D2E05  74 0A                     JZ 0x006d2e11
006D2E07  43                        INC EBX
006D2E08  33 D2                     XOR EDX,EDX
006D2E0A  2B C6                     SUB EAX,ESI
006D2E0C  8A 13                     MOV DL,byte ptr [EBX]
006D2E0E  43                        INC EBX
006D2E0F  EB E3                     JMP 0x006d2df4
LAB_006d2e11:
006D2E11  03 DE                     ADD EBX,ESI
006D2E13  33 D2                     XOR EDX,EDX
006D2E15  2B C6                     SUB EAX,ESI
006D2E17  8A 13                     MOV DL,byte ptr [EBX]
006D2E19  43                        INC EBX
006D2E1A  EB D8                     JMP 0x006d2df4
LAB_006d2e1c:
006D2E1C  83 E6 7F                  AND ESI,0x7f
006D2E1F  3B F0                     CMP ESI,EAX
006D2E21  7F 09                     JG 0x006d2e2c
006D2E23  33 D2                     XOR EDX,EDX
006D2E25  2B C6                     SUB EAX,ESI
006D2E27  8A 13                     MOV DL,byte ptr [EBX]
006D2E29  43                        INC EBX
006D2E2A  EB C8                     JMP 0x006d2df4
LAB_006d2e2c:
006D2E2C  8B CA                     MOV ECX,EDX
006D2E2E  2B F0                     SUB ESI,EAX
006D2E30  81 E1 C0 00 00 00         AND ECX,0xc0
006D2E36  89 5D 34                  MOV dword ptr [EBP + 0x34],EBX
006D2E39  80 F9 80                  CMP CL,0x80
006D2E3C  89 55 20                  MOV dword ptr [EBP + 0x20],EDX
006D2E3F  75 05                     JNZ 0x006d2e46
006D2E41  03 D8                     ADD EBX,EAX
006D2E43  89 5D 34                  MOV dword ptr [EBP + 0x34],EBX
LAB_006d2e46:
006D2E46  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006D2E49  3B F1                     CMP ESI,ECX
006D2E4B  89 4D 18                  MOV dword ptr [EBP + 0x18],ECX
006D2E4E  0F 8F B7 00 00 00         JG 0x006d2f0b
006D2E54  8B C2                     MOV EAX,EDX
006D2E56  25 80 00 00 00            AND EAX,0x80
LAB_006d2e5b:
006D2E5B  2B CE                     SUB ECX,ESI
006D2E5D  85 C0                     TEST EAX,EAX
006D2E5F  89 4D 18                  MOV dword ptr [EBP + 0x18],ECX
006D2E62  0F 84 87 00 00 00         JZ 0x006d2eef
006D2E68  F6 C2 40                  TEST DL,0x40
006D2E6B  74 64                     JZ 0x006d2ed1
006D2E6D  33 C0                     XOR EAX,EAX
006D2E6F  8A 03                     MOV AL,byte ptr [EBX]
006D2E71  8B 5D 24                  MOV EBX,dword ptr [EBP + 0x24]
006D2E74  8B C8                     MOV ECX,EAX
006D2E76  33 C0                     XOR EAX,EAX
006D2E78  8A 04 19                  MOV AL,byte ptr [ECX + EBX*0x1]
006D2E7B  8B 5D 34                  MOV EBX,dword ptr [EBP + 0x34]
006D2E7E  43                        INC EBX
006D2E7F  4E                        DEC ESI
006D2E80  89 5D 34                  MOV dword ptr [EBP + 0x34],EBX
006D2E83  78 2B                     JS 0x006d2eb0
006D2E85  8A D8                     MOV BL,AL
006D2E87  46                        INC ESI
006D2E88  8A FB                     MOV BH,BL
006D2E8A  8B CE                     MOV ECX,ESI
006D2E8C  8B C3                     MOV EAX,EBX
006D2E8E  89 75 20                  MOV dword ptr [EBP + 0x20],ESI
006D2E91  C1 E0 10                  SHL EAX,0x10
006D2E94  66 8B C3                  MOV AX,BX
006D2E97  8B 5D 34                  MOV EBX,dword ptr [EBP + 0x34]
006D2E9A  C1 E9 02                  SHR ECX,0x2
006D2E9D  F3 AB                     STOSD.REP ES:EDI
006D2E9F  8B CE                     MOV ECX,ESI
006D2EA1  83 E1 03                  AND ECX,0x3
006D2EA4  F3 AA                     STOSB.REP ES:EDI
006D2EA6  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006D2EA9  8B C6                     MOV EAX,ESI
006D2EAB  03 F8                     ADD EDI,EAX
006D2EAD  89 7D 08                  MOV dword ptr [EBP + 0x8],EDI
LAB_006d2eb0:
006D2EB0  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
LAB_006d2eb3:
006D2EB3  85 C9                     TEST ECX,ECX
006D2EB5  7E 4F                     JLE 0x006d2f06
006D2EB7  33 D2                     XOR EDX,EDX
006D2EB9  8A 13                     MOV DL,byte ptr [EBX]
006D2EBB  8B C2                     MOV EAX,EDX
006D2EBD  8B F2                     MOV ESI,EDX
006D2EBF  25 80 00 00 00            AND EAX,0x80
006D2EC4  43                        INC EBX
006D2EC5  85 C0                     TEST EAX,EAX
006D2EC7  89 5D 34                  MOV dword ptr [EBP + 0x34],EBX
006D2ECA  74 2A                     JZ 0x006d2ef6
006D2ECC  83 E6 3F                  AND ESI,0x3f
006D2ECF  EB 28                     JMP 0x006d2ef9
LAB_006d2ed1:
006D2ED1  4E                        DEC ESI
006D2ED2  78 DF                     JS 0x006d2eb3
006D2ED4  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
006D2ED7  46                        INC ESI
LAB_006d2ed8:
006D2ED8  33 C9                     XOR ECX,ECX
006D2EDA  47                        INC EDI
006D2EDB  8A 0B                     MOV CL,byte ptr [EBX]
006D2EDD  43                        INC EBX
006D2EDE  4E                        DEC ESI
006D2EDF  8A 0C 01                  MOV CL,byte ptr [ECX + EAX*0x1]
006D2EE2  88 4F FF                  MOV byte ptr [EDI + -0x1],CL
006D2EE5  75 F1                     JNZ 0x006d2ed8
006D2EE7  89 5D 34                  MOV dword ptr [EBP + 0x34],EBX
006D2EEA  89 7D 08                  MOV dword ptr [EBP + 0x8],EDI
006D2EED  EB C1                     JMP 0x006d2eb0
LAB_006d2eef:
006D2EEF  03 FE                     ADD EDI,ESI
006D2EF1  89 7D 08                  MOV dword ptr [EBP + 0x8],EDI
006D2EF4  EB BD                     JMP 0x006d2eb3
LAB_006d2ef6:
006D2EF6  83 E6 7F                  AND ESI,0x7f
LAB_006d2ef9:
006D2EF9  3B F1                     CMP ESI,ECX
006D2EFB  0F 8E 5A FF FF FF         JLE 0x006d2e5b
006D2F01  89 55 20                  MOV dword ptr [EBP + 0x20],EDX
006D2F04  EB 05                     JMP 0x006d2f0b
LAB_006d2f06:
006D2F06  89 55 20                  MOV dword ptr [EBP + 0x20],EDX
006D2F09  33 F6                     XOR ESI,ESI
LAB_006d2f0b:
006D2F0B  2B F1                     SUB ESI,ECX
006D2F0D  F6 C2 80                  TEST DL,0x80
006D2F10  74 72                     JZ 0x006d2f84
006D2F12  F6 C2 40                  TEST DL,0x40
006D2F15  74 4C                     JZ 0x006d2f63
006D2F17  85 C9                     TEST ECX,ECX
006D2F19  7E 6B                     JLE 0x006d2f86
006D2F1B  33 C0                     XOR EAX,EAX
006D2F1D  8A 03                     MOV AL,byte ptr [EBX]
006D2F1F  8B 5D 24                  MOV EBX,dword ptr [EBP + 0x24]
006D2F22  8B C8                     MOV ECX,EAX
006D2F24  33 C0                     XOR EAX,EAX
006D2F26  8A 04 19                  MOV AL,byte ptr [ECX + EBX*0x1]
006D2F29  8B 5D 34                  MOV EBX,dword ptr [EBP + 0x34]
006D2F2C  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006D2F2F  43                        INC EBX
006D2F30  49                        DEC ECX
006D2F31  89 5D 34                  MOV dword ptr [EBP + 0x34],EBX
006D2F34  78 50                     JS 0x006d2f86
006D2F36  8A D8                     MOV BL,AL
006D2F38  41                        INC ECX
006D2F39  8A FB                     MOV BH,BL
006D2F3B  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006D2F3E  8B C3                     MOV EAX,EBX
006D2F40  8B D1                     MOV EDX,ECX
006D2F42  C1 E0 10                  SHL EAX,0x10
006D2F45  66 8B C3                  MOV AX,BX
006D2F48  8B 5D 34                  MOV EBX,dword ptr [EBP + 0x34]
006D2F4B  C1 E9 02                  SHR ECX,0x2
006D2F4E  F3 AB                     STOSD.REP ES:EDI
006D2F50  8B CA                     MOV ECX,EDX
006D2F52  83 E1 03                  AND ECX,0x3
006D2F55  F3 AA                     STOSB.REP ES:EDI
006D2F57  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006D2F5A  8B C2                     MOV EAX,EDX
006D2F5C  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
006D2F5F  03 F8                     ADD EDI,EAX
006D2F61  EB 23                     JMP 0x006d2f86
LAB_006d2f63:
006D2F63  49                        DEC ECX
006D2F64  78 20                     JS 0x006d2f86
006D2F66  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
006D2F69  41                        INC ECX
006D2F6A  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
LAB_006d2f6d:
006D2F6D  33 C9                     XOR ECX,ECX
006D2F6F  47                        INC EDI
006D2F70  8A 0B                     MOV CL,byte ptr [EBX]
006D2F72  43                        INC EBX
006D2F73  8A 0C 01                  MOV CL,byte ptr [ECX + EAX*0x1]
006D2F76  88 4F FF                  MOV byte ptr [EDI + -0x1],CL
006D2F79  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006D2F7C  49                        DEC ECX
006D2F7D  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
006D2F80  75 EB                     JNZ 0x006d2f6d
006D2F82  EB 02                     JMP 0x006d2f86
LAB_006d2f84:
006D2F84  03 F9                     ADD EDI,ECX
LAB_006d2f86:
006D2F86  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006D2F89  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006D2F8C  2B C1                     SUB EAX,ECX
006D2F8E  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006D2F91  2B C1                     SUB EAX,ECX
006D2F93  3B F0                     CMP ESI,EAX
006D2F95  7D 2C                     JGE 0x006d2fc3
LAB_006d2f97:
006D2F97  81 E2 C0 00 00 00         AND EDX,0xc0
006D2F9D  2B C6                     SUB EAX,ESI
006D2F9F  80 FA 80                  CMP DL,0x80
006D2FA2  75 02                     JNZ 0x006d2fa6
006D2FA4  03 DE                     ADD EBX,ESI
LAB_006d2fa6:
006D2FA6  33 D2                     XOR EDX,EDX
006D2FA8  8A 13                     MOV DL,byte ptr [EBX]
006D2FAA  8B CA                     MOV ECX,EDX
006D2FAC  8B F2                     MOV ESI,EDX
006D2FAE  80 E1 80                  AND CL,0x80
006D2FB1  43                        INC EBX
006D2FB2  84 C9                     TEST CL,CL
006D2FB4  74 09                     JZ 0x006d2fbf
006D2FB6  83 E6 3F                  AND ESI,0x3f
006D2FB9  F6 C2 40                  TEST DL,0x40
006D2FBC  74 01                     JZ 0x006d2fbf
006D2FBE  43                        INC EBX
LAB_006d2fbf:
006D2FBF  3B F0                     CMP ESI,EAX
006D2FC1  7C D4                     JL 0x006d2f97
LAB_006d2fc3:
006D2FC3  81 E2 C0 00 00 00         AND EDX,0xc0
006D2FC9  80 FA 80                  CMP DL,0x80
006D2FCC  75 02                     JNZ 0x006d2fd0
006D2FCE  03 D8                     ADD EBX,EAX
LAB_006d2fd0:
006D2FD0  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006D2FD3  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
006D2FD6  8B D0                     MOV EDX,EAX
006D2FD8  2B D6                     SUB EDX,ESI
006D2FDA  03 FA                     ADD EDI,EDX
006D2FDC  EB 02                     JMP 0x006d2fe0
LAB_006d2fde:
006D2FDE  03 F8                     ADD EDI,EAX
LAB_006d2fe0:
006D2FE0  8B 4D 28                  MOV ECX,dword ptr [EBP + 0x28]
006D2FE3  89 7D 08                  MOV dword ptr [EBP + 0x8],EDI
006D2FE6  85 C9                     TEST ECX,ECX
006D2FE8  74 06                     JZ 0x006d2ff0
006D2FEA  03 4D 2C                  ADD ECX,dword ptr [EBP + 0x2c]
006D2FED  89 4D 28                  MOV dword ptr [EBP + 0x28],ECX
LAB_006d2ff0:
006D2FF0  8B 4D 30                  MOV ECX,dword ptr [EBP + 0x30]
006D2FF3  49                        DEC ECX
006D2FF4  89 4D 30                  MOV dword ptr [EBP + 0x30],ECX
006D2FF7  0F 85 E1 FD FF FF         JNZ 0x006d2dde
006D2FFD  5F                        POP EDI
006D2FFE  5E                        POP ESI
006D2FFF  5B                        POP EBX
006D3000  8B E5                     MOV ESP,EBP
006D3002  5D                        POP EBP
006D3003  C2 30 00                  RET 0x30
LAB_006d3006:
006D3006  48                        DEC EAX
006D3007  0F 88 DC 02 00 00         JS 0x006d32e9
006D300D  40                        INC EAX
006D300E  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_006d3011:
006D3011  33 D2                     XOR EDX,EDX
006D3013  8A 13                     MOV DL,byte ptr [EBX]
006D3015  43                        INC EBX
006D3016  85 D2                     TEST EDX,EDX
006D3018  89 5D 34                  MOV dword ptr [EBP + 0x34],EBX
006D301B  0F 84 A6 02 00 00         JZ 0x006d32c7
006D3021  8B 4D 30                  MOV ECX,dword ptr [EBP + 0x30]
006D3024  B8 80 00 00 00            MOV EAX,0x80
006D3029  83 E1 07                  AND ECX,0x7
006D302C  89 75 10                  MOV dword ptr [EBP + 0x10],ESI
006D302F  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
006D3032  D3 F8                     SAR EAX,CL
006D3034  88 45 23                  MOV byte ptr [EBP + 0x23],AL
LAB_006d3037:
006D3037  F6 C2 80                  TEST DL,0x80
006D303A  8B C2                     MOV EAX,EDX
006D303C  74 21                     JZ 0x006d305f
006D303E  83 E0 3F                  AND EAX,0x3f
006D3041  3B C6                     CMP EAX,ESI
006D3043  7F 2A                     JG 0x006d306f
006D3045  F6 C2 40                  TEST DL,0x40
006D3048  74 0A                     JZ 0x006d3054
006D304A  43                        INC EBX
006D304B  33 D2                     XOR EDX,EDX
006D304D  2B F0                     SUB ESI,EAX
006D304F  8A 13                     MOV DL,byte ptr [EBX]
006D3051  43                        INC EBX
006D3052  EB E3                     JMP 0x006d3037
LAB_006d3054:
006D3054  03 D8                     ADD EBX,EAX
006D3056  33 D2                     XOR EDX,EDX
006D3058  2B F0                     SUB ESI,EAX
006D305A  8A 13                     MOV DL,byte ptr [EBX]
006D305C  43                        INC EBX
006D305D  EB D8                     JMP 0x006d3037
LAB_006d305f:
006D305F  83 E0 7F                  AND EAX,0x7f
006D3062  3B C6                     CMP EAX,ESI
006D3064  7F 09                     JG 0x006d306f
006D3066  33 D2                     XOR EDX,EDX
006D3068  2B F0                     SUB ESI,EAX
006D306A  8A 13                     MOV DL,byte ptr [EBX]
006D306C  43                        INC EBX
006D306D  EB C8                     JMP 0x006d3037
LAB_006d306f:
006D306F  8B CA                     MOV ECX,EDX
006D3071  2B C6                     SUB EAX,ESI
006D3073  81 E1 C0 00 00 00         AND ECX,0xc0
006D3079  89 5D 34                  MOV dword ptr [EBP + 0x34],EBX
006D307C  80 F9 80                  CMP CL,0x80
006D307F  75 05                     JNZ 0x006d3086
006D3081  03 DE                     ADD EBX,ESI
006D3083  89 5D 34                  MOV dword ptr [EBP + 0x34],EBX
LAB_006d3086:
006D3086  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
006D3089  3B C7                     CMP EAX,EDI
006D308B  89 7D 18                  MOV dword ptr [EBP + 0x18],EDI
006D308E  0F 8F 2E 01 00 00         JG 0x006d31c2
006D3094  8B CA                     MOV ECX,EDX
006D3096  81 E1 80 00 00 00         AND ECX,0x80
LAB_006d309c:
006D309C  2B F8                     SUB EDI,EAX
006D309E  85 C9                     TEST ECX,ECX
006D30A0  89 7D 18                  MOV dword ptr [EBP + 0x18],EDI
006D30A3  0F 84 B6 00 00 00         JZ 0x006d315f
006D30A9  F6 C2 40                  TEST DL,0x40
006D30AC  74 70                     JZ 0x006d311e
006D30AE  8B 7D 24                  MOV EDI,dword ptr [EBP + 0x24]
006D30B1  33 C9                     XOR ECX,ECX
006D30B3  8A 0B                     MOV CL,byte ptr [EBX]
006D30B5  8B F1                     MOV ESI,ECX
006D30B7  33 C9                     XOR ECX,ECX
006D30B9  43                        INC EBX
006D30BA  48                        DEC EAX
006D30BB  8A 0C 3E                  MOV CL,byte ptr [ESI + EDI*0x1]
006D30BE  78 31                     JS 0x006d30f1
006D30C0  8D 70 01                  LEA ESI,[EAX + 0x1]
LAB_006d30c3:
006D30C3  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
006D30C6  8A 45 23                  MOV AL,byte ptr [EBP + 0x23]
006D30C9  84 07                     TEST byte ptr [EDI],AL
006D30CB  74 05                     JZ 0x006d30d2
006D30CD  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006D30D0  88 08                     MOV byte ptr [EAX],CL
LAB_006d30d2:
006D30D2  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006D30D5  8A 45 23                  MOV AL,byte ptr [EBP + 0x23]
006D30D8  47                        INC EDI
006D30D9  D0 E8                     SHR AL,0x1
006D30DB  89 7D 08                  MOV dword ptr [EBP + 0x8],EDI
006D30DE  88 45 23                  MOV byte ptr [EBP + 0x23],AL
006D30E1  75 0B                     JNZ 0x006d30ee
006D30E3  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006D30E6  C6 45 23 80               MOV byte ptr [EBP + 0x23],0x80
006D30EA  40                        INC EAX
006D30EB  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
LAB_006d30ee:
006D30EE  4E                        DEC ESI
006D30EF  75 D2                     JNZ 0x006d30c3
LAB_006d30f1:
006D30F1  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
LAB_006d30f4:
006D30F4  85 FF                     TEST EDI,EDI
006D30F6  0F 8E C4 00 00 00         JLE 0x006d31c0
006D30FC  33 D2                     XOR EDX,EDX
006D30FE  8A 13                     MOV DL,byte ptr [EBX]
006D3100  8B CA                     MOV ECX,EDX
006D3102  8B C2                     MOV EAX,EDX
006D3104  81 E1 80 00 00 00         AND ECX,0x80
006D310A  43                        INC EBX
006D310B  85 C9                     TEST ECX,ECX
006D310D  89 5D 34                  MOV dword ptr [EBP + 0x34],EBX
006D3110  0F 84 9D 00 00 00         JZ 0x006d31b3
006D3116  83 E0 3F                  AND EAX,0x3f
006D3119  E9 98 00 00 00            JMP 0x006d31b6
LAB_006d311e:
006D311E  48                        DEC EAX
006D311F  78 D3                     JS 0x006d30f4
006D3121  8D 70 01                  LEA ESI,[EAX + 0x1]
LAB_006d3124:
006D3124  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006D3127  8A 45 23                  MOV AL,byte ptr [EBP + 0x23]
006D312A  84 01                     TEST byte ptr [ECX],AL
006D312C  74 0F                     JZ 0x006d313d
006D312E  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
006D3131  33 C9                     XOR ECX,ECX
006D3133  8A 0B                     MOV CL,byte ptr [EBX]
006D3135  8A 0C 01                  MOV CL,byte ptr [ECX + EAX*0x1]
006D3138  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006D313B  88 08                     MOV byte ptr [EAX],CL
LAB_006d313d:
006D313D  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006D3140  40                        INC EAX
006D3141  43                        INC EBX
006D3142  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
006D3145  8A 45 23                  MOV AL,byte ptr [EBP + 0x23]
006D3148  D0 E8                     SHR AL,0x1
006D314A  88 45 23                  MOV byte ptr [EBP + 0x23],AL
006D314D  75 0B                     JNZ 0x006d315a
006D314F  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006D3152  C6 45 23 80               MOV byte ptr [EBP + 0x23],0x80
006D3156  40                        INC EAX
006D3157  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
LAB_006d315a:
006D315A  4E                        DEC ESI
006D315B  75 C7                     JNZ 0x006d3124
006D315D  EB 95                     JMP 0x006d30f4
LAB_006d315f:
006D315F  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
006D3162  8B C8                     MOV ECX,EAX
006D3164  03 D8                     ADD EBX,EAX
006D3166  83 E1 07                  AND ECX,0x7
006D3169  89 5D 08                  MOV dword ptr [EBP + 0x8],EBX
006D316C  33 DB                     XOR EBX,EBX
006D316E  8A 7D 23                  MOV BH,byte ptr [EBP + 0x23]
006D3171  D3 EB                     SHR EBX,CL
006D3173  8B CB                     MOV ECX,EBX
006D3175  81 F9 80 00 00 00         CMP ECX,0x80
006D317B  77 1C                     JA 0x006d3199
006D317D  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
006D3180  8B 5D 34                  MOV EBX,dword ptr [EBP + 0x34]
006D3183  46                        INC ESI
006D3184  88 4D 23                  MOV byte ptr [EBP + 0x23],CL
006D3187  C1 F8 03                  SAR EAX,0x3
006D318A  8B CE                     MOV ECX,ESI
006D318C  89 75 10                  MOV dword ptr [EBP + 0x10],ESI
006D318F  03 C8                     ADD ECX,EAX
006D3191  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006D3194  E9 5B FF FF FF            JMP 0x006d30f4
LAB_006d3199:
006D3199  33 DB                     XOR EBX,EBX
006D319B  8A DD                     MOV BL,CH
006D319D  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006D31A0  C1 F8 03                  SAR EAX,0x3
006D31A3  03 C8                     ADD ECX,EAX
006D31A5  88 5D 23                  MOV byte ptr [EBP + 0x23],BL
006D31A8  8B 5D 34                  MOV EBX,dword ptr [EBP + 0x34]
006D31AB  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006D31AE  E9 41 FF FF FF            JMP 0x006d30f4
LAB_006d31b3:
006D31B3  83 E0 7F                  AND EAX,0x7f
LAB_006d31b6:
006D31B6  3B C7                     CMP EAX,EDI
006D31B8  0F 8E DE FE FF FF         JLE 0x006d309c
006D31BE  EB 02                     JMP 0x006d31c2
LAB_006d31c0:
006D31C0  33 C0                     XOR EAX,EAX
LAB_006d31c2:
006D31C2  2B C7                     SUB EAX,EDI
006D31C4  F6 C2 80                  TEST DL,0x80
006D31C7  0F 84 9C 00 00 00         JZ 0x006d3269
006D31CD  F6 C2 40                  TEST DL,0x40
006D31D0  74 56                     JZ 0x006d3228
006D31D2  85 FF                     TEST EDI,EDI
006D31D4  0F 8E 92 00 00 00         JLE 0x006d326c
006D31DA  8B 7D 24                  MOV EDI,dword ptr [EBP + 0x24]
006D31DD  33 C9                     XOR ECX,ECX
006D31DF  8A 0B                     MOV CL,byte ptr [EBX]
006D31E1  8B F1                     MOV ESI,ECX
006D31E3  33 C9                     XOR ECX,ECX
006D31E5  43                        INC EBX
006D31E6  8A 0C 3E                  MOV CL,byte ptr [ESI + EDI*0x1]
006D31E9  89 4D 34                  MOV dword ptr [EBP + 0x34],ECX
006D31EC  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006D31EF  49                        DEC ECX
006D31F0  78 7A                     JS 0x006d326c
006D31F2  8D 71 01                  LEA ESI,[ECX + 0x1]
LAB_006d31f5:
006D31F5  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
006D31F8  8A 4D 23                  MOV CL,byte ptr [EBP + 0x23]
006D31FB  84 0F                     TEST byte ptr [EDI],CL
006D31FD  74 08                     JZ 0x006d3207
006D31FF  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006D3202  8A 4D 34                  MOV CL,byte ptr [EBP + 0x34]
006D3205  88 0F                     MOV byte ptr [EDI],CL
LAB_006d3207:
006D3207  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006D320A  8A 4D 23                  MOV CL,byte ptr [EBP + 0x23]
006D320D  47                        INC EDI
006D320E  D0 E9                     SHR CL,0x1
006D3210  89 7D 08                  MOV dword ptr [EBP + 0x8],EDI
006D3213  88 4D 23                  MOV byte ptr [EBP + 0x23],CL
006D3216  75 0B                     JNZ 0x006d3223
006D3218  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006D321B  C6 45 23 80               MOV byte ptr [EBP + 0x23],0x80
006D321F  41                        INC ECX
006D3220  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
LAB_006d3223:
006D3223  4E                        DEC ESI
006D3224  75 CF                     JNZ 0x006d31f5
006D3226  EB 44                     JMP 0x006d326c
LAB_006d3228:
006D3228  4F                        DEC EDI
006D3229  78 41                     JS 0x006d326c
006D322B  8D 77 01                  LEA ESI,[EDI + 0x1]
LAB_006d322e:
006D322E  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
006D3231  8A 4D 23                  MOV CL,byte ptr [EBP + 0x23]
006D3234  84 0F                     TEST byte ptr [EDI],CL
006D3236  74 0F                     JZ 0x006d3247
006D3238  8B 7D 24                  MOV EDI,dword ptr [EBP + 0x24]
006D323B  33 C9                     XOR ECX,ECX
006D323D  8A 0B                     MOV CL,byte ptr [EBX]
006D323F  8A 0C 39                  MOV CL,byte ptr [ECX + EDI*0x1]
006D3242  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006D3245  88 0F                     MOV byte ptr [EDI],CL
LAB_006d3247:
006D3247  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006D324A  41                        INC ECX
006D324B  43                        INC EBX
006D324C  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
006D324F  8A 4D 23                  MOV CL,byte ptr [EBP + 0x23]
006D3252  D0 E9                     SHR CL,0x1
006D3254  88 4D 23                  MOV byte ptr [EBP + 0x23],CL
006D3257  75 0B                     JNZ 0x006d3264
006D3259  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006D325C  C6 45 23 80               MOV byte ptr [EBP + 0x23],0x80
006D3260  41                        INC ECX
006D3261  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
LAB_006d3264:
006D3264  4E                        DEC ESI
006D3265  75 C7                     JNZ 0x006d322e
006D3267  EB 03                     JMP 0x006d326c
LAB_006d3269:
006D3269  01 7D 08                  ADD dword ptr [EBP + 0x8],EDI
LAB_006d326c:
006D326C  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
006D326F  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
006D3272  2B F7                     SUB ESI,EDI
006D3274  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
006D3277  2B F7                     SUB ESI,EDI
006D3279  3B C6                     CMP EAX,ESI
006D327B  7D 2B                     JGE 0x006d32a8
LAB_006d327d:
006D327D  81 E2 C0 00 00 00         AND EDX,0xc0
006D3283  2B F0                     SUB ESI,EAX
006D3285  80 FA 80                  CMP DL,0x80
006D3288  75 02                     JNZ 0x006d328c
006D328A  03 D8                     ADD EBX,EAX
LAB_006d328c:
006D328C  33 D2                     XOR EDX,EDX
006D328E  8A 13                     MOV DL,byte ptr [EBX]
006D3290  8B C2                     MOV EAX,EDX
006D3292  24 80                     AND AL,0x80
006D3294  43                        INC EBX
006D3295  84 C0                     TEST AL,AL
006D3297  8B C2                     MOV EAX,EDX
006D3299  74 09                     JZ 0x006d32a4
006D329B  83 E0 3F                  AND EAX,0x3f
006D329E  F6 C2 40                  TEST DL,0x40
006D32A1  74 01                     JZ 0x006d32a4
006D32A3  43                        INC EBX
LAB_006d32a4:
006D32A4  3B C6                     CMP EAX,ESI
006D32A6  7C D5                     JL 0x006d327d
LAB_006d32a8:
006D32A8  81 E2 C0 00 00 00         AND EDX,0xc0
006D32AE  80 FA 80                  CMP DL,0x80
006D32B1  75 02                     JNZ 0x006d32b5
006D32B3  03 DE                     ADD EBX,ESI
LAB_006d32b5:
006D32B5  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006D32B8  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006D32BB  8B 75 28                  MOV ESI,dword ptr [EBP + 0x28]
006D32BE  2B CF                     SUB ECX,EDI
006D32C0  03 C1                     ADD EAX,ECX
006D32C2  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
006D32C5  EB 0B                     JMP 0x006d32d2
LAB_006d32c7:
006D32C7  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006D32CA  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006D32CD  03 C2                     ADD EAX,EDX
006D32CF  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
LAB_006d32d2:
006D32D2  85 F6                     TEST ESI,ESI
006D32D4  74 06                     JZ 0x006d32dc
006D32D6  03 75 2C                  ADD ESI,dword ptr [EBP + 0x2c]
006D32D9  89 75 28                  MOV dword ptr [EBP + 0x28],ESI
LAB_006d32dc:
006D32DC  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006D32DF  48                        DEC EAX
006D32E0  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006D32E3  0F 85 28 FD FF FF         JNZ 0x006d3011
LAB_006d32e9:
006D32E9  5F                        POP EDI
006D32EA  5E                        POP ESI
006D32EB  5B                        POP EBX
006D32EC  8B E5                     MOV ESP,EBP
006D32EE  5D                        POP EBP
006D32EF  C2 30 00                  RET 0x30
