FUN_00668aa0:
00668AA0  55                        PUSH EBP
00668AA1  8B EC                     MOV EBP,ESP
00668AA3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00668AA6  3D 0D 08 00 00            CMP EAX,0x80d
00668AAB  0F 8F 51 01 00 00         JG 0x00668c02
00668AB1  3D 0C 08 00 00            CMP EAX,0x80c
00668AB6  0F 8D 63 01 00 00         JGE 0x00668c1f
00668ABC  3D F5 07 00 00            CMP EAX,0x7f5
00668AC1  0F 8F C0 00 00 00         JG 0x00668b87
00668AC7  0F 84 CF 00 00 00         JZ 0x00668b9c
00668ACD  3D 8E 03 00 00            CMP EAX,0x38e
00668AD2  7F 66                     JG 0x00668b3a
00668AD4  74 4A                     JZ 0x00668b20
00668AD6  2D 88 03 00 00            SUB EAX,0x388
00668ADB  74 25                     JZ 0x00668b02
00668ADD  48                        DEC EAX
00668ADE  0F 85 12 02 00 00         JNZ 0x00668cf6
00668AE4  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00668AE7  48                        DEC EAX
00668AE8  0F 85 08 02 00 00         JNZ 0x00668cf6
00668AEE  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00668AF1  C6 00 01                  MOV byte ptr [EAX],0x1
00668AF4  C7 40 01 05 00 00 00      MOV dword ptr [EAX + 0x1],0x5
00668AFB  B8 01 00 00 00            MOV EAX,0x1
00668B00  5D                        POP EBP
00668B01  C3                        RET
LAB_00668b02:
00668B02  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00668B05  48                        DEC EAX
00668B06  0F 85 EA 01 00 00         JNZ 0x00668cf6
00668B0C  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00668B0F  C6 00 01                  MOV byte ptr [EAX],0x1
00668B12  C7 40 01 0A 00 00 00      MOV dword ptr [EAX + 0x1],0xa
00668B19  B8 01 00 00 00            MOV EAX,0x1
00668B1E  5D                        POP EBP
00668B1F  C3                        RET
LAB_00668b20:
00668B20  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00668B23  83 F8 06                  CMP EAX,0x6
00668B26  0F 8C CA 01 00 00         JL 0x00668cf6
00668B2C  83 F8 08                  CMP EAX,0x8
00668B2F  0F 8F C1 01 00 00         JG 0x00668cf6
00668B35  E9 A8 01 00 00            JMP 0x00668ce2
LAB_00668b3a:
00668B3A  3D 8F 03 00 00            CMP EAX,0x38f
00668B3F  74 2C                     JZ 0x00668b6d
00668B41  3D ED 07 00 00            CMP EAX,0x7ed
00668B46  0F 8E AA 01 00 00         JLE 0x00668cf6
00668B4C  3D F0 07 00 00            CMP EAX,0x7f0
00668B51  0F 8F 9F 01 00 00         JG 0x00668cf6
00668B57  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00668B5A  83 C0 FD                  ADD EAX,-0x3
00668B5D  83 F8 06                  CMP EAX,0x6
00668B60  0F 87 90 01 00 00         JA 0x00668cf6
switchD_00668b66::switchD:
00668B66  FF 24 85 FC 8C 66 00      JMP dword ptr [EAX*0x4 + 0x668cfc]
LAB_00668b6d:
00668B6D  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00668B70  83 F8 04                  CMP EAX,0x4
00668B73  0F 8C 7D 01 00 00         JL 0x00668cf6
00668B79  83 F8 05                  CMP EAX,0x5
00668B7C  0F 8F 74 01 00 00         JG 0x00668cf6
00668B82  E9 5B 01 00 00            JMP 0x00668ce2
LAB_00668b87:
00668B87  05 0A F8 FF FF            ADD EAX,0xfffff80a
00668B8C  83 F8 05                  CMP EAX,0x5
00668B8F  0F 87 61 01 00 00         JA 0x00668cf6
switchD_00668b95::switchD:
00668B95  FF 24 85 18 8D 66 00      JMP dword ptr [EAX*0x4 + 0x668d18]
switchD_00668b95::caseD_7fb:
00668B9C  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00668B9F  8D 41 FF                  LEA EAX,[ECX + -0x1]
00668BA2  83 F8 05                  CMP EAX,0x5
00668BA5  0F 87 4B 01 00 00         JA 0x00668cf6
switchD_00668bab::switchD:
00668BAB  FF 24 85 30 8D 66 00      JMP dword ptr [EAX*0x4 + 0x668d30]
switchD_00668b95::caseD_7f6:
00668BB2  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00668BB5  8D 42 FE                  LEA EAX,[EDX + -0x2]
00668BB8  83 F8 07                  CMP EAX,0x7
00668BBB  0F 87 35 01 00 00         JA 0x00668cf6
switchD_00668bc1::switchD:
00668BC1  FF 24 85 48 8D 66 00      JMP dword ptr [EAX*0x4 + 0x668d48]
switchD_00668b95::caseD_7f8:
00668BC8  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00668BCB  83 F8 07                  CMP EAX,0x7
00668BCE  0F 87 22 01 00 00         JA 0x00668cf6
switchD_00668bd4::switchD:
00668BD4  FF 24 85 68 8D 66 00      JMP dword ptr [EAX*0x4 + 0x668d68]
switchD_00668b95::caseD_7f9:
00668BDB  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00668BDE  83 F8 07                  CMP EAX,0x7
00668BE1  0F 87 0F 01 00 00         JA 0x00668cf6
switchD_00668be7::switchD:
00668BE7  FF 24 85 88 8D 66 00      JMP dword ptr [EAX*0x4 + 0x668d88]
switchD_00668b95::caseD_7fa:
00668BEE  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00668BF1  48                        DEC EAX
00668BF2  83 F8 09                  CMP EAX,0x9
00668BF5  0F 87 FB 00 00 00         JA 0x00668cf6
switchD_00668bfb::switchD:
00668BFB  FF 24 85 A8 8D 66 00      JMP dword ptr [EAX*0x4 + 0x668da8]
LAB_00668c02:
00668C02  05 F2 F7 FF FF            ADD EAX,0xfffff7f2
00668C07  83 F8 21                  CMP EAX,0x21
00668C0A  0F 87 E6 00 00 00         JA 0x00668cf6
00668C10  33 C9                     XOR ECX,ECX
00668C12  8A 88 F8 8D 66 00         MOV CL,byte ptr [EAX + 0x668df8]
switchD_00668c18::switchD:
00668C18  FF 24 8D D0 8D 66 00      JMP dword ptr [ECX*0x4 + 0x668dd0]
switchD_00668c18::caseD_810:
00668C1F  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00668C22  83 F8 02                  CMP EAX,0x2
00668C25  0F 8C CB 00 00 00         JL 0x00668cf6
00668C2B  83 F8 05                  CMP EAX,0x5
00668C2E  EB 0E                     JMP 0x00668c3e
switchD_00668c18::caseD_80e:
00668C30  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00668C33  85 C0                     TEST EAX,EAX
00668C35  0F 8E BB 00 00 00         JLE 0x00668cf6
00668C3B  83 F8 04                  CMP EAX,0x4
LAB_00668c3e:
00668C3E  0F 8F B2 00 00 00         JG 0x00668cf6
FUN_00668aa0::cf_common_exit_00668C44:
00668C44  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00668C47  C6 00 01                  MOV byte ptr [EAX],0x1
00668C4A  C7 40 01 00 00 00 00      MOV dword ptr [EAX + 0x1],0x0
00668C51  B8 01 00 00 00            MOV EAX,0x1
00668C56  5D                        POP EBP
00668C57  C3                        RET
switchD_00668c18::caseD_82a:
00668C58  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00668C5B  83 E8 02                  SUB EAX,0x2
00668C5E  0F 85 92 00 00 00         JNZ 0x00668cf6
FUN_00668aa0::cf_common_exit_00668C64:
00668C64  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00668C67  C6 00 03                  MOV byte ptr [EAX],0x3
00668C6A  66 C7 40 01 00 00         MOV word ptr [EAX + 0x1],0x0
00668C70  B8 01 00 00 00            MOV EAX,0x1
00668C75  5D                        POP EBP
00668C76  C3                        RET
switchD_00668c18::caseD_82b:
00668C77  83 7D 0C 03               CMP dword ptr [EBP + 0xc],0x3
00668C7B  EB 09                     JMP 0x00668c86
switchD_00668c18::caseD_82c:
00668C7D  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00668C80  83 E8 02                  SUB EAX,0x2
00668C83  74 3B                     JZ 0x00668cc0
00668C85  48                        DEC EAX
LAB_00668c86:
00668C86  75 6E                     JNZ 0x00668cf6
FUN_00668aa0::cf_common_exit_00668C88:
00668C88  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00668C8B  C6 00 01                  MOV byte ptr [EAX],0x1
00668C8E  C7 40 01 FF FF FF FF      MOV dword ptr [EAX + 0x1],0xffffffff
00668C95  B8 01 00 00 00            MOV EAX,0x1
00668C9A  5D                        POP EBP
00668C9B  C3                        RET
switchD_00668c18::caseD_82e:
00668C9C  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00668C9F  8D 42 FE                  LEA EAX,[EDX + -0x2]
00668CA2  83 F8 09                  CMP EAX,0x9
00668CA5  77 4F                     JA 0x00668cf6
switchD_00668ca7::switchD:
00668CA7  FF 24 85 1C 8E 66 00      JMP dword ptr [EAX*0x4 + 0x668e1c]
switchD_00668c18::caseD_82f:
00668CAE  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00668CB1  83 C0 FC                  ADD EAX,-0x4
00668CB4  83 F8 03                  CMP EAX,0x3
00668CB7  77 3D                     JA 0x00668cf6
switchD_00668cb9::switchD:
00668CB9  FF 24 85 44 8E 66 00      JMP dword ptr [EAX*0x4 + 0x668e44]
FUN_00668aa0::cf_common_exit_00668CC0:
00668CC0  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00668CC3  C6 00 01                  MOV byte ptr [EAX],0x1
00668CC6  C7 40 01 FF FF FF 3F      MOV dword ptr [EAX + 0x1],0x3fffffff
00668CCD  B8 01 00 00 00            MOV EAX,0x1
00668CD2  5D                        POP EBP
00668CD3  C3                        RET
switchD_00668c18::caseD_819:
00668CD4  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00668CD7  83 E8 02                  SUB EAX,0x2
00668CDA  EB 04                     JMP 0x00668ce0
switchD_00668c18::caseD_81d:
00668CDC  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00668CDF  48                        DEC EAX
LAB_00668ce0:
00668CE0  75 14                     JNZ 0x00668cf6
LAB_00668ce2:
00668CE2  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00668CE5  C6 00 01                  MOV byte ptr [EAX],0x1
00668CE8  C7 40 01 01 00 00 00      MOV dword ptr [EAX + 0x1],0x1
00668CEF  B8 01 00 00 00            MOV EAX,0x1
00668CF4  5D                        POP EBP
00668CF5  C3                        RET
switchD_00668b66::default:
00668CF6  33 C0                     XOR EAX,EAX
00668CF8  5D                        POP EBP
00668CF9  C3                        RET
