FUN_00758a60:
00758A60  55                        PUSH EBP
00758A61  8B EC                     MOV EBP,ESP
00758A63  83 EC 0C                  SUB ESP,0xc
00758A66  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00758A69  53                        PUSH EBX
00758A6A  56                        PUSH ESI
00758A6B  57                        PUSH EDI
00758A6C  8B 59 10                  MOV EBX,dword ptr [ECX + 0x10]
00758A6F  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
00758A72  8B 43 04                  MOV EAX,dword ptr [EBX + 0x4]
00758A75  8B 3B                     MOV EDI,dword ptr [EBX]
00758A77  85 C0                     TEST EAX,EAX
00758A79  75 14                     JNZ 0x00758a8f
00758A7B  51                        PUSH ECX
00758A7C  FF 53 0C                  CALL dword ptr [EBX + 0xc]
00758A7F  85 C0                     TEST EAX,EAX
00758A81  0F 84 23 01 00 00         JZ 0x00758baa
00758A87  8B 43 04                  MOV EAX,dword ptr [EBX + 0x4]
00758A8A  8B 3B                     MOV EDI,dword ptr [EBX]
00758A8C  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_00758a8f:
00758A8F  33 C9                     XOR ECX,ECX
00758A91  48                        DEC EAX
00758A92  8A 2F                     MOV CH,byte ptr [EDI]
00758A94  47                        INC EDI
00758A95  85 C0                     TEST EAX,EAX
00758A97  8B F1                     MOV ESI,ECX
00758A99  75 17                     JNZ 0x00758ab2
00758A9B  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00758A9E  52                        PUSH EDX
00758A9F  FF 53 0C                  CALL dword ptr [EBX + 0xc]
00758AA2  85 C0                     TEST EAX,EAX
00758AA4  0F 84 00 01 00 00         JZ 0x00758baa
00758AAA  8B 43 04                  MOV EAX,dword ptr [EBX + 0x4]
00758AAD  8B 3B                     MOV EDI,dword ptr [EBX]
00758AAF  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_00758ab2:
00758AB2  33 C9                     XOR ECX,ECX
00758AB4  48                        DEC EAX
00758AB5  8A 0F                     MOV CL,byte ptr [EDI]
00758AB7  03 F1                     ADD ESI,ECX
00758AB9  47                        INC EDI
00758ABA  83 EE 02                  SUB ESI,0x2
00758ABD  85 F6                     TEST ESI,ESI
00758ABF  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
00758AC2  0F 8E CF 00 00 00         JLE 0x00758b97
LAB_00758ac8:
00758AC8  85 C0                     TEST EAX,EAX
00758ACA  75 17                     JNZ 0x00758ae3
00758ACC  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00758ACF  52                        PUSH EDX
00758AD0  FF 53 0C                  CALL dword ptr [EBX + 0xc]
00758AD3  85 C0                     TEST EAX,EAX
00758AD5  0F 84 CF 00 00 00         JZ 0x00758baa
00758ADB  8B 43 04                  MOV EAX,dword ptr [EBX + 0x4]
00758ADE  8B 3B                     MOV EDI,dword ptr [EBX]
00758AE0  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_00758ae3:
00758AE3  33 C9                     XOR ECX,ECX
00758AE5  48                        DEC EAX
00758AE6  8A 0F                     MOV CL,byte ptr [EDI]
00758AE8  47                        INC EDI
00758AE9  85 C0                     TEST EAX,EAX
00758AEB  8B F1                     MOV ESI,ECX
00758AED  75 17                     JNZ 0x00758b06
00758AEF  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00758AF2  52                        PUSH EDX
00758AF3  FF 53 0C                  CALL dword ptr [EBX + 0xc]
00758AF6  85 C0                     TEST EAX,EAX
00758AF8  0F 84 AC 00 00 00         JZ 0x00758baa
00758AFE  8B 43 04                  MOV EAX,dword ptr [EBX + 0x4]
00758B01  8B 3B                     MOV EDI,dword ptr [EBX]
00758B03  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_00758b06:
00758B06  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00758B09  33 DB                     XOR EBX,EBX
00758B0B  8A 1F                     MOV BL,byte ptr [EDI]
00758B0D  48                        DEC EAX
00758B0E  47                        INC EDI
00758B0F  83 EA 02                  SUB EDX,0x2
00758B12  85 F6                     TEST ESI,ESI
00758B14  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00758B17  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
00758B1A  7C 05                     JL 0x00758b21
00758B1C  83 FE 20                  CMP ESI,0x20
00758B1F  7C 1B                     JL 0x00758b3c
LAB_00758b21:
00758B21  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00758B27  68 D4 01 00 00            PUSH 0x1d4
00758B2C  68 B0 2D 7F 00            PUSH 0x7f2db0
00758B31  51                        PUSH ECX
00758B32  6A 1A                     PUSH 0x1a
00758B34  E8 07 D3 F4 FF            CALL 0x006a5e40
00758B39  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_00758b3c:
00758B3C  83 FE 10                  CMP ESI,0x10
00758B3F  7C 0C                     JL 0x00758b4d
00758B41  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00758B44  88 9C 16 EC 00 00 00      MOV byte ptr [ESI + EDX*0x1 + 0xec],BL
00758B4B  EB 3C                     JMP 0x00758b89
LAB_00758b4d:
00758B4D  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00758B50  8A D3                     MOV DL,BL
00758B52  80 E2 0F                  AND DL,0xf
00758B55  C1 FB 04                  SAR EBX,0x4
00758B58  88 94 0E DC 00 00 00      MOV byte ptr [ESI + ECX*0x1 + 0xdc],DL
00758B5F  88 9C 0E EC 00 00 00      MOV byte ptr [ESI + ECX*0x1 + 0xec],BL
00758B66  38 9C 0E DC 00 00 00      CMP byte ptr [ESI + ECX*0x1 + 0xdc],BL
00758B6D  76 1A                     JBE 0x00758b89
00758B6F  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00758B74  68 DC 01 00 00            PUSH 0x1dc
00758B79  68 B0 2D 7F 00            PUSH 0x7f2db0
00758B7E  50                        PUSH EAX
00758B7F  6A 1B                     PUSH 0x1b
00758B81  E8 BA D2 F4 FF            CALL 0x006a5e40
00758B86  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_00758b89:
00758B89  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00758B8C  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
00758B8F  85 C9                     TEST ECX,ECX
00758B91  0F 8F 31 FF FF FF         JG 0x00758ac8
LAB_00758b97:
00758B97  89 3B                     MOV dword ptr [EBX],EDI
00758B99  5F                        POP EDI
00758B9A  89 43 04                  MOV dword ptr [EBX + 0x4],EAX
00758B9D  5E                        POP ESI
00758B9E  B8 01 00 00 00            MOV EAX,0x1
00758BA3  5B                        POP EBX
00758BA4  8B E5                     MOV ESP,EBP
00758BA6  5D                        POP EBP
00758BA7  C2 04 00                  RET 0x4
LAB_00758baa:
00758BAA  5F                        POP EDI
00758BAB  5E                        POP ESI
00758BAC  33 C0                     XOR EAX,EAX
00758BAE  5B                        POP EBX
00758BAF  8B E5                     MOV ESP,EBP
00758BB1  5D                        POP EBP
00758BB2  C2 04 00                  RET 0x4
