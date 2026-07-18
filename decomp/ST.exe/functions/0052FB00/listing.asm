FUN_0052fb00:
0052FB00  55                        PUSH EBP
0052FB01  8B EC                     MOV EBP,ESP
0052FB03  B8 44 1C 00 00            MOV EAX,0x1c44
0052FB08  E8 33 DF 1F 00            CALL 0x0072da40
0052FB0D  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0052FB12  53                        PUSH EBX
0052FB13  56                        PUSH ESI
0052FB14  89 4D DC                  MOV dword ptr [EBP + -0x24],ECX
0052FB17  57                        PUSH EDI
0052FB18  8D 95 F8 FE FF FF         LEA EDX,[EBP + 0xfffffef8]
0052FB1E  8D 8D F4 FE FF FF         LEA ECX,[EBP + 0xfffffef4]
0052FB24  6A 00                     PUSH 0x0
0052FB26  52                        PUSH EDX
0052FB27  89 85 F4 FE FF FF         MOV dword ptr [EBP + 0xfffffef4],EAX
0052FB2D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0052FB33  E8 B8 DC 1F 00            CALL 0x0072d7f0
0052FB38  8B F0                     MOV ESI,EAX
0052FB3A  83 C4 08                  ADD ESP,0x8
0052FB3D  85 F6                     TEST ESI,ESI
0052FB3F  0F 85 CC 20 00 00         JNZ 0x00531c11
0052FB45  8B 5D DC                  MOV EBX,dword ptr [EBP + -0x24]
0052FB48  BE 0A 00 00 00            MOV ESI,0xa
0052FB4D  C6 45 FC 0A               MOV byte ptr [EBP + -0x4],0xa
0052FB51  8D BB B5 01 00 00         LEA EDI,[EBX + 0x1b5]
LAB_0052fb57:
0052FB57  8B 07                     MOV EAX,dword ptr [EDI]
0052FB59  85 C0                     TEST EAX,EAX
0052FB5B  74 09                     JZ 0x0052fb66
0052FB5D  8B 4B 0C                  MOV ECX,dword ptr [EBX + 0xc]
0052FB60  50                        PUSH EAX
0052FB61  E8 4A 5B 1B 00            CALL 0x006e56b0
LAB_0052fb66:
0052FB66  C7 07 00 00 00 00         MOV dword ptr [EDI],0x0
0052FB6C  83 C7 04                  ADD EDI,0x4
0052FB6F  4E                        DEC ESI
0052FB70  75 E5                     JNZ 0x0052fb57
0052FB72  8B 83 84 01 00 00         MOV EAX,dword ptr [EBX + 0x184]
0052FB78  8B 4B 68                  MOV ECX,dword ptr [EBX + 0x68]
0052FB7B  50                        PUSH EAX
0052FB7C  6A 01                     PUSH 0x1
0052FB7E  6A 00                     PUSH 0x0
0052FB80  6A 00                     PUSH 0x0
0052FB82  51                        PUSH ECX
0052FB83  E8 A1 36 ED FF            CALL 0x00403229
0052FB88  8B 53 68                  MOV EDX,dword ptr [EBX + 0x68]
0052FB8B  83 C4 14                  ADD ESP,0x14
0052FB8E  8B 8B 7C 01 00 00         MOV ECX,dword ptr [EBX + 0x17c]
0052FB94  6A 0C                     PUSH 0xc
0052FB96  68 C6 00 00 00            PUSH 0xc6
0052FB9B  6A 02                     PUSH 0x2
0052FB9D  6A 31                     PUSH 0x31
0052FB9F  6A 00                     PUSH 0x0
0052FBA1  52                        PUSH EDX
0052FBA2  E8 E9 0E 1E 00            CALL 0x00710a90
0052FBA7  33 C0                     XOR EAX,EAX
0052FBA9  8A 83 A4 01 00 00         MOV AL,byte ptr [EBX + 0x1a4]
0052FBAF  48                        DEC EAX
0052FBB0  83 F8 0D                  CMP EAX,0xd
0052FBB3  0F 87 03 0A 00 00         JA 0x005305bc
switchD_0052fbb9::switchD:
0052FBB9  FF 24 85 5C 1C 53 00      JMP dword ptr [EAX*0x4 + 0x531c5c]
switchD_0052fbb9::caseD_0:
0052FBC0  A1 18 76 80 00            MOV EAX,[0x00807618]
0052FBC5  6A 00                     PUSH 0x0
0052FBC7  6A FF                     PUSH -0x1
0052FBC9  6A FE                     PUSH -0x2
0052FBCB  50                        PUSH EAX
0052FBCC  68 80 3E 00 00            PUSH 0x3e80
0052FBD1  E9 83 09 00 00            JMP 0x00530559
switchD_0052fbb9::caseD_4:
0052FBD6  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
0052FBDC  6A 00                     PUSH 0x0
0052FBDE  6A FF                     PUSH -0x1
0052FBE0  6A FE                     PUSH -0x2
0052FBE2  51                        PUSH ECX
0052FBE3  68 A8 3E 00 00            PUSH 0x3ea8
0052FBE8  E8 53 05 18 00            CALL 0x006b0140
0052FBED  8B 8B 7C 01 00 00         MOV ECX,dword ptr [EBX + 0x17c]
0052FBF3  50                        PUSH EAX
0052FBF4  E8 C7 1D 1E 00            CALL 0x007119c0
0052FBF9  8B 53 68                  MOV EDX,dword ptr [EBX + 0x68]
0052FBFC  8B 8B 80 01 00 00         MOV ECX,dword ptr [EBX + 0x180]
0052FC02  6A 6A                     PUSH 0x6a
0052FC04  68 EE 00 00 00            PUSH 0xee
0052FC09  6A 13                     PUSH 0x13
0052FC0B  6A 1D                     PUSH 0x1d
0052FC0D  6A 00                     PUSH 0x0
0052FC0F  52                        PUSH EDX
0052FC10  E8 7B 0E 1E 00            CALL 0x00710a90
0052FC15  33 C0                     XOR EAX,EAX
0052FC17  8A 83 AB 01 00 00         MOV AL,byte ptr [EBX + 0x1ab]
0052FC1D  48                        DEC EAX
0052FC1E  83 F8 09                  CMP EAX,0x9
0052FC21  0F 87 4E 03 00 00         JA 0x0052ff75
0052FC27  33 C9                     XOR ECX,ECX
0052FC29  8A 88 A4 1C 53 00         MOV CL,byte ptr [EAX + 0x531ca4]
switchD_0052fc2f::switchD:
0052FC2F  FF 24 8D 94 1C 53 00      JMP dword ptr [ECX*0x4 + 0x531c94]
switchD_0052fc2f::caseD_1:
0052FC36  B9 41 00 00 00            MOV ECX,0x41
0052FC3B  33 C0                     XOR EAX,EAX
0052FC3D  8D BD 80 F6 FF FF         LEA EDI,[EBP + 0xfffff680]
0052FC43  F3 AB                     STOSD.REP ES:EDI
0052FC45  8B 8B 80 01 00 00         MOV ECX,dword ptr [EBX + 0x180]
0052FC4B  8D BB F5 01 00 00         LEA EDI,[EBX + 0x1f5]
0052FC51  57                        PUSH EDI
0052FC52  E8 B9 14 1E 00            CALL 0x00711110
0052FC57  3D EE 00 00 00            CMP EAX,0xee
0052FC5C  0F 8C E8 00 00 00         JL 0x0052fd4a
0052FC62  83 C9 FF                  OR ECX,0xffffffff
0052FC65  33 C0                     XOR EAX,EAX
0052FC67  F2 AE                     SCASB.REPNE ES:EDI
0052FC69  F7 D1                     NOT ECX
0052FC6B  49                        DEC ECX
0052FC6C  C7 45 D0 0A 00 00 00      MOV dword ptr [EBP + -0x30],0xa
0052FC73  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
LAB_0052fc76:
0052FC76  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
0052FC79  8D 95 80 F6 FF FF         LEA EDX,[EBP + 0xfffff680]
0052FC7F  40                        INC EAX
0052FC80  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
0052FC83  50                        PUSH EAX
0052FC84  8D 83 F5 01 00 00         LEA EAX,[EBX + 0x1f5]
0052FC8A  50                        PUSH EAX
0052FC8B  52                        PUSH EDX
0052FC8C  E8 AF E6 1F 00            CALL 0x0072e340
0052FC91  BF 78 72 7C 00            MOV EDI,0x7c7278
0052FC96  83 C9 FF                  OR ECX,0xffffffff
0052FC99  33 C0                     XOR EAX,EAX
0052FC9B  83 C4 0C                  ADD ESP,0xc
0052FC9E  F2 AE                     SCASB.REPNE ES:EDI
0052FCA0  F7 D1                     NOT ECX
0052FCA2  2B F9                     SUB EDI,ECX
0052FCA4  8D 95 80 F6 FF FF         LEA EDX,[EBP + 0xfffff680]
0052FCAA  8B F7                     MOV ESI,EDI
0052FCAC  8B FA                     MOV EDI,EDX
0052FCAE  8B D1                     MOV EDX,ECX
0052FCB0  83 C9 FF                  OR ECX,0xffffffff
0052FCB3  F2 AE                     SCASB.REPNE ES:EDI
0052FCB5  8B CA                     MOV ECX,EDX
0052FCB7  4F                        DEC EDI
0052FCB8  C1 E9 02                  SHR ECX,0x2
0052FCBB  F3 A5                     MOVSD.REP ES:EDI,ESI
0052FCBD  8B CA                     MOV ECX,EDX
0052FCBF  8D 85 80 F6 FF FF         LEA EAX,[EBP + 0xfffff680]
0052FCC5  83 E1 03                  AND ECX,0x3
0052FCC8  50                        PUSH EAX
0052FCC9  F3 A4                     MOVSB.REP ES:EDI,ESI
0052FCCB  8B 8B 80 01 00 00         MOV ECX,dword ptr [EBX + 0x180]
0052FCD1  E8 3A 14 1E 00            CALL 0x00711110
0052FCD6  3D EE 00 00 00            CMP EAX,0xee
0052FCDB  7D 0A                     JGE 0x0052fce7
0052FCDD  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
0052FCE0  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0052FCE3  3B C8                     CMP ECX,EAX
0052FCE5  7C 8F                     JL 0x0052fc76
LAB_0052fce7:
0052FCE7  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
0052FCEA  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
0052FCED  3B C2                     CMP EAX,EDX
0052FCEF  74 59                     JZ 0x0052fd4a
0052FCF1  B9 41 00 00 00            MOV ECX,0x41
0052FCF6  33 C0                     XOR EAX,EAX
0052FCF8  8D BD 80 F6 FF FF         LEA EDI,[EBP + 0xfffff680]
0052FCFE  8D 95 80 F6 FF FF         LEA EDX,[EBP + 0xfffff680]
0052FD04  F3 AB                     STOSD.REP ES:EDI
0052FD06  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
0052FD09  8D 83 F5 01 00 00         LEA EAX,[EBX + 0x1f5]
0052FD0F  83 C1 FD                  ADD ECX,-0x3
0052FD12  51                        PUSH ECX
0052FD13  50                        PUSH EAX
0052FD14  52                        PUSH EDX
0052FD15  E8 26 E6 1F 00            CALL 0x0072e340
0052FD1A  BF 74 72 7C 00            MOV EDI,0x7c7274
0052FD1F  83 C9 FF                  OR ECX,0xffffffff
0052FD22  33 C0                     XOR EAX,EAX
0052FD24  83 C4 0C                  ADD ESP,0xc
0052FD27  F2 AE                     SCASB.REPNE ES:EDI
0052FD29  F7 D1                     NOT ECX
0052FD2B  2B F9                     SUB EDI,ECX
0052FD2D  8D 95 80 F6 FF FF         LEA EDX,[EBP + 0xfffff680]
0052FD33  8B F7                     MOV ESI,EDI
0052FD35  8B FA                     MOV EDI,EDX
0052FD37  8B D1                     MOV EDX,ECX
0052FD39  83 C9 FF                  OR ECX,0xffffffff
0052FD3C  F2 AE                     SCASB.REPNE ES:EDI
0052FD3E  8B CA                     MOV ECX,EDX
0052FD40  4F                        DEC EDI
0052FD41  C1 E9 02                  SHR ECX,0x2
0052FD44  F3 A5                     MOVSD.REP ES:EDI,ESI
0052FD46  8B CA                     MOV ECX,EDX
0052FD48  EB 24                     JMP 0x0052fd6e
LAB_0052fd4a:
0052FD4A  8D BB F5 01 00 00         LEA EDI,[EBX + 0x1f5]
0052FD50  83 C9 FF                  OR ECX,0xffffffff
0052FD53  33 C0                     XOR EAX,EAX
0052FD55  8D 95 80 F6 FF FF         LEA EDX,[EBP + 0xfffff680]
0052FD5B  F2 AE                     SCASB.REPNE ES:EDI
0052FD5D  F7 D1                     NOT ECX
0052FD5F  2B F9                     SUB EDI,ECX
0052FD61  8B C1                     MOV EAX,ECX
0052FD63  8B F7                     MOV ESI,EDI
0052FD65  8B FA                     MOV EDI,EDX
0052FD67  C1 E9 02                  SHR ECX,0x2
0052FD6A  F3 A5                     MOVSD.REP ES:EDI,ESI
0052FD6C  8B C8                     MOV ECX,EAX
LAB_0052fd6e:
0052FD6E  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
0052FD74  8B 83 A5 01 00 00         MOV EAX,dword ptr [EBX + 0x1a5]
0052FD7A  83 E1 03                  AND ECX,0x3
0052FD7D  F3 A4                     MOVSB.REP ES:EDI,ESI
0052FD7F  8D 8D 80 F6 FF FF         LEA ECX,[EBP + 0xfffff680]
0052FD85  8D 73 6C                  LEA ESI,[EBX + 0x6c]
0052FD88  51                        PUSH ECX
0052FD89  52                        PUSH EDX
0052FD8A  50                        PUSH EAX
0052FD8B  E8 B0 03 18 00            CALL 0x006b0140
0052FD90  50                        PUSH EAX
0052FD91  56                        PUSH ESI
0052FD92  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
0052FD98  83 C4 0C                  ADD ESP,0xc
0052FD9B  E9 08 02 00 00            JMP 0x0052ffa8
switchD_0052fc2f::caseD_7:
0052FDA0  B9 41 00 00 00            MOV ECX,0x41
0052FDA5  33 C0                     XOR EAX,EAX
0052FDA7  8D BD 84 F7 FF FF         LEA EDI,[EBP + 0xfffff784]
0052FDAD  33 D2                     XOR EDX,EDX
0052FDAF  8A 15 AF 8A 80 00         MOV DL,byte ptr [0x00808aaf]
0052FDB5  F3 AB                     STOSD.REP ES:EDI
0052FDB7  33 FF                     XOR EDI,EDI
0052FDB9  33 C9                     XOR ECX,ECX
0052FDBB  85 D2                     TEST EDX,EDX
0052FDBD  89 7D D4                  MOV dword ptr [EBP + -0x2c],EDI
0052FDC0  7E 29                     JLE 0x0052fdeb
0052FDC2  A1 38 2A 80 00            MOV EAX,[0x00802a38]
0052FDC7  8B B0 F4 00 00 00         MOV ESI,dword ptr [EAX + 0xf4]
0052FDCD  B8 B0 8A 80 00            MOV EAX,0x808ab0
LAB_0052fdd2:
0052FDD2  39 70 40                  CMP dword ptr [EAX + 0x40],ESI
0052FDD5  8B F8                     MOV EDI,EAX
0052FDD7  89 7D D4                  MOV dword ptr [EBP + -0x2c],EDI
0052FDDA  74 0F                     JZ 0x0052fdeb
0052FDDC  33 FF                     XOR EDI,EDI
0052FDDE  41                        INC ECX
0052FDDF  05 9C 00 00 00            ADD EAX,0x9c
0052FDE4  3B CA                     CMP ECX,EDX
0052FDE6  89 7D D4                  MOV dword ptr [EBP + -0x2c],EDI
0052FDE9  7C E7                     JL 0x0052fdd2
LAB_0052fdeb:
0052FDEB  85 FF                     TEST EDI,EDI
0052FDED  0F 84 04 01 00 00         JZ 0x0052fef7
0052FDF3  8B 8B 80 01 00 00         MOV ECX,dword ptr [EBX + 0x180]
0052FDF9  57                        PUSH EDI
0052FDFA  E8 11 13 1E 00            CALL 0x00711110
0052FDFF  3D C8 00 00 00            CMP EAX,0xc8
0052FE04  0F 8C 8C 00 00 00         JL 0x0052fe96
0052FE0A  83 C9 FF                  OR ECX,0xffffffff
0052FE0D  33 C0                     XOR EAX,EAX
0052FE0F  F2 AE                     SCASB.REPNE ES:EDI
0052FE11  F7 D1                     NOT ECX
0052FE13  49                        DEC ECX
0052FE14  C7 45 F8 0A 00 00 00      MOV dword ptr [EBP + -0x8],0xa
0052FE1B  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
LAB_0052fe1e:
0052FE1E  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0052FE21  8B 4D D4                  MOV ECX,dword ptr [EBP + -0x2c]
0052FE24  40                        INC EAX
0052FE25  8D 95 84 F7 FF FF         LEA EDX,[EBP + 0xfffff784]
0052FE2B  50                        PUSH EAX
0052FE2C  51                        PUSH ECX
0052FE2D  52                        PUSH EDX
0052FE2E  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0052FE31  E8 0A E5 1F 00            CALL 0x0072e340
0052FE36  BF 78 72 7C 00            MOV EDI,0x7c7278
0052FE3B  83 C9 FF                  OR ECX,0xffffffff
0052FE3E  33 C0                     XOR EAX,EAX
0052FE40  83 C4 0C                  ADD ESP,0xc
0052FE43  F2 AE                     SCASB.REPNE ES:EDI
0052FE45  F7 D1                     NOT ECX
0052FE47  2B F9                     SUB EDI,ECX
0052FE49  8D 95 84 F7 FF FF         LEA EDX,[EBP + 0xfffff784]
0052FE4F  8B F7                     MOV ESI,EDI
0052FE51  8B FA                     MOV EDI,EDX
0052FE53  8B D1                     MOV EDX,ECX
0052FE55  83 C9 FF                  OR ECX,0xffffffff
0052FE58  F2 AE                     SCASB.REPNE ES:EDI
0052FE5A  8B CA                     MOV ECX,EDX
0052FE5C  4F                        DEC EDI
0052FE5D  C1 E9 02                  SHR ECX,0x2
0052FE60  F3 A5                     MOVSD.REP ES:EDI,ESI
0052FE62  8B CA                     MOV ECX,EDX
0052FE64  8D 85 84 F7 FF FF         LEA EAX,[EBP + 0xfffff784]
0052FE6A  83 E1 03                  AND ECX,0x3
0052FE6D  50                        PUSH EAX
0052FE6E  F3 A4                     MOVSB.REP ES:EDI,ESI
0052FE70  8B 8B 80 01 00 00         MOV ECX,dword ptr [EBX + 0x180]
0052FE76  E8 95 12 1E 00            CALL 0x00711110
0052FE7B  3D C8 00 00 00            CMP EAX,0xc8
0052FE80  7D 0A                     JGE 0x0052fe8c
0052FE82  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0052FE85  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0052FE88  3B C8                     CMP ECX,EAX
0052FE8A  7C 92                     JL 0x0052fe1e
LAB_0052fe8c:
0052FE8C  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
0052FE8F  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0052FE92  3B C2                     CMP EAX,EDX
0052FE94  75 0B                     JNZ 0x0052fea1
LAB_0052fe96:
0052FE96  8B 7D D4                  MOV EDI,dword ptr [EBP + -0x2c]
0052FE99  8D 95 84 F7 FF FF         LEA EDX,[EBP + 0xfffff784]
0052FE9F  EB 61                     JMP 0x0052ff02
LAB_0052fea1:
0052FEA1  8B 55 D4                  MOV EDX,dword ptr [EBP + -0x2c]
0052FEA4  B9 41 00 00 00            MOV ECX,0x41
0052FEA9  33 C0                     XOR EAX,EAX
0052FEAB  8D BD 84 F7 FF FF         LEA EDI,[EBP + 0xfffff784]
0052FEB1  F3 AB                     STOSD.REP ES:EDI
0052FEB3  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0052FEB6  8D 85 84 F7 FF FF         LEA EAX,[EBP + 0xfffff784]
0052FEBC  83 C1 FD                  ADD ECX,-0x3
0052FEBF  51                        PUSH ECX
0052FEC0  52                        PUSH EDX
0052FEC1  50                        PUSH EAX
0052FEC2  E8 79 E4 1F 00            CALL 0x0072e340
0052FEC7  BF 74 72 7C 00            MOV EDI,0x7c7274
0052FECC  83 C9 FF                  OR ECX,0xffffffff
0052FECF  33 C0                     XOR EAX,EAX
0052FED1  83 C4 0C                  ADD ESP,0xc
0052FED4  F2 AE                     SCASB.REPNE ES:EDI
0052FED6  F7 D1                     NOT ECX
0052FED8  2B F9                     SUB EDI,ECX
0052FEDA  8D 95 84 F7 FF FF         LEA EDX,[EBP + 0xfffff784]
0052FEE0  8B F7                     MOV ESI,EDI
0052FEE2  8B FA                     MOV EDI,EDX
0052FEE4  8B D1                     MOV EDX,ECX
0052FEE6  83 C9 FF                  OR ECX,0xffffffff
0052FEE9  F2 AE                     SCASB.REPNE ES:EDI
0052FEEB  8B CA                     MOV ECX,EDX
0052FEED  4F                        DEC EDI
0052FEEE  C1 E9 02                  SHR ECX,0x2
0052FEF1  F3 A5                     MOVSD.REP ES:EDI,ESI
0052FEF3  8B CA                     MOV ECX,EDX
0052FEF5  EB 23                     JMP 0x0052ff1a
LAB_0052fef7:
0052FEF7  8D 95 84 F7 FF FF         LEA EDX,[EBP + 0xfffff784]
0052FEFD  BF 74 72 7C 00            MOV EDI,0x7c7274
LAB_0052ff02:
0052FF02  83 C9 FF                  OR ECX,0xffffffff
0052FF05  33 C0                     XOR EAX,EAX
0052FF07  F2 AE                     SCASB.REPNE ES:EDI
0052FF09  F7 D1                     NOT ECX
0052FF0B  2B F9                     SUB EDI,ECX
0052FF0D  8B C1                     MOV EAX,ECX
0052FF0F  8B F7                     MOV ESI,EDI
0052FF11  8B FA                     MOV EDI,EDX
0052FF13  C1 E9 02                  SHR ECX,0x2
0052FF16  F3 A5                     MOVSD.REP ES:EDI,ESI
0052FF18  8B C8                     MOV ECX,EAX
LAB_0052ff1a:
0052FF1A  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
0052FF20  8B 83 A5 01 00 00         MOV EAX,dword ptr [EBX + 0x1a5]
0052FF26  83 E1 03                  AND ECX,0x3
0052FF29  F3 A4                     MOVSB.REP ES:EDI,ESI
0052FF2B  8D 8D 84 F7 FF FF         LEA ECX,[EBP + 0xfffff784]
0052FF31  8D 73 6C                  LEA ESI,[EBX + 0x6c]
0052FF34  51                        PUSH ECX
0052FF35  52                        PUSH EDX
0052FF36  50                        PUSH EAX
0052FF37  E8 04 02 18 00            CALL 0x006b0140
0052FF3C  50                        PUSH EAX
0052FF3D  56                        PUSH ESI
0052FF3E  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
0052FF44  83 C4 0C                  ADD ESP,0xc
0052FF47  EB 5F                     JMP 0x0052ffa8
switchD_0052fc2f::caseD_a:
0052FF49  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
0052FF4F  8B 83 A5 01 00 00         MOV EAX,dword ptr [EBX + 0x1a5]
0052FF55  33 C9                     XOR ECX,ECX
0052FF57  8D 73 6C                  LEA ESI,[EBX + 0x6c]
0052FF5A  8A 8B AC 01 00 00         MOV CL,byte ptr [EBX + 0x1ac]
0052FF60  51                        PUSH ECX
0052FF61  52                        PUSH EDX
0052FF62  50                        PUSH EAX
0052FF63  E8 D8 01 18 00            CALL 0x006b0140
0052FF68  50                        PUSH EAX
0052FF69  56                        PUSH ESI
0052FF6A  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
0052FF70  83 C4 0C                  ADD ESP,0xc
0052FF73  EB 33                     JMP 0x0052ffa8
switchD_0052fc2f::caseD_3:
0052FF75  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
0052FF7B  8B 93 A5 01 00 00         MOV EDX,dword ptr [EBX + 0x1a5]
0052FF81  51                        PUSH ECX
0052FF82  52                        PUSH EDX
0052FF83  E8 B8 01 18 00            CALL 0x006b0140
0052FF88  8B F8                     MOV EDI,EAX
0052FF8A  83 C9 FF                  OR ECX,0xffffffff
0052FF8D  33 C0                     XOR EAX,EAX
0052FF8F  F2 AE                     SCASB.REPNE ES:EDI
0052FF91  F7 D1                     NOT ECX
0052FF93  2B F9                     SUB EDI,ECX
0052FF95  8B C1                     MOV EAX,ECX
0052FF97  8B F7                     MOV ESI,EDI
0052FF99  8D 7B 6C                  LEA EDI,[EBX + 0x6c]
0052FF9C  C1 E9 02                  SHR ECX,0x2
0052FF9F  F3 A5                     MOVSD.REP ES:EDI,ESI
0052FFA1  8B C8                     MOV ECX,EAX
0052FFA3  83 E1 03                  AND ECX,0x3
0052FFA6  F3 A4                     MOVSB.REP ES:EDI,ESI
LAB_0052ffa8:
0052FFA8  A0 4E 87 80 00            MOV AL,[0x0080874e]
0052FFAD  3C 03                     CMP AL,0x3
0052FFAF  75 07                     JNZ 0x0052ffb8
0052FFB1  B8 05 00 00 00            MOV EAX,0x5
0052FFB6  EB 09                     JMP 0x0052ffc1
LAB_0052ffb8:
0052FFB8  FE C8                     DEC AL
0052FFBA  F6 D8                     NEG AL
0052FFBC  1B C0                     SBB EAX,EAX
0052FFBE  83 E0 07                  AND EAX,0x7
LAB_0052ffc1:
0052FFC1  8B 8B 80 01 00 00         MOV ECX,dword ptr [EBX + 0x180]
0052FFC7  6A FF                     PUSH -0x1
0052FFC9  6A FF                     PUSH -0x1
0052FFCB  50                        PUSH EAX
0052FFCC  6A FF                     PUSH -0x1
0052FFCE  8D 43 6C                  LEA EAX,[EBX + 0x6c]
0052FFD1  6A FE                     PUSH -0x2
0052FFD3  50                        PUSH EAX
0052FFD4  E8 97 1B 1E 00            CALL 0x00711b70
0052FFD9  E9 DE 05 00 00            JMP 0x005305bc
switchD_0052fbb9::caseD_b:
0052FFDE  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
0052FFE4  6A 00                     PUSH 0x0
0052FFE6  6A FF                     PUSH -0x1
0052FFE8  6A FE                     PUSH -0x2
0052FFEA  51                        PUSH ECX
0052FFEB  68 89 3E 00 00            PUSH 0x3e89
0052FFF0  E8 4B 01 18 00            CALL 0x006b0140
0052FFF5  8B 8B 7C 01 00 00         MOV ECX,dword ptr [EBX + 0x17c]
0052FFFB  50                        PUSH EAX
0052FFFC  E8 BF 19 1E 00            CALL 0x007119c0
00530001  8B 93 94 01 00 00         MOV EDX,dword ptr [EBX + 0x194]
00530007  E9 9D 05 00 00            JMP 0x005305a9
switchD_0052fbb9::caseD_1:
0053000C  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
00530012  6A 00                     PUSH 0x0
00530014  6A FF                     PUSH -0x1
00530016  6A FE                     PUSH -0x2
00530018  51                        PUSH ECX
00530019  68 87 3E 00 00            PUSH 0x3e87
0053001E  E9 36 05 00 00            JMP 0x00530559
switchD_0052fbb9::caseD_d:
00530023  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
00530029  6A 00                     PUSH 0x0
0053002B  6A FF                     PUSH -0x1
0053002D  6A FE                     PUSH -0x2
0053002F  52                        PUSH EDX
00530030  68 94 3E 00 00            PUSH 0x3e94
00530035  E8 06 01 18 00            CALL 0x006b0140
0053003A  8B 8B 7C 01 00 00         MOV ECX,dword ptr [EBX + 0x17c]
00530040  50                        PUSH EAX
00530041  E8 7A 19 1E 00            CALL 0x007119c0
00530046  8B 83 90 01 00 00         MOV EAX,dword ptr [EBX + 0x190]
0053004C  8B 4B 68                  MOV ECX,dword ptr [EBX + 0x68]
0053004F  50                        PUSH EAX
00530050  6A 01                     PUSH 0x1
00530052  6A 13                     PUSH 0x13
00530054  6A 1D                     PUSH 0x1d
00530056  51                        PUSH ECX
00530057  E9 58 05 00 00            JMP 0x005305b4
switchD_0052fbb9::caseD_8:
0053005C  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
00530062  6A 00                     PUSH 0x0
00530064  6A FF                     PUSH -0x1
00530066  6A FE                     PUSH -0x2
00530068  52                        PUSH EDX
00530069  68 8D 3E 00 00            PUSH 0x3e8d
0053006E  E9 E6 04 00 00            JMP 0x00530559
switchD_0052fbb9::caseD_c:
00530073  A1 18 76 80 00            MOV EAX,[0x00807618]
00530078  6A 00                     PUSH 0x0
0053007A  6A FF                     PUSH -0x1
0053007C  6A FE                     PUSH -0x2
0053007E  50                        PUSH EAX
0053007F  68 88 3E 00 00            PUSH 0x3e88
00530084  E8 B7 00 18 00            CALL 0x006b0140
00530089  8B 8B 7C 01 00 00         MOV ECX,dword ptr [EBX + 0x17c]
0053008F  50                        PUSH EAX
00530090  E8 2B 19 1E 00            CALL 0x007119c0
00530095  8B 4B 68                  MOV ECX,dword ptr [EBX + 0x68]
00530098  6A 11                     PUSH 0x11
0053009A  6A 77                     PUSH 0x77
0053009C  6A 6D                     PUSH 0x6d
0053009E  6A 1D                     PUSH 0x1d
005300A0  6A 00                     PUSH 0x0
005300A2  51                        PUSH ECX
005300A3  8B 8B 7C 01 00 00         MOV ECX,dword ptr [EBX + 0x17c]
005300A9  E8 E2 09 1E 00            CALL 0x00710a90
005300AE  A0 4E 87 80 00            MOV AL,[0x0080874e]
005300B3  33 D2                     XOR EDX,EDX
005300B5  3C 03                     CMP AL,0x3
005300B7  A1 18 76 80 00            MOV EAX,[0x00807618]
005300BC  0F 95 C2                  SETNZ DL
005300BF  4A                        DEC EDX
005300C0  83 E2 05                  AND EDX,0x5
005300C3  52                        PUSH EDX
005300C4  6A FF                     PUSH -0x1
005300C6  6A FE                     PUSH -0x2
005300C8  50                        PUSH EAX
005300C9  68 F9 3E 00 00            PUSH 0x3ef9
005300CE  E8 6D 00 18 00            CALL 0x006b0140
005300D3  8B 8B 7C 01 00 00         MOV ECX,dword ptr [EBX + 0x17c]
005300D9  50                        PUSH EAX
005300DA  E8 E1 18 1E 00            CALL 0x007119c0
005300DF  8B 4B 68                  MOV ECX,dword ptr [EBX + 0x68]
005300E2  6A 11                     PUSH 0x11
005300E4  6A 77                     PUSH 0x77
005300E6  6A 7F                     PUSH 0x7f
005300E8  6A 1D                     PUSH 0x1d
005300EA  6A 00                     PUSH 0x0
005300EC  51                        PUSH ECX
005300ED  8B 8B 7C 01 00 00         MOV ECX,dword ptr [EBX + 0x17c]
005300F3  E8 98 09 1E 00            CALL 0x00710a90
005300F8  A0 4E 87 80 00            MOV AL,[0x0080874e]
005300FD  33 D2                     XOR EDX,EDX
005300FF  3C 03                     CMP AL,0x3
00530101  A1 18 76 80 00            MOV EAX,[0x00807618]
00530106  0F 95 C2                  SETNZ DL
00530109  4A                        DEC EDX
0053010A  83 E2 05                  AND EDX,0x5
0053010D  52                        PUSH EDX
0053010E  6A FF                     PUSH -0x1
00530110  6A FE                     PUSH -0x2
00530112  50                        PUSH EAX
00530113  68 FA 3E 00 00            PUSH 0x3efa
00530118  E8 23 00 18 00            CALL 0x006b0140
0053011D  8B 8B 7C 01 00 00         MOV ECX,dword ptr [EBX + 0x17c]
00530123  50                        PUSH EAX
00530124  E8 97 18 1E 00            CALL 0x007119c0
00530129  8B 8B 8C 01 00 00         MOV ECX,dword ptr [EBX + 0x18c]
0053012F  8B 53 68                  MOV EDX,dword ptr [EBX + 0x68]
00530132  51                        PUSH ECX
00530133  6A 01                     PUSH 0x1
00530135  6A 6F                     PUSH 0x6f
00530137  68 AA 00 00 00            PUSH 0xaa
0053013C  52                        PUSH EDX
0053013D  E8 E7 30 ED FF            CALL 0x00403229
00530142  8B 3D E8 BD 85 00         MOV EDI,dword ptr [0x0085bde8]
00530148  33 C0                     XOR EAX,EAX
0053014A  A0 46 73 80 00            MOV AL,[0x00807346]
0053014F  8D 73 6C                  LEA ESI,[EBX + 0x6c]
00530152  50                        PUSH EAX
00530153  68 90 18 7C 00            PUSH 0x7c1890
00530158  56                        PUSH ESI
00530159  FF D7                     CALL EDI
0053015B  8B 83 8C 01 00 00         MOV EAX,dword ptr [EBX + 0x18c]
00530161  83 C4 20                  ADD ESP,0x20
00530164  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
00530167  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
0053016A  51                        PUSH ECX
0053016B  8B 43 68                  MOV EAX,dword ptr [EBX + 0x68]
0053016E  8B 8B 7C 01 00 00         MOV ECX,dword ptr [EBX + 0x17c]
00530174  52                        PUSH EDX
00530175  6A 6F                     PUSH 0x6f
00530177  68 AA 00 00 00            PUSH 0xaa
0053017C  6A 00                     PUSH 0x0
0053017E  50                        PUSH EAX
0053017F  E8 0C 09 1E 00            CALL 0x00710a90
00530184  8B 8B 7C 01 00 00         MOV ECX,dword ptr [EBX + 0x17c]
0053018A  6A 00                     PUSH 0x0
0053018C  6A FF                     PUSH -0x1
0053018E  6A FE                     PUSH -0x2
00530190  56                        PUSH ESI
00530191  E8 2A 18 1E 00            CALL 0x007119c0
00530196  8B 8B 8C 01 00 00         MOV ECX,dword ptr [EBX + 0x18c]
0053019C  8B 53 68                  MOV EDX,dword ptr [EBX + 0x68]
0053019F  51                        PUSH ECX
005301A0  6A 01                     PUSH 0x1
005301A2  68 81 00 00 00            PUSH 0x81
005301A7  68 AA 00 00 00            PUSH 0xaa
005301AC  52                        PUSH EDX
005301AD  E8 77 30 ED FF            CALL 0x00403229
005301B2  33 C0                     XOR EAX,EAX
005301B4  A0 47 73 80 00            MOV AL,[0x00807347]
005301B9  40                        INC EAX
005301BA  50                        PUSH EAX
005301BB  68 90 18 7C 00            PUSH 0x7c1890
005301C0  56                        PUSH ESI
005301C1  FF D7                     CALL EDI
005301C3  8B 83 8C 01 00 00         MOV EAX,dword ptr [EBX + 0x18c]
005301C9  83 C4 20                  ADD ESP,0x20
005301CC  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
005301CF  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
005301D2  8B 43 68                  MOV EAX,dword ptr [EBX + 0x68]
005301D5  51                        PUSH ECX
005301D6  8B 8B 7C 01 00 00         MOV ECX,dword ptr [EBX + 0x17c]
005301DC  52                        PUSH EDX
005301DD  68 81 00 00 00            PUSH 0x81
005301E2  68 AA 00 00 00            PUSH 0xaa
005301E7  6A 00                     PUSH 0x0
005301E9  50                        PUSH EAX
005301EA  E8 A1 08 1E 00            CALL 0x00710a90
005301EF  8B 8B 7C 01 00 00         MOV ECX,dword ptr [EBX + 0x17c]
005301F5  6A 00                     PUSH 0x0
005301F7  6A FF                     PUSH -0x1
005301F9  6A FE                     PUSH -0x2
005301FB  56                        PUSH ESI
005301FC  E8 BF 17 1E 00            CALL 0x007119c0
00530201  E9 B6 03 00 00            JMP 0x005305bc
switchD_0052fbb9::caseD_7:
00530206  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
0053020C  6A 00                     PUSH 0x0
0053020E  6A FF                     PUSH -0x1
00530210  6A FE                     PUSH -0x2
00530212  51                        PUSH ECX
00530213  68 8C 3E 00 00            PUSH 0x3e8c
00530218  E8 23 FF 17 00            CALL 0x006b0140
0053021D  8B 8B 7C 01 00 00         MOV ECX,dword ptr [EBX + 0x17c]
00530223  50                        PUSH EAX
00530224  E8 97 17 1E 00            CALL 0x007119c0
00530229  8B 53 68                  MOV EDX,dword ptr [EBX + 0x68]
0053022C  8B 8B 7C 01 00 00         MOV ECX,dword ptr [EBX + 0x17c]
00530232  6A 0C                     PUSH 0xc
00530234  6A 77                     PUSH 0x77
00530236  6A 15                     PUSH 0x15
00530238  6A 1D                     PUSH 0x1d
0053023A  6A 00                     PUSH 0x0
0053023C  52                        PUSH EDX
0053023D  E8 4E 08 1E 00            CALL 0x00710a90
00530242  A1 18 76 80 00            MOV EAX,[0x00807618]
00530247  6A 00                     PUSH 0x0
00530249  6A FF                     PUSH -0x1
0053024B  6A FE                     PUSH -0x2
0053024D  50                        PUSH EAX
0053024E  68 EF 3E 00 00            PUSH 0x3eef
00530253  E8 E8 FE 17 00            CALL 0x006b0140
00530258  8B 8B 7C 01 00 00         MOV ECX,dword ptr [EBX + 0x17c]
0053025E  50                        PUSH EAX
0053025F  E8 5C 17 1E 00            CALL 0x007119c0
00530264  8B 4B 68                  MOV ECX,dword ptr [EBX + 0x68]
00530267  6A 0C                     PUSH 0xc
00530269  6A 77                     PUSH 0x77
0053026B  6A 15                     PUSH 0x15
0053026D  68 94 00 00 00            PUSH 0x94
00530272  6A 00                     PUSH 0x0
00530274  51                        PUSH ECX
00530275  8B 8B 7C 01 00 00         MOV ECX,dword ptr [EBX + 0x17c]
0053027B  E8 10 08 1E 00            CALL 0x00710a90
00530280  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
00530286  6A 00                     PUSH 0x0
00530288  6A FF                     PUSH -0x1
0053028A  6A FE                     PUSH -0x2
0053028C  52                        PUSH EDX
0053028D  68 ED 3E 00 00            PUSH 0x3eed
00530292  E8 A9 FE 17 00            CALL 0x006b0140
00530297  8B 8B 7C 01 00 00         MOV ECX,dword ptr [EBX + 0x17c]
0053029D  50                        PUSH EAX
0053029E  E8 1D 17 1E 00            CALL 0x007119c0
005302A3  8B 43 68                  MOV EAX,dword ptr [EBX + 0x68]
005302A6  8B 8B 7C 01 00 00         MOV ECX,dword ptr [EBX + 0x17c]
005302AC  6A 0C                     PUSH 0xc
005302AE  68 F0 00 00 00            PUSH 0xf0
005302B3  6A 5B                     PUSH 0x5b
005302B5  6A 1D                     PUSH 0x1d
005302B7  6A 00                     PUSH 0x0
005302B9  50                        PUSH EAX
005302BA  E8 D1 07 1E 00            CALL 0x00710a90
005302BF  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
005302C5  6A 00                     PUSH 0x0
005302C7  6A FF                     PUSH -0x1
005302C9  6A FE                     PUSH -0x2
005302CB  51                        PUSH ECX
005302CC  68 07 3F 00 00            PUSH 0x3f07
005302D1  E9 83 02 00 00            JMP 0x00530559
switchD_0052fbb9::caseD_5:
005302D6  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
005302DC  6A 00                     PUSH 0x0
005302DE  6A FF                     PUSH -0x1
005302E0  6A FE                     PUSH -0x2
005302E2  52                        PUSH EDX
005302E3  68 8A 3E 00 00            PUSH 0x3e8a
005302E8  E8 53 FE 17 00            CALL 0x006b0140
005302ED  8B 8B 7C 01 00 00         MOV ECX,dword ptr [EBX + 0x17c]
005302F3  50                        PUSH EAX
005302F4  E8 C7 16 1E 00            CALL 0x007119c0
005302F9  8B 43 68                  MOV EAX,dword ptr [EBX + 0x68]
005302FC  8B 8B 7C 01 00 00         MOV ECX,dword ptr [EBX + 0x17c]
00530302  6A 0B                     PUSH 0xb
00530304  68 A0 00 00 00            PUSH 0xa0
00530309  6A 6E                     PUSH 0x6e
0053030B  6A 6B                     PUSH 0x6b
0053030D  6A 00                     PUSH 0x0
0053030F  50                        PUSH EAX
00530310  E8 7B 07 1E 00            CALL 0x00710a90
00530315  A0 4E 87 80 00            MOV AL,[0x0080874e]
0053031A  33 C9                     XOR ECX,ECX
0053031C  3C 03                     CMP AL,0x3
0053031E  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
00530324  0F 95 C1                  SETNZ CL
00530327  49                        DEC ECX
00530328  83 E1 05                  AND ECX,0x5
0053032B  51                        PUSH ECX
0053032C  6A FF                     PUSH -0x1
0053032E  6A FE                     PUSH -0x2
00530330  52                        PUSH EDX
00530331  68 E4 3E 00 00            PUSH 0x3ee4
00530336  E8 05 FE 17 00            CALL 0x006b0140
0053033B  8B 8B 7C 01 00 00         MOV ECX,dword ptr [EBX + 0x17c]
00530341  50                        PUSH EAX
00530342  E8 79 16 1E 00            CALL 0x007119c0
00530347  8B 43 68                  MOV EAX,dword ptr [EBX + 0x68]
0053034A  8B 8B 7C 01 00 00         MOV ECX,dword ptr [EBX + 0x17c]
00530350  6A 0B                     PUSH 0xb
00530352  6A 4E                     PUSH 0x4e
00530354  6A 61                     PUSH 0x61
00530356  6A 1D                     PUSH 0x1d
00530358  6A 00                     PUSH 0x0
0053035A  50                        PUSH EAX
0053035B  E8 30 07 1E 00            CALL 0x00710a90
00530360  A0 4E 87 80 00            MOV AL,[0x0080874e]
00530365  33 C9                     XOR ECX,ECX
00530367  3C 03                     CMP AL,0x3
00530369  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
0053036F  0F 95 C1                  SETNZ CL
00530372  49                        DEC ECX
00530373  83 E1 05                  AND ECX,0x5
00530376  51                        PUSH ECX
00530377  6A FF                     PUSH -0x1
00530379  6A FD                     PUSH -0x3
0053037B  52                        PUSH EDX
0053037C  68 EA 3E 00 00            PUSH 0x3eea
00530381  E8 BA FD 17 00            CALL 0x006b0140
00530386  8B 8B 7C 01 00 00         MOV ECX,dword ptr [EBX + 0x17c]
0053038C  50                        PUSH EAX
0053038D  E8 2E 16 1E 00            CALL 0x007119c0
00530392  8B 43 68                  MOV EAX,dword ptr [EBX + 0x68]
00530395  8B 8B 7C 01 00 00         MOV ECX,dword ptr [EBX + 0x17c]
0053039B  6A 0B                     PUSH 0xb
0053039D  6A 4E                     PUSH 0x4e
0053039F  6A 77                     PUSH 0x77
005303A1  6A 1D                     PUSH 0x1d
005303A3  6A 00                     PUSH 0x0
005303A5  50                        PUSH EAX
005303A6  E8 E5 06 1E 00            CALL 0x00710a90
005303AB  A0 4E 87 80 00            MOV AL,[0x0080874e]
005303B0  33 C9                     XOR ECX,ECX
005303B2  3C 03                     CMP AL,0x3
005303B4  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
005303BA  0F 95 C1                  SETNZ CL
005303BD  49                        DEC ECX
005303BE  83 E1 05                  AND ECX,0x5
005303C1  51                        PUSH ECX
005303C2  6A FF                     PUSH -0x1
005303C4  6A FD                     PUSH -0x3
005303C6  52                        PUSH EDX
005303C7  68 EB 3E 00 00            PUSH 0x3eeb
005303CC  E8 6F FD 17 00            CALL 0x006b0140
005303D1  8B 8B 7C 01 00 00         MOV ECX,dword ptr [EBX + 0x17c]
005303D7  50                        PUSH EAX
005303D8  E8 E3 15 1E 00            CALL 0x007119c0
005303DD  8B 43 68                  MOV EAX,dword ptr [EBX + 0x68]
005303E0  8B 8B 7C 01 00 00         MOV ECX,dword ptr [EBX + 0x17c]
005303E6  6A 0B                     PUSH 0xb
005303E8  6A 4E                     PUSH 0x4e
005303EA  68 84 00 00 00            PUSH 0x84
005303EF  6A 1D                     PUSH 0x1d
005303F1  6A 00                     PUSH 0x0
005303F3  50                        PUSH EAX
005303F4  E8 97 06 1E 00            CALL 0x00710a90
005303F9  A0 4E 87 80 00            MOV AL,[0x0080874e]
005303FE  33 C9                     XOR ECX,ECX
00530400  3C 03                     CMP AL,0x3
00530402  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
00530408  0F 95 C1                  SETNZ CL
0053040B  49                        DEC ECX
0053040C  83 E1 05                  AND ECX,0x5
0053040F  51                        PUSH ECX
00530410  6A FF                     PUSH -0x1
00530412  6A FD                     PUSH -0x3
00530414  52                        PUSH EDX
00530415  E9 3A 01 00 00            JMP 0x00530554
switchD_0052fbb9::caseD_6:
0053041A  A1 18 76 80 00            MOV EAX,[0x00807618]
0053041F  6A 00                     PUSH 0x0
00530421  6A FF                     PUSH -0x1
00530423  6A FE                     PUSH -0x2
00530425  50                        PUSH EAX
00530426  68 8B 3E 00 00            PUSH 0x3e8b
0053042B  E8 10 FD 17 00            CALL 0x006b0140
00530430  8B 8B 7C 01 00 00         MOV ECX,dword ptr [EBX + 0x17c]
00530436  50                        PUSH EAX
00530437  E8 84 15 1E 00            CALL 0x007119c0
0053043C  8B 4B 68                  MOV ECX,dword ptr [EBX + 0x68]
0053043F  6A 0B                     PUSH 0xb
00530441  6A 4E                     PUSH 0x4e
00530443  6A 61                     PUSH 0x61
00530445  6A 1D                     PUSH 0x1d
00530447  6A 00                     PUSH 0x0
00530449  51                        PUSH ECX
0053044A  8B 8B 7C 01 00 00         MOV ECX,dword ptr [EBX + 0x17c]
00530450  E8 3B 06 1E 00            CALL 0x00710a90
00530455  A0 4E 87 80 00            MOV AL,[0x0080874e]
0053045A  33 D2                     XOR EDX,EDX
0053045C  3C 03                     CMP AL,0x3
0053045E  A1 18 76 80 00            MOV EAX,[0x00807618]
00530463  0F 95 C2                  SETNZ DL
00530466  4A                        DEC EDX
00530467  83 E2 05                  AND EDX,0x5
0053046A  52                        PUSH EDX
0053046B  6A FF                     PUSH -0x1
0053046D  6A FD                     PUSH -0x3
0053046F  50                        PUSH EAX
00530470  68 E9 3E 00 00            PUSH 0x3ee9
00530475  E8 C6 FC 17 00            CALL 0x006b0140
0053047A  8B 8B 7C 01 00 00         MOV ECX,dword ptr [EBX + 0x17c]
00530480  50                        PUSH EAX
00530481  E8 3A 15 1E 00            CALL 0x007119c0
00530486  8B 4B 68                  MOV ECX,dword ptr [EBX + 0x68]
00530489  6A 0B                     PUSH 0xb
0053048B  68 A0 00 00 00            PUSH 0xa0
00530490  6A 6E                     PUSH 0x6e
00530492  6A 6B                     PUSH 0x6b
00530494  6A 00                     PUSH 0x0
00530496  51                        PUSH ECX
00530497  8B 8B 7C 01 00 00         MOV ECX,dword ptr [EBX + 0x17c]
0053049D  E8 EE 05 1E 00            CALL 0x00710a90
005304A2  A0 4E 87 80 00            MOV AL,[0x0080874e]
005304A7  33 D2                     XOR EDX,EDX
005304A9  3C 03                     CMP AL,0x3
005304AB  A1 18 76 80 00            MOV EAX,[0x00807618]
005304B0  0F 95 C2                  SETNZ DL
005304B3  4A                        DEC EDX
005304B4  83 E2 05                  AND EDX,0x5
005304B7  52                        PUSH EDX
005304B8  6A FF                     PUSH -0x1
005304BA  6A FE                     PUSH -0x2
005304BC  50                        PUSH EAX
005304BD  68 E4 3E 00 00            PUSH 0x3ee4
005304C2  E8 79 FC 17 00            CALL 0x006b0140
005304C7  8B 8B 7C 01 00 00         MOV ECX,dword ptr [EBX + 0x17c]
005304CD  50                        PUSH EAX
005304CE  E8 ED 14 1E 00            CALL 0x007119c0
005304D3  8B 4B 68                  MOV ECX,dword ptr [EBX + 0x68]
005304D6  6A 0B                     PUSH 0xb
005304D8  6A 4E                     PUSH 0x4e
005304DA  6A 77                     PUSH 0x77
005304DC  6A 1D                     PUSH 0x1d
005304DE  6A 00                     PUSH 0x0
005304E0  51                        PUSH ECX
005304E1  8B 8B 7C 01 00 00         MOV ECX,dword ptr [EBX + 0x17c]
005304E7  E8 A4 05 1E 00            CALL 0x00710a90
005304EC  A0 4E 87 80 00            MOV AL,[0x0080874e]
005304F1  33 D2                     XOR EDX,EDX
005304F3  3C 03                     CMP AL,0x3
005304F5  A1 18 76 80 00            MOV EAX,[0x00807618]
005304FA  0F 95 C2                  SETNZ DL
005304FD  4A                        DEC EDX
005304FE  83 E2 05                  AND EDX,0x5
00530501  52                        PUSH EDX
00530502  6A FF                     PUSH -0x1
00530504  6A FD                     PUSH -0x3
00530506  50                        PUSH EAX
00530507  68 EB 3E 00 00            PUSH 0x3eeb
0053050C  E8 2F FC 17 00            CALL 0x006b0140
00530511  8B 8B 7C 01 00 00         MOV ECX,dword ptr [EBX + 0x17c]
00530517  50                        PUSH EAX
00530518  E8 A3 14 1E 00            CALL 0x007119c0
0053051D  8B 4B 68                  MOV ECX,dword ptr [EBX + 0x68]
00530520  6A 0B                     PUSH 0xb
00530522  6A 4E                     PUSH 0x4e
00530524  68 84 00 00 00            PUSH 0x84
00530529  6A 1D                     PUSH 0x1d
0053052B  6A 00                     PUSH 0x0
0053052D  51                        PUSH ECX
0053052E  8B 8B 7C 01 00 00         MOV ECX,dword ptr [EBX + 0x17c]
00530534  E8 57 05 1E 00            CALL 0x00710a90
00530539  A0 4E 87 80 00            MOV AL,[0x0080874e]
0053053E  33 D2                     XOR EDX,EDX
00530540  3C 03                     CMP AL,0x3
00530542  A1 18 76 80 00            MOV EAX,[0x00807618]
00530547  0F 95 C2                  SETNZ DL
0053054A  4A                        DEC EDX
0053054B  83 E2 05                  AND EDX,0x5
0053054E  52                        PUSH EDX
0053054F  6A FF                     PUSH -0x1
00530551  6A FD                     PUSH -0x3
00530553  50                        PUSH EAX
LAB_00530554:
00530554  68 EC 3E 00 00            PUSH 0x3eec
LAB_00530559:
00530559  E8 E2 FB 17 00            CALL 0x006b0140
0053055E  8B 8B 7C 01 00 00         MOV ECX,dword ptr [EBX + 0x17c]
00530564  50                        PUSH EAX
00530565  E8 56 14 1E 00            CALL 0x007119c0
0053056A  EB 50                     JMP 0x005305bc
switchD_0052fbb9::caseD_2:
0053056C  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
00530572  6A 00                     PUSH 0x0
00530574  6A FF                     PUSH -0x1
00530576  6A FE                     PUSH -0x2
00530578  51                        PUSH ECX
00530579  68 81 3E 00 00            PUSH 0x3e81
0053057E  EB 12                     JMP 0x00530592
switchD_0052fbb9::caseD_3:
00530580  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
00530586  6A 00                     PUSH 0x0
00530588  6A FF                     PUSH -0x1
0053058A  6A FE                     PUSH -0x2
0053058C  51                        PUSH ECX
0053058D  68 82 3E 00 00            PUSH 0x3e82
LAB_00530592:
00530592  E8 A9 FB 17 00            CALL 0x006b0140
00530597  8B 8B 7C 01 00 00         MOV ECX,dword ptr [EBX + 0x17c]
0053059D  50                        PUSH EAX
0053059E  E8 1D 14 1E 00            CALL 0x007119c0
005305A3  8B 93 90 01 00 00         MOV EDX,dword ptr [EBX + 0x190]
LAB_005305a9:
005305A9  8B 43 68                  MOV EAX,dword ptr [EBX + 0x68]
005305AC  52                        PUSH EDX
005305AD  6A 01                     PUSH 0x1
005305AF  6A 13                     PUSH 0x13
005305B1  6A 1D                     PUSH 0x1d
005305B3  50                        PUSH EAX
LAB_005305b4:
005305B4  E8 70 2C ED FF            CALL 0x00403229
005305B9  83 C4 14                  ADD ESP,0x14
switchD_0052fbb9::caseD_9:
005305BC  8A 83 A4 01 00 00         MOV AL,byte ptr [EBX + 0x1a4]
005305C2  8B C8                     MOV ECX,EAX
005305C4  81 E1 FF 00 00 00         AND ECX,0xff
005305CA  49                        DEC ECX
005305CB  83 F9 0D                  CMP ECX,0xd
005305CE  0F 87 B6 15 00 00         JA 0x00531b8a
switchD_005305d4::switchD:
005305D4  FF 24 8D B0 1C 53 00      JMP dword ptr [ECX*0x4 + 0x531cb0]
switchD_005305d4::caseD_1:
005305DB  32 C0                     XOR AL,AL
005305DD  88 45 FC                  MOV byte ptr [EBP + -0x4],AL
005305E0  EB 03                     JMP 0x005305e5
LAB_005305e2:
005305E2  8A 45 FC                  MOV AL,byte ptr [EBP + -0x4]
LAB_005305e5:
005305E5  8A 0D 83 87 80 00         MOV CL,byte ptr [0x00808783]
005305EB  BE 01 00 00 00            MOV ESI,0x1
005305F0  80 F9 03                  CMP CL,0x3
005305F3  75 17                     JNZ 0x0053060c
005305F5  84 C0                     TEST AL,AL
005305F7  76 13                     JBE 0x0053060c
005305F9  3C 02                     CMP AL,0x2
005305FB  76 0D                     JBE 0x0053060a
005305FD  3C 04                     CMP AL,0x4
005305FF  75 0B                     JNZ 0x0053060c
00530601  A0 A0 67 80 00            MOV AL,[0x008067a0]
00530606  84 C0                     TEST AL,AL
00530608  74 02                     JZ 0x0053060c
LAB_0053060a:
0053060A  33 F6                     XOR ESI,ESI
LAB_0053060c:
0053060C  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
0053060F  6A 00                     PUSH 0x0
00530611  81 E7 FF 00 00 00         AND EDI,0xff
00530617  6A 00                     PUSH 0x0
00530619  6A 00                     PUSH 0x0
0053061B  6A 00                     PUSH 0x0
0053061D  6A 00                     PUSH 0x0
0053061F  8D 97 AF C0 00 00         LEA EDX,[EDI + 0xc0af]
00530625  6A 00                     PUSH 0x0
00530627  8D 87 9F C0 00 00         LEA EAX,[EDI + 0xc09f]
0053062D  52                        PUSH EDX
0053062E  50                        PUSH EAX
0053062F  6A 00                     PUSH 0x0
00530631  68 64 72 7C 00            PUSH 0x7c7264
00530636  E8 41 51 ED FF            CALL 0x0040577c
0053063B  83 C4 08                  ADD ESP,0x8
0053063E  8D 0C FF                  LEA ECX,[EDI + EDI*0x8]
00530641  50                        PUSH EAX
00530642  8D 54 09 13               LEA EDX,[ECX + ECX*0x1 + 0x13]
00530646  6A 01                     PUSH 0x1
00530648  52                        PUSH EDX
00530649  6A 1D                     PUSH 0x1d
0053064B  56                        PUSH ESI
0053064C  6A 01                     PUSH 0x1
0053064E  8B CB                     MOV ECX,EBX
00530650  E8 36 33 ED FF            CALL 0x0040398b
00530655  89 84 BB B5 01 00 00      MOV dword ptr [EBX + EDI*0x4 + 0x1b5],EAX
0053065C  8A 45 FC                  MOV AL,byte ptr [EBP + -0x4]
0053065F  FE C0                     INC AL
00530661  3C 07                     CMP AL,0x7
00530663  88 45 FC                  MOV byte ptr [EBP + -0x4],AL
00530666  0F 82 76 FF FF FF         JC 0x005305e2
0053066C  E9 19 15 00 00            JMP 0x00531b8a
switchD_005305d4::caseD_5:
00530671  6A 00                     PUSH 0x0
00530673  6A 00                     PUSH 0x0
00530675  6A 00                     PUSH 0x0
00530677  6A 00                     PUSH 0x0
00530679  6A 00                     PUSH 0x0
0053067B  6A 00                     PUSH 0x0
0053067D  68 AF C0 00 00            PUSH 0xc0af
00530682  68 9F C0 00 00            PUSH 0xc09f
00530687  6A 00                     PUSH 0x0
00530689  68 94 38 7C 00            PUSH 0x7c3894
0053068E  E8 E9 50 ED FF            CALL 0x0040577c
00530693  83 C4 08                  ADD ESP,0x8
00530696  8B CB                     MOV ECX,EBX
00530698  50                        PUSH EAX
00530699  6A 01                     PUSH 0x1
0053069B  6A 7D                     PUSH 0x7d
0053069D  6A 5E                     PUSH 0x5e
0053069F  6A 01                     PUSH 0x1
005306A1  6A 00                     PUSH 0x0
005306A3  E8 E3 32 ED FF            CALL 0x0040398b
005306A8  6A 00                     PUSH 0x0
005306AA  6A 00                     PUSH 0x0
005306AC  6A 00                     PUSH 0x0
005306AE  6A 00                     PUSH 0x0
005306B0  6A 00                     PUSH 0x0
005306B2  6A 00                     PUSH 0x0
005306B4  68 B0 C0 00 00            PUSH 0xc0b0
005306B9  68 A0 C0 00 00            PUSH 0xc0a0
005306BE  6A 00                     PUSH 0x0
005306C0  68 94 38 7C 00            PUSH 0x7c3894
005306C5  89 83 B5 01 00 00         MOV dword ptr [EBX + 0x1b5],EAX
005306CB  E8 AC 50 ED FF            CALL 0x0040577c
005306D0  83 C4 08                  ADD ESP,0x8
005306D3  8B CB                     MOV ECX,EBX
005306D5  50                        PUSH EAX
005306D6  6A 01                     PUSH 0x1
005306D8  6A 7D                     PUSH 0x7d
005306DA  68 97 00 00 00            PUSH 0x97
005306DF  6A 01                     PUSH 0x1
005306E1  6A 00                     PUSH 0x0
005306E3  E8 A3 32 ED FF            CALL 0x0040398b
005306E8  89 83 B9 01 00 00         MOV dword ptr [EBX + 0x1b9],EAX
005306EE  E9 97 14 00 00            JMP 0x00531b8a
switchD_005305d4::caseD_b:
005306F3  6A 00                     PUSH 0x0
005306F5  6A 00                     PUSH 0x0
005306F7  6A 00                     PUSH 0x0
005306F9  6A 00                     PUSH 0x0
005306FB  6A 00                     PUSH 0x0
005306FD  6A 00                     PUSH 0x0
005306FF  68 B0 C0 00 00            PUSH 0xc0b0
00530704  68 A0 C0 00 00            PUSH 0xc0a0
00530709  6A 00                     PUSH 0x0
0053070B  68 94 38 7C 00            PUSH 0x7c3894
00530710  E8 67 50 ED FF            CALL 0x0040577c
00530715  83 C4 08                  ADD ESP,0x8
00530718  8B CB                     MOV ECX,EBX
0053071A  50                        PUSH EAX
0053071B  6A 01                     PUSH 0x1
0053071D  6A 7D                     PUSH 0x7d
0053071F  6A 7D                     PUSH 0x7d
00530721  6A 01                     PUSH 0x1
00530723  6A 00                     PUSH 0x0
00530725  E8 61 32 ED FF            CALL 0x0040398b
0053072A  89 83 B5 01 00 00         MOV dword ptr [EBX + 0x1b5],EAX
00530730  E9 55 14 00 00            JMP 0x00531b8a
switchD_005305d4::caseD_2:
00530735  8D 83 B5 01 00 00         LEA EAX,[EBX + 0x1b5]
0053073B  BE 9F C0 00 00            MOV ESI,0xc09f
00530740  BF 25 00 00 00            MOV EDI,0x25
00530745  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
00530748  C7 45 E8 05 00 00 00      MOV dword ptr [EBP + -0x18],0x5
0053074F  C6 45 FC 06               MOV byte ptr [EBP + -0x4],0x6
LAB_00530753:
00530753  6A 00                     PUSH 0x0
00530755  6A 00                     PUSH 0x0
00530757  6A 00                     PUSH 0x0
00530759  6A 00                     PUSH 0x0
0053075B  6A 00                     PUSH 0x0
0053075D  8D 46 10                  LEA EAX,[ESI + 0x10]
00530760  6A 00                     PUSH 0x0
00530762  50                        PUSH EAX
00530763  56                        PUSH ESI
00530764  6A 00                     PUSH 0x0
00530766  68 64 72 7C 00            PUSH 0x7c7264
0053076B  E8 0C 50 ED FF            CALL 0x0040577c
00530770  83 C4 08                  ADD ESP,0x8
00530773  8B CB                     MOV ECX,EBX
00530775  50                        PUSH EAX
00530776  6A 01                     PUSH 0x1
00530778  57                        PUSH EDI
00530779  6A 1D                     PUSH 0x1d
0053077B  6A 01                     PUSH 0x1
0053077D  6A 01                     PUSH 0x1
0053077F  E8 07 32 ED FF            CALL 0x0040398b
00530784  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
00530787  46                        INC ESI
00530788  83 C7 12                  ADD EDI,0x12
0053078B  89 01                     MOV dword ptr [ECX],EAX
0053078D  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
00530790  83 C1 04                  ADD ECX,0x4
00530793  48                        DEC EAX
00530794  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
00530797  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
0053079A  75 B7                     JNZ 0x00530753
0053079C  E9 E9 13 00 00            JMP 0x00531b8a
switchD_005305d4::caseD_d:
005307A1  B9 16 00 00 00            MOV ECX,0x16
005307A6  33 C0                     XOR EAX,EAX
005307A8  8D BD 38 FF FF FF         LEA EDI,[EBP + 0xffffff38]
005307AE  C7 45 C8 08 00 00 00      MOV dword ptr [EBP + -0x38],0x8
005307B5  F3 AB                     STOSD.REP ES:EDI
005307B7  B9 70 00 00 00            MOV ECX,0x70
005307BC  8D BD BC E3 FF FF         LEA EDI,[EBP + 0xffffe3bc]
005307C2  F3 AB                     STOSD.REP ES:EDI
005307C4  8B 3D 7A 87 80 00         MOV EDI,dword ptr [0x0080877a]
005307CA  33 C9                     XOR ECX,ECX
005307CC  88 45 F7                  MOV byte ptr [EBP + -0x9],AL
005307CF  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
005307D2  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
005307D5  8D B5 C0 E3 FF FF         LEA ESI,[EBP + 0xffffe3c0]
LAB_005307db:
005307DB  8B C1                     MOV EAX,ECX
005307DD  83 E8 00                  SUB EAX,0x0
005307E0  74 26                     JZ 0x00530808
005307E2  48                        DEC EAX
005307E3  74 13                     JZ 0x005307f8
005307E5  48                        DEC EAX
005307E6  75 2E                     JNZ 0x00530816
005307E8  C7 45 C0 00 05 00 00      MOV dword ptr [EBP + -0x40],0x500
005307EF  C7 45 C4 00 04 00 00      MOV dword ptr [EBP + -0x3c],0x400
005307F6  EB 1E                     JMP 0x00530816
LAB_005307f8:
005307F8  C7 45 C0 00 04 00 00      MOV dword ptr [EBP + -0x40],0x400
005307FF  C7 45 C4 00 03 00 00      MOV dword ptr [EBP + -0x3c],0x300
00530806  EB 0E                     JMP 0x00530816
LAB_00530808:
00530808  C7 45 C0 20 03 00 00      MOV dword ptr [EBP + -0x40],0x320
0053080F  C7 45 C4 58 02 00 00      MOV dword ptr [EBP + -0x3c],0x258
LAB_00530816:
00530816  41                        INC ECX
00530817  C6 45 F8 00               MOV byte ptr [EBP + -0x8],0x0
0053081B  89 4E FC                  MOV dword ptr [ESI + -0x4],ECX
0053081E  C7 06 02 00 00 00         MOV dword ptr [ESI],0x2
00530824  8B 57 04                  MOV EDX,dword ptr [EDI + 0x4]
00530827  85 D2                     TEST EDX,EDX
00530829  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
0053082C  7E 5B                     JLE 0x00530889
0053082E  33 C0                     XOR EAX,EAX
LAB_00530830:
00530830  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
00530833  8D 0C 8F                  LEA ECX,[EDI + ECX*0x4]
00530836  8B 7D C0                  MOV EDI,dword ptr [EBP + -0x40]
00530839  39 79 08                  CMP dword ptr [ECX + 0x8],EDI
0053083C  75 1D                     JNZ 0x0053085b
0053083E  8B 3D 7A 87 80 00         MOV EDI,dword ptr [0x0080877a]
00530844  8D 54 40 03               LEA EDX,[EAX + EAX*0x2 + 0x3]
00530848  8B 45 C4                  MOV EAX,dword ptr [EBP + -0x3c]
0053084B  39 04 97                  CMP dword ptr [EDI + EDX*0x4],EAX
0053084E  75 06                     JNZ 0x00530856
00530850  83 79 10 08               CMP dword ptr [ECX + 0x10],0x8
00530854  74 21                     JZ 0x00530877
LAB_00530856:
00530856  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
00530859  EB 06                     JMP 0x00530861
LAB_0053085b:
0053085B  8B 3D 7A 87 80 00         MOV EDI,dword ptr [0x0080877a]
LAB_00530861:
00530861  8A 45 F8                  MOV AL,byte ptr [EBP + -0x8]
00530864  FE C0                     INC AL
00530866  88 45 F8                  MOV byte ptr [EBP + -0x8],AL
00530869  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0053086C  25 FF 00 00 00            AND EAX,0xff
00530871  3B C2                     CMP EAX,EDX
00530873  7C BB                     JL 0x00530830
00530875  EB 12                     JMP 0x00530889
LAB_00530877:
00530877  8A 15 48 73 80 00         MOV DL,byte ptr [0x00807348]
0053087D  8A 45 F7                  MOV AL,byte ptr [EBP + -0x9]
00530880  33 C9                     XOR ECX,ECX
00530882  3A D0                     CMP DL,AL
00530884  0F 94 C1                  SETZ CL
00530887  89 0E                     MOV dword ptr [ESI],ECX
LAB_00530889:
00530889  8B 43 3C                  MOV EAX,dword ptr [EBX + 0x3c]
0053088C  83 C0 1D                  ADD EAX,0x1d
0053088F  89 46 08                  MOV dword ptr [ESI + 0x8],EAX
00530892  8B 43 5C                  MOV EAX,dword ptr [EBX + 0x5c]
00530895  85 C0                     TEST EAX,EAX
00530897  75 07                     JNZ 0x005308a0
00530899  8B 43 48                  MOV EAX,dword ptr [EBX + 0x48]
0053089C  F7 D8                     NEG EAX
0053089E  EB 03                     JMP 0x005308a3
LAB_005308a0:
005308A0  8B 43 44                  MOV EAX,dword ptr [EBX + 0x44]
LAB_005308a3:
005308A3  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
005308A6  83 C6 70                  ADD ESI,0x70
005308A9  8D 4C 02 13               LEA ECX,[EDX + EAX*0x1 + 0x13]
005308AD  8A 45 F7                  MOV AL,byte ptr [EBP + -0x9]
005308B0  89 4E 9C                  MOV dword ptr [ESI + -0x64],ECX
005308B3  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
005308B6  C7 46 A0 72 00 00 00      MOV dword ptr [ESI + -0x60],0x72
005308BD  C7 46 A4 11 00 00 00      MOV dword ptr [ESI + -0x5c],0x11
005308C4  FE C0                     INC AL
005308C6  41                        INC ECX
005308C7  83 C2 12                  ADD EDX,0x12
005308CA  3C 03                     CMP AL,0x3
005308CC  88 45 F7                  MOV byte ptr [EBP + -0x9],AL
005308CF  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
005308D2  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
005308D5  0F 82 00 FF FF FF         JC 0x005307db
005308DB  A1 48 73 80 00            MOV EAX,[0x00807348]
005308E0  8B 4B 0C                  MOV ECX,dword ptr [EBX + 0xc]
005308E3  25 FF 00 00 00            AND EAX,0xff
005308E8  6A 00                     PUSH 0x0
005308EA  40                        INC EAX
005308EB  BE 01 00 00 00            MOV ESI,0x1
005308F0  89 45 84                  MOV dword ptr [EBP + -0x7c],EAX
005308F3  8B 43 08                  MOV EAX,dword ptr [EBX + 0x8]
005308F6  89 85 48 FF FF FF         MOV dword ptr [EBP + 0xffffff48],EAX
005308FC  89 85 68 FF FF FF         MOV dword ptr [EBP + 0xffffff68],EAX
00530902  8D 85 38 FF FF FF         LEA EAX,[EBP + 0xffffff38]
00530908  8D 95 BC E3 FF FF         LEA EDX,[EBP + 0xffffe3bc]
0053090E  BF 02 00 00 00            MOV EDI,0x2
00530913  50                        PUSH EAX
00530914  8D 83 B5 01 00 00         LEA EAX,[EBX + 0x1b5]
0053091A  89 B5 38 FF FF FF         MOV dword ptr [EBP + 0xffffff38],ESI
00530920  C7 85 3C FF FF FF 00 00 00 00  MOV dword ptr [EBP + 0xffffff3c],0x0
0053092A  89 55 80                  MOV dword ptr [EBP + -0x80],EDX
0053092D  89 BD 4C FF FF FF         MOV dword ptr [EBP + 0xffffff4c],EDI
00530933  C7 85 50 FF FF FF 9F C0 00 00  MOV dword ptr [EBP + 0xffffff50],0xc09f
0053093D  89 BD 6C FF FF FF         MOV dword ptr [EBP + 0xffffff6c],EDI
00530943  C7 85 70 FF FF FF AF C0 00 00  MOV dword ptr [EBP + 0xffffff70],0xc0af
0053094D  89 75 88                  MOV dword ptr [EBP + -0x78],ESI
00530950  89 75 8C                  MOV dword ptr [EBP + -0x74],ESI
00530953  8B 11                     MOV EDX,dword ptr [ECX]
00530955  6A 00                     PUSH 0x0
00530957  50                        PUSH EAX
00530958  6A 05                     PUSH 0x5
0053095A  FF 52 08                  CALL dword ptr [EDX + 0x8]
0053095D  6A 00                     PUSH 0x0
0053095F  6A 00                     PUSH 0x0
00530961  6A 00                     PUSH 0x0
00530963  6A 00                     PUSH 0x0
00530965  6A 00                     PUSH 0x0
00530967  6A 00                     PUSH 0x0
00530969  68 B0 C0 00 00            PUSH 0xc0b0
0053096E  68 A0 C0 00 00            PUSH 0xc0a0
00530973  6A 00                     PUSH 0x0
00530975  68 64 72 7C 00            PUSH 0x7c7264
0053097A  E8 FD 4D ED FF            CALL 0x0040577c
0053097F  83 C4 08                  ADD ESP,0x8
00530982  8B CB                     MOV ECX,EBX
00530984  50                        PUSH EAX
00530985  56                        PUSH ESI
00530986  6A 49                     PUSH 0x49
00530988  6A 1D                     PUSH 0x1d
0053098A  6A 00                     PUSH 0x0
0053098C  56                        PUSH ESI
0053098D  E8 F9 2F ED FF            CALL 0x0040398b
00530992  6A 00                     PUSH 0x0
00530994  6A 00                     PUSH 0x0
00530996  6A 00                     PUSH 0x0
00530998  6A 00                     PUSH 0x0
0053099A  6A 00                     PUSH 0x0
0053099C  6A 00                     PUSH 0x0
0053099E  68 B1 C0 00 00            PUSH 0xc0b1
005309A3  68 A1 C0 00 00            PUSH 0xc0a1
005309A8  6A 00                     PUSH 0x0
005309AA  68 64 72 7C 00            PUSH 0x7c7264
005309AF  89 83 B9 01 00 00         MOV dword ptr [EBX + 0x1b9],EAX
005309B5  E8 C2 4D ED FF            CALL 0x0040577c
005309BA  8B 0D 42 73 80 00         MOV ECX,dword ptr [0x00807342]
005309C0  83 C4 08                  ADD ESP,0x8
005309C3  F7 D9                     NEG ECX
005309C5  1B C9                     SBB ECX,ECX
005309C7  50                        PUSH EAX
005309C8  23 CF                     AND ECX,EDI
005309CA  56                        PUSH ESI
005309CB  6A 5B                     PUSH 0x5b
005309CD  41                        INC ECX
005309CE  6A 1D                     PUSH 0x1d
005309D0  51                        PUSH ECX
005309D1  6A 03                     PUSH 0x3
005309D3  8B CB                     MOV ECX,EBX
005309D5  E8 B1 2F ED FF            CALL 0x0040398b
005309DA  33 C9                     XOR ECX,ECX
005309DC  89 83 BD 01 00 00         MOV dword ptr [EBX + 0x1bd],EAX
005309E2  8A 0D 46 73 80 00         MOV CL,byte ptr [0x00807346]
005309E8  B8 67 66 66 66            MOV EAX,0x66666667
005309ED  56                        PUSH ESI
005309EE  F7 E9                     IMUL ECX
005309F0  D1 FA                     SAR EDX,0x1
005309F2  8B C2                     MOV EAX,EDX
005309F4  C1 E8 1F                  SHR EAX,0x1f
005309F7  8D 4C 02 FF               LEA ECX,[EDX + EAX*0x1 + -0x1]
005309FB  8B 93 8C 01 00 00         MOV EDX,dword ptr [EBX + 0x18c]
00530A01  51                        PUSH ECX
00530A02  6A 03                     PUSH 0x3
00530A04  8B 42 04                  MOV EAX,dword ptr [EDX + 0x4]
00530A07  68 A2 C0 00 00            PUSH 0xc0a2
00530A0C  05 AF 00 00 00            ADD EAX,0xaf
00530A11  6A 70                     PUSH 0x70
00530A13  50                        PUSH EAX
00530A14  6A 70                     PUSH 0x70
00530A16  68 94 00 00 00            PUSH 0x94
00530A1B  8B CB                     MOV ECX,EBX
00530A1D  E8 BE 34 ED FF            CALL 0x00403ee0
00530A22  8B 93 8C 01 00 00         MOV EDX,dword ptr [EBX + 0x18c]
00530A28  33 C9                     XOR ECX,ECX
00530A2A  89 83 C1 01 00 00         MOV dword ptr [EBX + 0x1c1],EAX
00530A30  8A 0D 47 73 80 00         MOV CL,byte ptr [0x00807347]
00530A36  8B 42 04                  MOV EAX,dword ptr [EDX + 0x4]
00530A39  56                        PUSH ESI
00530A3A  51                        PUSH ECX
00530A3B  6A 03                     PUSH 0x3
00530A3D  68 A3 C0 00 00            PUSH 0xc0a3
00530A42  05 AF 00 00 00            ADD EAX,0xaf
00530A47  68 82 00 00 00            PUSH 0x82
00530A4C  50                        PUSH EAX
00530A4D  68 82 00 00 00            PUSH 0x82
00530A52  68 94 00 00 00            PUSH 0x94
00530A57  8B CB                     MOV ECX,EBX
00530A59  E8 82 34 ED FF            CALL 0x00403ee0
00530A5E  89 83 C5 01 00 00         MOV dword ptr [EBX + 0x1c5],EAX
00530A64  8A 0D 48 73 80 00         MOV CL,byte ptr [0x00807348]
00530A6A  88 8B 05 03 00 00         MOV byte ptr [EBX + 0x305],CL
00530A70  E9 15 11 00 00            JMP 0x00531b8a
switchD_005305d4::caseD_9:
00530A75  8D 83 B5 01 00 00         LEA EAX,[EBX + 0x1b5]
00530A7B  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
00530A82  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
00530A85  B8 06 00 00 00            MOV EAX,0x6
00530A8A  BF 1B 00 00 00            MOV EDI,0x1b
00530A8F  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
00530A92  88 45 FC                  MOV byte ptr [EBP + -0x4],AL
LAB_00530a95:
00530A95  83 FF 75                  CMP EDI,0x75
00530A98  BE 01 00 00 00            MOV ESI,0x1
00530A9D  7F 62                     JG 0x00530b01
00530A9F  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00530AA2  FF 24 95 E8 1C 53 00      JMP dword ptr [EDX*0x4 + 0x531ce8]
LAB_00530b01:
00530B01  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00530B04  6A 00                     PUSH 0x0
00530B06  6A 00                     PUSH 0x0
00530B08  6A 00                     PUSH 0x0
00530B0A  8D 81 9F C0 00 00         LEA EAX,[ECX + 0xc09f]
00530B10  6A 00                     PUSH 0x0
00530B12  6A 00                     PUSH 0x0
00530B14  6A 00                     PUSH 0x0
00530B16  8D 50 10                  LEA EDX,[EAX + 0x10]
00530B19  52                        PUSH EDX
00530B1A  50                        PUSH EAX
00530B1B  6A 00                     PUSH 0x0
00530B1D  68 64 72 7C 00            PUSH 0x7c7264
00530B22  E8 55 4C ED FF            CALL 0x0040577c
00530B27  83 C4 08                  ADD ESP,0x8
00530B2A  8B CB                     MOV ECX,EBX
00530B2C  50                        PUSH EAX
00530B2D  6A 01                     PUSH 0x1
00530B2F  57                        PUSH EDI
00530B30  6A 1D                     PUSH 0x1d
00530B32  56                        PUSH ESI
00530B33  6A 03                     PUSH 0x3
00530B35  E8 51 2E ED FF            CALL 0x0040398b
00530B3A  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
00530B3D  83 C7 12                  ADD EDI,0x12
00530B40  89 01                     MOV dword ptr [ECX],EAX
00530B42  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00530B45  40                        INC EAX
00530B46  83 C1 04                  ADD ECX,0x4
00530B49  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00530B4C  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
00530B4F  48                        DEC EAX
00530B50  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
00530B53  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
00530B56  0F 85 39 FF FF FF         JNZ 0x00530a95
00530B5C  E9 29 10 00 00            JMP 0x00531b8a
switchD_005305d4::caseD_8:
00530B61  8A 15 3B 73 80 00         MOV DL,byte ptr [0x0080733b]
00530B67  68 AF C0 00 00            PUSH 0xc0af
00530B6C  68 9F C0 00 00            PUSH 0xc09f
00530B71  6A 12                     PUSH 0x12
00530B73  6A 00                     PUSH 0x0
00530B75  6A 11                     PUSH 0x11
00530B77  B0 03                     MOV AL,0x3
00530B79  6A 72                     PUSH 0x72
00530B7B  6A 20                     PUSH 0x20
00530B7D  2A C2                     SUB AL,DL
00530B7F  6A 1D                     PUSH 0x1d
00530B81  50                        PUSH EAX
00530B82  6A 03                     PUSH 0x3
00530B84  8B CB                     MOV ECX,EBX
00530B86  E8 F5 1A ED FF            CALL 0x00402680
00530B8B  68 B0 C0 00 00            PUSH 0xc0b0
00530B90  68 A0 C0 00 00            PUSH 0xc0a0
00530B95  6A 12                     PUSH 0x12
00530B97  89 83 B5 01 00 00         MOV dword ptr [EBX + 0x1b5],EAX
00530B9D  A0 3A 73 80 00            MOV AL,[0x0080733a]
00530BA2  6A 00                     PUSH 0x0
00530BA4  6A 11                     PUSH 0x11
00530BA6  B1 02                     MOV CL,0x2
00530BA8  6A 72                     PUSH 0x72
00530BAA  6A 20                     PUSH 0x20
00530BAC  2A C8                     SUB CL,AL
00530BAE  68 99 00 00 00            PUSH 0x99
00530BB3  51                        PUSH ECX
00530BB4  6A 03                     PUSH 0x3
00530BB6  8B CB                     MOV ECX,EBX
00530BB8  E8 C3 1A ED FF            CALL 0x00402680
00530BBD  68 B2 C0 00 00            PUSH 0xc0b2
00530BC2  68 A2 C0 00 00            PUSH 0xc0a2
00530BC7  6A 12                     PUSH 0x12
00530BC9  6A 00                     PUSH 0x0
00530BCB  6A 11                     PUSH 0x11
00530BCD  89 83 B9 01 00 00         MOV dword ptr [EBX + 0x1b9],EAX
00530BD3  8A 15 49 73 80 00         MOV DL,byte ptr [0x00807349]
00530BD9  6A 72                     PUSH 0x72
00530BDB  6A 68                     PUSH 0x68
00530BDD  6A 5D                     PUSH 0x5d
00530BDF  52                        PUSH EDX
00530BE0  6A 02                     PUSH 0x2
00530BE2  8B CB                     MOV ECX,EBX
00530BE4  E8 97 1A ED FF            CALL 0x00402680
00530BE9  89 83 C1 01 00 00         MOV dword ptr [EBX + 0x1c1],EAX
00530BEF  E9 96 0F 00 00            JMP 0x00531b8a
switchD_005305d4::caseD_6:
00530BF4  8D 83 B5 01 00 00         LEA EAX,[EBX + 0x1b5]
00530BFA  BE 9F C0 00 00            MOV ESI,0xc09f
00530BFF  C7 45 F8 16 00 00 00      MOV dword ptr [EBP + -0x8],0x16
00530C06  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
00530C09  C7 45 E8 04 00 00 00      MOV dword ptr [EBP + -0x18],0x4
LAB_00530c10:
00530C10  8D 8E 61 3F FF FF         LEA ECX,[ESI + 0xffff3f61]
00530C16  B0 01                     MOV AL,0x1
00530C18  D2 E0                     SHL AL,CL
00530C1A  8A 0D 01 73 80 00         MOV CL,byte ptr [0x00807301]
00530C20  6A 00                     PUSH 0x0
00530C22  6A 00                     PUSH 0x0
00530C24  6A 00                     PUSH 0x0
00530C26  6A 00                     PUSH 0x0
00530C28  6A 00                     PUSH 0x0
00530C2A  22 C1                     AND AL,CL
00530C2C  8D 4E 10                  LEA ECX,[ESI + 0x10]
00530C2F  F6 D8                     NEG AL
00530C31  6A 00                     PUSH 0x0
00530C33  51                        PUSH ECX
00530C34  1B C0                     SBB EAX,EAX
00530C36  56                        PUSH ESI
00530C37  F7 D8                     NEG EAX
00530C39  6A 00                     PUSH 0x0
00530C3B  68 64 72 7C 00            PUSH 0x7c7264
00530C40  8B F8                     MOV EDI,EAX
00530C42  E8 35 4B ED FF            CALL 0x0040577c
00530C47  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00530C4A  83 C4 08                  ADD ESP,0x8
00530C4D  F7 DF                     NEG EDI
00530C4F  1B FF                     SBB EDI,EDI
00530C51  50                        PUSH EAX
00530C52  83 E7 02                  AND EDI,0x2
00530C55  6A 01                     PUSH 0x1
00530C57  52                        PUSH EDX
00530C58  47                        INC EDI
00530C59  6A 1D                     PUSH 0x1d
00530C5B  57                        PUSH EDI
00530C5C  6A 03                     PUSH 0x3
00530C5E  8B CB                     MOV ECX,EBX
00530C60  E8 26 2D ED FF            CALL 0x0040398b
00530C65  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
00530C68  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
00530C6B  46                        INC ESI
00530C6C  83 C7 12                  ADD EDI,0x12
00530C6F  89 01                     MOV dword ptr [ECX],EAX
00530C71  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
00530C74  83 C1 04                  ADD ECX,0x4
00530C77  48                        DEC EAX
00530C78  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
00530C7B  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
00530C7E  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
00530C81  75 8D                     JNZ 0x00530c10
00530C83  8B 75 E4                  MOV ESI,dword ptr [EBP + -0x1c]
00530C86  B0 05                     MOV AL,0x5
00530C88  88 45 FC                  MOV byte ptr [EBP + -0x4],AL
00530C8B  EB 03                     JMP 0x00530c90
LAB_00530c8d:
00530C8D  8A 45 FC                  MOV AL,byte ptr [EBP + -0x4]
LAB_00530c90:
00530C90  3C 05                     CMP AL,0x5
00530C92  C7 45 F0 01 00 00 00      MOV dword ptr [EBP + -0x10],0x1
00530C99  C6 45 D8 04               MOV byte ptr [EBP + -0x28],0x4
00530C9D  74 03                     JZ 0x00530ca2
00530C9F  88 45 D8                  MOV byte ptr [EBP + -0x28],AL
LAB_00530ca2:
00530CA2  33 C9                     XOR ECX,ECX
00530CA4  3C 05                     CMP AL,0x5
00530CA6  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00530CA9  0F 95 C1                  SETNZ CL
00530CAC  49                        DEC ECX
00530CAD  25 FF 00 00 00            AND EAX,0xff
00530CB2  83 E1 04                  AND ECX,0x4
00530CB5  83 E8 05                  SUB EAX,0x5
00530CB8  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
00530CBB  0F 84 CF 01 00 00         JZ 0x00530e90
00530CC1  48                        DEC EAX
00530CC2  0F 84 F0 00 00 00         JZ 0x00530db8
00530CC8  48                        DEC EAX
00530CC9  0F 85 EA 01 00 00         JNZ 0x00530eb9
00530CCF  A1 58 76 80 00            MOV EAX,[0x00807658]
00530CD4  33 F6                     XOR ESI,ESI
00530CD6  3B C6                     CMP EAX,ESI
00530CD8  74 0E                     JZ 0x00530ce8
00530CDA  8B 15 5C 76 80 00         MOV EDX,dword ptr [0x0080765c]
00530CE0  8B 42 38                  MOV EAX,dword ptr [EDX + 0x38]
00530CE3  83 E0 01                  AND EAX,0x1
00530CE6  EB 02                     JMP 0x00530cea
LAB_00530ce8:
00530CE8  33 C0                     XOR EAX,EAX
LAB_00530cea:
00530CEA  3B C6                     CMP EAX,ESI
00530CEC  75 0B                     JNZ 0x00530cf9
00530CEE  89 75 E4                  MOV dword ptr [EBP + -0x1c],ESI
00530CF1  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
00530CF4  E9 C0 01 00 00            JMP 0x00530eb9
LAB_00530cf9:
00530CF9  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00530CFE  8D 95 B4 FE FF FF         LEA EDX,[EBP + 0xfffffeb4]
00530D04  8D 8D B0 FE FF FF         LEA ECX,[EBP + 0xfffffeb0]
00530D0A  56                        PUSH ESI
00530D0B  52                        PUSH EDX
00530D0C  89 85 B0 FE FF FF         MOV dword ptr [EBP + 0xfffffeb0],EAX
00530D12  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00530D18  E8 D3 CA 1F 00            CALL 0x0072d7f0
00530D1D  83 C4 08                  ADD ESP,0x8
00530D20  3B C6                     CMP EAX,ESI
00530D22  75 49                     JNZ 0x00530d6d
00530D24  A1 58 76 80 00            MOV EAX,[0x00807658]
00530D29  8B 15 5C 76 80 00         MOV EDX,dword ptr [0x0080765c]
00530D2F  3B C6                     CMP EAX,ESI
00530D31  74 08                     JZ 0x00530d3b
00530D33  8B 42 38                  MOV EAX,dword ptr [EDX + 0x38]
00530D36  83 E0 01                  AND EAX,0x1
00530D39  EB 02                     JMP 0x00530d3d
LAB_00530d3b:
00530D3B  33 C0                     XOR EAX,EAX
LAB_00530d3d:
00530D3D  3B C6                     CMP EAX,ESI
00530D3F  74 15                     JZ 0x00530d56
00530D41  8D 45 98                  LEA EAX,[EBP + -0x68]
00530D44  8D 4D A4                  LEA ECX,[EBP + -0x5c]
00530D47  50                        PUSH EAX
00530D48  51                        PUSH ECX
00530D49  56                        PUSH ESI
00530D4A  52                        PUSH EDX
00530D4B  E8 B0 70 18 00            CALL 0x006b7e00
00530D50  8B 15 5C 76 80 00         MOV EDX,dword ptr [0x0080765c]
LAB_00530d56:
00530D56  8B 85 B0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeb0]
00530D5C  8B 4D A4                  MOV ECX,dword ptr [EBP + -0x5c]
00530D5F  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00530D64  8B 45 98                  MOV EAX,dword ptr [EBP + -0x68]
00530D67  03 C8                     ADD ECX,EAX
00530D69  D1 E9                     SHR ECX,0x1
00530D6B  EB 14                     JMP 0x00530d81
LAB_00530d6d:
00530D6D  8B 8D B0 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffeb0]
00530D73  8B 15 5C 76 80 00         MOV EDX,dword ptr [0x0080765c]
00530D79  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00530D7F  33 C9                     XOR ECX,ECX
LAB_00530d81:
00530D81  39 35 58 76 80 00         CMP dword ptr [0x00807658],ESI
00530D87  74 08                     JZ 0x00530d91
00530D89  8B 42 38                  MOV EAX,dword ptr [EDX + 0x38]
00530D8C  83 E0 01                  AND EAX,0x1
00530D8F  EB 02                     JMP 0x00530d93
LAB_00530d91:
00530D91  33 C0                     XOR EAX,EAX
LAB_00530d93:
00530D93  3B C6                     CMP EAX,ESI
00530D95  74 09                     JZ 0x00530da0
00530D97  8B 72 4C                  MOV ESI,dword ptr [EDX + 0x4c]
00530D9A  8B 7A 48                  MOV EDI,dword ptr [EDX + 0x48]
LAB_00530d9d:
00530D9D  2B F7                     SUB ESI,EDI
00530D9F  46                        INC ESI
LAB_00530da0:
00530DA0  8B C1                     MOV EAX,ECX
00530DA2  33 D2                     XOR EDX,EDX
00530DA4  C1 E0 05                  SHL EAX,0x5
00530DA7  2B C1                     SUB EAX,ECX
00530DA9  8B 5D DC                  MOV EBX,dword ptr [EBP + -0x24]
00530DAC  F7 F6                     DIV ESI
00530DAE  8B F0                     MOV ESI,EAX
00530DB0  89 75 E4                  MOV dword ptr [EBP + -0x1c],ESI
00530DB3  E9 01 01 00 00            JMP 0x00530eb9
LAB_00530db8:
00530DB8  A1 58 76 80 00            MOV EAX,[0x00807658]
00530DBD  33 F6                     XOR ESI,ESI
00530DBF  3B C6                     CMP EAX,ESI
00530DC1  74 0E                     JZ 0x00530dd1
00530DC3  8B 15 5C 76 80 00         MOV EDX,dword ptr [0x0080765c]
00530DC9  8B 42 50                  MOV EAX,dword ptr [EDX + 0x50]
00530DCC  83 E0 01                  AND EAX,0x1
00530DCF  EB 02                     JMP 0x00530dd3
LAB_00530dd1:
00530DD1  33 C0                     XOR EAX,EAX
LAB_00530dd3:
00530DD3  3B C6                     CMP EAX,ESI
00530DD5  75 0B                     JNZ 0x00530de2
00530DD7  89 75 E4                  MOV dword ptr [EBP + -0x1c],ESI
00530DDA  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
00530DDD  E9 D7 00 00 00            JMP 0x00530eb9
LAB_00530de2:
00530DE2  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00530DE7  8D 95 A4 FD FF FF         LEA EDX,[EBP + 0xfffffda4]
00530DED  8D 8D A0 FD FF FF         LEA ECX,[EBP + 0xfffffda0]
00530DF3  56                        PUSH ESI
00530DF4  52                        PUSH EDX
00530DF5  89 85 A0 FD FF FF         MOV dword ptr [EBP + 0xfffffda0],EAX
00530DFB  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00530E01  E8 EA C9 1F 00            CALL 0x0072d7f0
00530E06  83 C4 08                  ADD ESP,0x8
00530E09  3B C6                     CMP EAX,ESI
00530E0B  75 4A                     JNZ 0x00530e57
00530E0D  A1 58 76 80 00            MOV EAX,[0x00807658]
00530E12  8B 15 5C 76 80 00         MOV EDX,dword ptr [0x0080765c]
00530E18  3B C6                     CMP EAX,ESI
00530E1A  74 08                     JZ 0x00530e24
00530E1C  8B 42 50                  MOV EAX,dword ptr [EDX + 0x50]
00530E1F  83 E0 01                  AND EAX,0x1
00530E22  EB 02                     JMP 0x00530e26
LAB_00530e24:
00530E24  33 C0                     XOR EAX,EAX
LAB_00530e26:
00530E26  3B C6                     CMP EAX,ESI
00530E28  74 16                     JZ 0x00530e40
00530E2A  8D 45 94                  LEA EAX,[EBP + -0x6c]
00530E2D  8D 4D 90                  LEA ECX,[EBP + -0x70]
00530E30  50                        PUSH EAX
00530E31  51                        PUSH ECX
00530E32  6A 01                     PUSH 0x1
00530E34  52                        PUSH EDX
00530E35  E8 C6 6F 18 00            CALL 0x006b7e00
00530E3A  8B 15 5C 76 80 00         MOV EDX,dword ptr [0x0080765c]
LAB_00530e40:
00530E40  8B 85 A0 FD FF FF         MOV EAX,dword ptr [EBP + 0xfffffda0]
00530E46  8B 4D 90                  MOV ECX,dword ptr [EBP + -0x70]
00530E49  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00530E4E  8B 45 94                  MOV EAX,dword ptr [EBP + -0x6c]
00530E51  03 C8                     ADD ECX,EAX
00530E53  D1 E9                     SHR ECX,0x1
00530E55  EB 14                     JMP 0x00530e6b
LAB_00530e57:
00530E57  8B 8D A0 FD FF FF         MOV ECX,dword ptr [EBP + 0xfffffda0]
00530E5D  8B 15 5C 76 80 00         MOV EDX,dword ptr [0x0080765c]
00530E63  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00530E69  33 C9                     XOR ECX,ECX
LAB_00530e6b:
00530E6B  39 35 58 76 80 00         CMP dword ptr [0x00807658],ESI
00530E71  74 08                     JZ 0x00530e7b
00530E73  8B 42 50                  MOV EAX,dword ptr [EDX + 0x50]
00530E76  83 E0 01                  AND EAX,0x1
00530E79  EB 02                     JMP 0x00530e7d
LAB_00530e7b:
00530E7B  33 C0                     XOR EAX,EAX
LAB_00530e7d:
00530E7D  3B C6                     CMP EAX,ESI
00530E7F  0F 84 1B FF FF FF         JZ 0x00530da0
00530E85  8B 72 64                  MOV ESI,dword ptr [EDX + 0x64]
00530E88  8B 7A 60                  MOV EDI,dword ptr [EDX + 0x60]
00530E8B  E9 0D FF FF FF            JMP 0x00530d9d
LAB_00530e90:
00530E90  8B 15 0E 73 80 00         MOV EDX,dword ptr [0x0080730e]
00530E96  8D 82 A0 0F 00 00         LEA EAX,[EDX + 0xfa0]
00530E9C  8B C8                     MOV ECX,EAX
00530E9E  C1 E1 05                  SHL ECX,0x5
00530EA1  2B C8                     SUB ECX,EAX
00530EA3  B8 D3 05 85 41            MOV EAX,0x418505d3
00530EA8  F7 E9                     IMUL ECX
00530EAA  C1 FA 0A                  SAR EDX,0xa
00530EAD  8B C2                     MOV EAX,EDX
00530EAF  C1 E8 1F                  SHR EAX,0x1f
00530EB2  03 D0                     ADD EDX,EAX
00530EB4  8B F2                     MOV ESI,EDX
00530EB6  89 75 E4                  MOV dword ptr [EBP + -0x1c],ESI
LAB_00530eb9:
00530EB9  8B 7D D8                  MOV EDI,dword ptr [EBP + -0x28]
00530EBC  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
00530EBF  81 E7 FF 00 00 00         AND EDI,0xff
00530EC5  03 D7                     ADD EDX,EDI
00530EC7  8D 0C 7F                  LEA ECX,[EDI + EDI*0x2]
00530ECA  8D 44 8A 29               LEA EAX,[EDX + ECX*0x4 + 0x29]
00530ECE  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00530ED1  51                        PUSH ECX
00530ED2  56                        PUSH ESI
00530ED3  8D 97 9F C0 00 00         LEA EDX,[EDI + 0xc09f]
00530ED9  6A 1F                     PUSH 0x1f
00530EDB  52                        PUSH EDX
00530EDC  50                        PUSH EAX
00530EDD  68 F9 00 00 00            PUSH 0xf9
00530EE2  50                        PUSH EAX
00530EE3  6A 6D                     PUSH 0x6d
00530EE5  8B CB                     MOV ECX,EBX
00530EE7  E8 F4 2F ED FF            CALL 0x00403ee0
00530EEC  89 84 BB B5 01 00 00      MOV dword ptr [EBX + EDI*0x4 + 0x1b5],EAX
00530EF3  8A 45 D8                  MOV AL,byte ptr [EBP + -0x28]
00530EF6  2C 04                     SUB AL,0x4
00530EF8  56                        PUSH ESI
00530EF9  50                        PUSH EAX
00530EFA  8B CB                     MOV ECX,EBX
00530EFC  E8 F2 4E ED FF            CALL 0x00405df3
00530F01  8A 45 FC                  MOV AL,byte ptr [EBP + -0x4]
00530F04  FE C0                     INC AL
00530F06  3C 08                     CMP AL,0x8
00530F08  88 45 FC                  MOV byte ptr [EBP + -0x4],AL
00530F0B  0F 82 7C FD FF FF         JC 0x00530c8d
00530F11  E9 74 0C 00 00            JMP 0x00531b8a
switchD_005305d4::caseD_7:
00530F16  A1 00 73 80 00            MOV EAX,[0x00807300]
00530F1B  25 FF 00 00 00            AND EAX,0xff
00530F20  48                        DEC EAX
00530F21  74 0F                     JZ 0x00530f32
00530F23  48                        DEC EAX
00530F24  74 06                     JZ 0x00530f2c
00530F26  C6 45 D8 01               MOV byte ptr [EBP + -0x28],0x1
00530F2A  EB 0A                     JMP 0x00530f36
LAB_00530f2c:
00530F2C  C6 45 D8 02               MOV byte ptr [EBP + -0x28],0x2
00530F30  EB 04                     JMP 0x00530f36
LAB_00530f32:
00530F32  C6 45 D8 00               MOV byte ptr [EBP + -0x28],0x0
LAB_00530f36:
00530F36  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
00530F39  68 AF C0 00 00            PUSH 0xc0af
00530F3E  68 9F C0 00 00            PUSH 0xc09f
00530F43  6A 12                     PUSH 0x12
00530F45  6A 00                     PUSH 0x0
00530F47  6A 11                     PUSH 0x11
00530F49  68 E9 00 00 00            PUSH 0xe9
00530F4E  6A 16                     PUSH 0x16
00530F50  6A 1D                     PUSH 0x1d
00530F52  50                        PUSH EAX
00530F53  6A 03                     PUSH 0x3
00530F55  8B CB                     MOV ECX,EBX
00530F57  E8 24 17 ED FF            CALL 0x00402680
00530F5C  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
00530F5F  89 83 B5 01 00 00         MOV dword ptr [EBX + 0x1b5],EAX
00530F65  8B 3D 5C 76 80 00         MOV EDI,dword ptr [0x0080765c]
00530F6B  8B 15 58 76 80 00         MOV EDX,dword ptr [0x00807658]
00530F71  C6 45 FC 05               MOV byte ptr [EBP + -0x4],0x5
00530F75  8A 4D FC                  MOV CL,byte ptr [EBP + -0x4]
00530F78  EB 06                     JMP 0x00530f80
LAB_00530f7a:
00530F7A  8B 15 58 76 80 00         MOV EDX,dword ptr [0x00807658]
LAB_00530f80:
00530F80  80 F9 05                  CMP CL,0x5
00530F83  C7 45 E4 01 00 00 00      MOV dword ptr [EBP + -0x1c],0x1
00530F8A  C6 45 E0 04               MOV byte ptr [EBP + -0x20],0x4
00530F8E  74 03                     JZ 0x00530f93
00530F90  88 4D E0                  MOV byte ptr [EBP + -0x20],CL
LAB_00530f93:
00530F93  33 C0                     XOR EAX,EAX
00530F95  80 F9 05                  CMP CL,0x5
00530F98  0F 95 C0                  SETNZ AL
00530F9B  48                        DEC EAX
00530F9C  83 E0 04                  AND EAX,0x4
00530F9F  89 45 CC                  MOV dword ptr [EBP + -0x34],EAX
00530FA2  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00530FA5  25 FF 00 00 00            AND EAX,0xff
00530FAA  83 E8 05                  SUB EAX,0x5
00530FAD  0F 84 C5 01 00 00         JZ 0x00531178
00530FB3  48                        DEC EAX
00530FB4  0F 84 ED 00 00 00         JZ 0x005310a7
00530FBA  48                        DEC EAX
00530FBB  0F 85 CA 03 00 00         JNZ 0x0053138b
00530FC1  33 F6                     XOR ESI,ESI
00530FC3  3B D6                     CMP EDX,ESI
00530FC5  74 08                     JZ 0x00530fcf
00530FC7  8B 47 38                  MOV EAX,dword ptr [EDI + 0x38]
00530FCA  83 E0 01                  AND EAX,0x1
00530FCD  EB 02                     JMP 0x00530fd1
LAB_00530fcf:
00530FCF  33 C0                     XOR EAX,EAX
LAB_00530fd1:
00530FD1  3B C6                     CMP EAX,ESI
00530FD3  75 0B                     JNZ 0x00530fe0
00530FD5  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
00530FD8  89 75 E4                  MOV dword ptr [EBP + -0x1c],ESI
00530FDB  E9 AB 03 00 00            JMP 0x0053138b
LAB_00530fe0:
00530FE0  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
00530FE6  8D 85 60 FD FF FF         LEA EAX,[EBP + 0xfffffd60]
00530FEC  8D 95 5C FD FF FF         LEA EDX,[EBP + 0xfffffd5c]
00530FF2  56                        PUSH ESI
00530FF3  50                        PUSH EAX
00530FF4  89 8D 5C FD FF FF         MOV dword ptr [EBP + 0xfffffd5c],ECX
00530FFA  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00531000  E8 EB C7 1F 00            CALL 0x0072d7f0
00531005  83 C4 08                  ADD ESP,0x8
00531008  85 C0                     TEST EAX,EAX
0053100A  75 4B                     JNZ 0x00531057
0053100C  A1 58 76 80 00            MOV EAX,[0x00807658]
00531011  8B 15 5C 76 80 00         MOV EDX,dword ptr [0x0080765c]
00531017  85 C0                     TEST EAX,EAX
00531019  74 08                     JZ 0x00531023
0053101B  8B 42 38                  MOV EAX,dword ptr [EDX + 0x38]
0053101E  83 E0 01                  AND EAX,0x1
00531021  EB 02                     JMP 0x00531025
LAB_00531023:
00531023  33 C0                     XOR EAX,EAX
LAB_00531025:
00531025  85 C0                     TEST EAX,EAX
00531027  74 16                     JZ 0x0053103f
00531029  8D 4D B0                  LEA ECX,[EBP + -0x50]
0053102C  8D 45 AC                  LEA EAX,[EBP + -0x54]
0053102F  51                        PUSH ECX
00531030  50                        PUSH EAX
00531031  6A 00                     PUSH 0x0
00531033  52                        PUSH EDX
00531034  E8 C7 6D 18 00            CALL 0x006b7e00
00531039  8B 15 5C 76 80 00         MOV EDX,dword ptr [0x0080765c]
LAB_0053103f:
0053103F  8B 8D 5C FD FF FF         MOV ECX,dword ptr [EBP + 0xfffffd5c]
00531045  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
00531048  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0053104E  8B 4D AC                  MOV ECX,dword ptr [EBP + -0x54]
00531051  03 C8                     ADD ECX,EAX
00531053  D1 E9                     SHR ECX,0x1
00531055  EB 14                     JMP 0x0053106b
LAB_00531057:
00531057  8B 95 5C FD FF FF         MOV EDX,dword ptr [EBP + 0xfffffd5c]
0053105D  33 C9                     XOR ECX,ECX
0053105F  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00531065  8B 15 5C 76 80 00         MOV EDX,dword ptr [0x0080765c]
LAB_0053106b:
0053106B  A1 58 76 80 00            MOV EAX,[0x00807658]
00531070  85 C0                     TEST EAX,EAX
00531072  74 08                     JZ 0x0053107c
00531074  8B 42 38                  MOV EAX,dword ptr [EDX + 0x38]
00531077  83 E0 01                  AND EAX,0x1
0053107A  EB 02                     JMP 0x0053107e
LAB_0053107c:
0053107C  33 C0                     XOR EAX,EAX
LAB_0053107e:
0053107E  85 C0                     TEST EAX,EAX
00531080  74 0B                     JZ 0x0053108d
00531082  8B 72 4C                  MOV ESI,dword ptr [EDX + 0x4c]
00531085  8B 7A 48                  MOV EDI,dword ptr [EDX + 0x48]
00531088  2B F7                     SUB ESI,EDI
0053108A  46                        INC ESI
0053108B  EB 02                     JMP 0x0053108f
LAB_0053108d:
0053108D  33 F6                     XOR ESI,ESI
LAB_0053108f:
0053108F  8B C1                     MOV EAX,ECX
00531091  33 D2                     XOR EDX,EDX
00531093  C1 E0 05                  SHL EAX,0x5
00531096  2B C1                     SUB EAX,ECX
00531098  8B 5D DC                  MOV EBX,dword ptr [EBP + -0x24]
0053109B  F7 F6                     DIV ESI
0053109D  8B F0                     MOV ESI,EAX
0053109F  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
005310A2  E9 E4 02 00 00            JMP 0x0053138b
LAB_005310a7:
005310A7  33 F6                     XOR ESI,ESI
005310A9  3B D6                     CMP EDX,ESI
005310AB  74 08                     JZ 0x005310b5
005310AD  8B 47 50                  MOV EAX,dword ptr [EDI + 0x50]
005310B0  83 E0 01                  AND EAX,0x1
005310B3  EB 02                     JMP 0x005310b7
LAB_005310b5:
005310B5  33 C0                     XOR EAX,EAX
LAB_005310b7:
005310B7  3B C6                     CMP EAX,ESI
005310B9  75 0B                     JNZ 0x005310c6
005310BB  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
005310BE  89 75 E4                  MOV dword ptr [EBP + -0x1c],ESI
005310C1  E9 C5 02 00 00            JMP 0x0053138b
LAB_005310c6:
005310C6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005310CB  8D 95 E8 FD FF FF         LEA EDX,[EBP + 0xfffffde8]
005310D1  8D 8D E4 FD FF FF         LEA ECX,[EBP + 0xfffffde4]
005310D7  56                        PUSH ESI
005310D8  52                        PUSH EDX
005310D9  89 85 E4 FD FF FF         MOV dword ptr [EBP + 0xfffffde4],EAX
005310DF  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005310E5  E8 06 C7 1F 00            CALL 0x0072d7f0
005310EA  83 C4 08                  ADD ESP,0x8
005310ED  85 C0                     TEST EAX,EAX
005310EF  75 4A                     JNZ 0x0053113b
005310F1  A1 58 76 80 00            MOV EAX,[0x00807658]
005310F6  8B 15 5C 76 80 00         MOV EDX,dword ptr [0x0080765c]
005310FC  85 C0                     TEST EAX,EAX
005310FE  74 08                     JZ 0x00531108
00531100  8B 42 50                  MOV EAX,dword ptr [EDX + 0x50]
00531103  83 E0 01                  AND EAX,0x1
00531106  EB 02                     JMP 0x0053110a
LAB_00531108:
00531108  33 C0                     XOR EAX,EAX
LAB_0053110a:
0053110A  85 C0                     TEST EAX,EAX
0053110C  74 16                     JZ 0x00531124
0053110E  8D 45 9C                  LEA EAX,[EBP + -0x64]
00531111  8D 4D BC                  LEA ECX,[EBP + -0x44]
00531114  50                        PUSH EAX
00531115  51                        PUSH ECX
00531116  6A 01                     PUSH 0x1
00531118  52                        PUSH EDX
00531119  E8 E2 6C 18 00            CALL 0x006b7e00
0053111E  8B 15 5C 76 80 00         MOV EDX,dword ptr [0x0080765c]
LAB_00531124:
00531124  8B 85 E4 FD FF FF         MOV EAX,dword ptr [EBP + 0xfffffde4]
0053112A  8B 4D 9C                  MOV ECX,dword ptr [EBP + -0x64]
0053112D  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00531132  8B 45 BC                  MOV EAX,dword ptr [EBP + -0x44]
00531135  03 C8                     ADD ECX,EAX
00531137  D1 E9                     SHR ECX,0x1
00531139  EB 14                     JMP 0x0053114f
LAB_0053113b:
0053113B  8B 8D E4 FD FF FF         MOV ECX,dword ptr [EBP + 0xfffffde4]
00531141  8B 15 5C 76 80 00         MOV EDX,dword ptr [0x0080765c]
00531147  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0053114D  33 C9                     XOR ECX,ECX
LAB_0053114f:
0053114F  A1 58 76 80 00            MOV EAX,[0x00807658]
00531154  85 C0                     TEST EAX,EAX
00531156  74 08                     JZ 0x00531160
00531158  8B 42 50                  MOV EAX,dword ptr [EDX + 0x50]
0053115B  83 E0 01                  AND EAX,0x1
0053115E  EB 02                     JMP 0x00531162
LAB_00531160:
00531160  33 C0                     XOR EAX,EAX
LAB_00531162:
00531162  85 C0                     TEST EAX,EAX
00531164  0F 84 23 FF FF FF         JZ 0x0053108d
0053116A  8B 72 64                  MOV ESI,dword ptr [EDX + 0x64]
0053116D  8B 7A 60                  MOV EDI,dword ptr [EDX + 0x60]
00531170  2B F7                     SUB ESI,EDI
00531172  46                        INC ESI
00531173  E9 17 FF FF FF            JMP 0x0053108f
LAB_00531178:
00531178  80 3D 00 73 80 00 02      CMP byte ptr [0x00807300],0x2
0053117F  75 29                     JNZ 0x005311aa
00531181  A1 58 76 80 00            MOV EAX,[0x00807658]
00531186  33 D2                     XOR EDX,EDX
00531188  3B C2                     CMP EAX,EDX
0053118A  74 0B                     JZ 0x00531197
0053118C  8B 87 80 00 00 00         MOV EAX,dword ptr [EDI + 0x80]
00531192  83 E0 01                  AND EAX,0x1
00531195  EB 02                     JMP 0x00531199
LAB_00531197:
00531197  33 C0                     XOR EAX,EAX
LAB_00531199:
00531199  3B C2                     CMP EAX,EDX
0053119B  75 0F                     JNZ 0x005311ac
0053119D  33 F6                     XOR ESI,ESI
0053119F  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
005311A2  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
005311A5  E9 E1 01 00 00            JMP 0x0053138b
LAB_005311aa:
005311AA  33 D2                     XOR EDX,EDX
LAB_005311ac:
005311AC  80 3D 00 73 80 00 04      CMP byte ptr [0x00807300],0x4
005311B3  75 23                     JNZ 0x005311d8
005311B5  39 15 58 76 80 00         CMP dword ptr [0x00807658],EDX
005311BB  74 08                     JZ 0x005311c5
005311BD  8B 47 68                  MOV EAX,dword ptr [EDI + 0x68]
005311C0  83 E0 01                  AND EAX,0x1
005311C3  EB 02                     JMP 0x005311c7
LAB_005311c5:
005311C5  33 C0                     XOR EAX,EAX
LAB_005311c7:
005311C7  3B C2                     CMP EAX,EDX
005311C9  75 0D                     JNZ 0x005311d8
switchD_005311ec::caseD_1:
005311CB  33 F6                     XOR ESI,ESI
005311CD  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
005311D0  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
005311D3  E9 B3 01 00 00            JMP 0x0053138b
LAB_005311d8:
005311D8  A1 00 73 80 00            MOV EAX,[0x00807300]
005311DD  25 FF 00 00 00            AND EAX,0xff
005311E2  48                        DEC EAX
005311E3  83 F8 07                  CMP EAX,0x7
005311E6  0F 87 F0 01 00 00         JA 0x005313dc
switchD_005311ec::switchD:
005311EC  FF 24 85 00 1D 53 00      JMP dword ptr [EAX*0x4 + 0x531d00]
switchD_005311ec::caseD_2:
005311F3  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
005311F9  8D 85 6C FE FF FF         LEA EAX,[EBP + 0xfffffe6c]
005311FF  89 8D 6C FE FF FF         MOV dword ptr [EBP + 0xfffffe6c],ECX
00531205  8D 8D 70 FE FF FF         LEA ECX,[EBP + 0xfffffe70]
0053120B  52                        PUSH EDX
0053120C  51                        PUSH ECX
0053120D  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00531212  E8 D9 C5 1F 00            CALL 0x0072d7f0
00531217  83 C4 08                  ADD ESP,0x8
0053121A  85 C0                     TEST EAX,EAX
0053121C  75 4D                     JNZ 0x0053126b
0053121E  A1 58 76 80 00            MOV EAX,[0x00807658]
00531223  8B 15 5C 76 80 00         MOV EDX,dword ptr [0x0080765c]
00531229  85 C0                     TEST EAX,EAX
0053122B  74 0B                     JZ 0x00531238
0053122D  8B 82 80 00 00 00         MOV EAX,dword ptr [EDX + 0x80]
00531233  83 E0 01                  AND EAX,0x1
00531236  EB 02                     JMP 0x0053123a
LAB_00531238:
00531238  33 C0                     XOR EAX,EAX
LAB_0053123a:
0053123A  85 C0                     TEST EAX,EAX
0053123C  74 16                     JZ 0x00531254
0053123E  8D 45 B4                  LEA EAX,[EBP + -0x4c]
00531241  8D 4D B8                  LEA ECX,[EBP + -0x48]
00531244  50                        PUSH EAX
00531245  51                        PUSH ECX
00531246  6A 03                     PUSH 0x3
00531248  52                        PUSH EDX
00531249  E8 B2 6B 18 00            CALL 0x006b7e00
0053124E  8B 15 5C 76 80 00         MOV EDX,dword ptr [0x0080765c]
LAB_00531254:
00531254  8B 85 6C FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffe6c]
0053125A  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
0053125D  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00531262  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
00531265  03 C8                     ADD ECX,EAX
00531267  D1 E9                     SHR ECX,0x1
00531269  EB 14                     JMP 0x0053127f
LAB_0053126b:
0053126B  8B 8D 6C FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffe6c]
00531271  8B 15 5C 76 80 00         MOV EDX,dword ptr [0x0080765c]
00531277  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0053127D  33 C9                     XOR ECX,ECX
LAB_0053127f:
0053127F  A1 58 76 80 00            MOV EAX,[0x00807658]
00531284  85 C0                     TEST EAX,EAX
00531286  74 0B                     JZ 0x00531293
00531288  8B 82 80 00 00 00         MOV EAX,dword ptr [EDX + 0x80]
0053128E  83 E0 01                  AND EAX,0x1
00531291  EB 02                     JMP 0x00531295
LAB_00531293:
00531293  33 C0                     XOR EAX,EAX
LAB_00531295:
00531295  85 C0                     TEST EAX,EAX
00531297  0F 84 F0 FD FF FF         JZ 0x0053108d
0053129D  8B B2 94 00 00 00         MOV ESI,dword ptr [EDX + 0x94]
005312A3  8B BA 90 00 00 00         MOV EDI,dword ptr [EDX + 0x90]
005312A9  2B F7                     SUB ESI,EDI
005312AB  46                        INC ESI
005312AC  E9 DE FD FF FF            JMP 0x0053108f
switchD_005311ec::caseD_4:
005312B1  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005312B6  8D 8D 28 FE FF FF         LEA ECX,[EBP + 0xfffffe28]
005312BC  89 85 28 FE FF FF         MOV dword ptr [EBP + 0xfffffe28],EAX
005312C2  8D 85 2C FE FF FF         LEA EAX,[EBP + 0xfffffe2c]
005312C8  52                        PUSH EDX
005312C9  50                        PUSH EAX
005312CA  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005312D0  E8 1B C5 1F 00            CALL 0x0072d7f0
005312D5  83 C4 08                  ADD ESP,0x8
005312D8  85 C0                     TEST EAX,EAX
005312DA  75 4B                     JNZ 0x00531327
005312DC  A1 58 76 80 00            MOV EAX,[0x00807658]
005312E1  8B 15 5C 76 80 00         MOV EDX,dword ptr [0x0080765c]
005312E7  85 C0                     TEST EAX,EAX
005312E9  74 08                     JZ 0x005312f3
005312EB  8B 42 68                  MOV EAX,dword ptr [EDX + 0x68]
005312EE  83 E0 01                  AND EAX,0x1
005312F1  EB 02                     JMP 0x005312f5
LAB_005312f3:
005312F3  33 C0                     XOR EAX,EAX
LAB_005312f5:
005312F5  85 C0                     TEST EAX,EAX
005312F7  74 16                     JZ 0x0053130f
005312F9  8D 4D A8                  LEA ECX,[EBP + -0x58]
005312FC  8D 45 A0                  LEA EAX,[EBP + -0x60]
005312FF  51                        PUSH ECX
00531300  50                        PUSH EAX
00531301  6A 02                     PUSH 0x2
00531303  52                        PUSH EDX
00531304  E8 F7 6A 18 00            CALL 0x006b7e00
00531309  8B 15 5C 76 80 00         MOV EDX,dword ptr [0x0080765c]
LAB_0053130f:
0053130F  8B 8D 28 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffe28]
00531315  8B 45 A8                  MOV EAX,dword ptr [EBP + -0x58]
00531318  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0053131E  8B 4D A0                  MOV ECX,dword ptr [EBP + -0x60]
00531321  03 C8                     ADD ECX,EAX
00531323  D1 E9                     SHR ECX,0x1
00531325  EB 14                     JMP 0x0053133b
LAB_00531327:
00531327  8B 95 28 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffe28]
0053132D  33 C9                     XOR ECX,ECX
0053132F  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00531335  8B 15 5C 76 80 00         MOV EDX,dword ptr [0x0080765c]
LAB_0053133b:
0053133B  A1 58 76 80 00            MOV EAX,[0x00807658]
00531340  85 C0                     TEST EAX,EAX
00531342  74 08                     JZ 0x0053134c
00531344  8B 42 68                  MOV EAX,dword ptr [EDX + 0x68]
00531347  83 E0 01                  AND EAX,0x1
0053134A  EB 02                     JMP 0x0053134e
LAB_0053134c:
0053134C  33 C0                     XOR EAX,EAX
LAB_0053134e:
0053134E  85 C0                     TEST EAX,EAX
00531350  0F 84 37 FD FF FF         JZ 0x0053108d
00531356  8B 72 7C                  MOV ESI,dword ptr [EDX + 0x7c]
00531359  8B 7A 78                  MOV EDI,dword ptr [EDX + 0x78]
0053135C  2B F7                     SUB ESI,EDI
0053135E  46                        INC ESI
0053135F  E9 2B FD FF FF            JMP 0x0053108f
switchD_005311ec::caseD_8:
00531364  A1 0A 73 80 00            MOV EAX,[0x0080730a]
00531369  05 A0 0F 00 00            ADD EAX,0xfa0
0053136E  8B C8                     MOV ECX,EAX
00531370  C1 E1 05                  SHL ECX,0x5
00531373  2B C8                     SUB ECX,EAX
00531375  B8 D3 05 85 41            MOV EAX,0x418505d3
0053137A  F7 E9                     IMUL ECX
0053137C  C1 FA 0A                  SAR EDX,0xa
0053137F  8B CA                     MOV ECX,EDX
00531381  C1 E9 1F                  SHR ECX,0x1f
00531384  03 D1                     ADD EDX,ECX
00531386  8B F2                     MOV ESI,EDX
00531388  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
LAB_0053138b:
0053138B  8B 7D E0                  MOV EDI,dword ptr [EBP + -0x20]
0053138E  8B 45 CC                  MOV EAX,dword ptr [EBP + -0x34]
00531391  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
00531394  81 E7 FF 00 00 00         AND EDI,0xff
0053139A  03 C7                     ADD EAX,EDI
0053139C  51                        PUSH ECX
0053139D  8D 14 7F                  LEA EDX,[EDI + EDI*0x2]
005313A0  56                        PUSH ESI
005313A1  6A 1F                     PUSH 0x1f
005313A3  8B CB                     MOV ECX,EBX
005313A5  8D 44 90 29               LEA EAX,[EAX + EDX*0x4 + 0x29]
005313A9  8D 97 9F C0 00 00         LEA EDX,[EDI + 0xc09f]
005313AF  52                        PUSH EDX
005313B0  50                        PUSH EAX
005313B1  68 F9 00 00 00            PUSH 0xf9
005313B6  50                        PUSH EAX
005313B7  6A 6D                     PUSH 0x6d
005313B9  E8 22 2B ED FF            CALL 0x00403ee0
005313BE  89 84 BB B5 01 00 00      MOV dword ptr [EBX + EDI*0x4 + 0x1b5],EAX
005313C5  8A 45 E0                  MOV AL,byte ptr [EBP + -0x20]
005313C8  2C 04                     SUB AL,0x4
005313CA  56                        PUSH ESI
005313CB  50                        PUSH EAX
005313CC  8B CB                     MOV ECX,EBX
005313CE  E8 20 4A ED FF            CALL 0x00405df3
005313D3  8B 3D 5C 76 80 00         MOV EDI,dword ptr [0x0080765c]
005313D9  8A 4D FC                  MOV CL,byte ptr [EBP + -0x4]
switchD_005311ec::caseD_3:
005313DC  FE C1                     INC CL
005313DE  80 F9 08                  CMP CL,0x8
005313E1  88 4D FC                  MOV byte ptr [EBP + -0x4],CL
005313E4  0F 82 90 FB FF FF         JC 0x00530f7a
005313EA  E9 9B 07 00 00            JMP 0x00531b8a
switchD_005305d4::caseD_3:
005313EF  3C 0E                     CMP AL,0xe
005313F1  0F 84 C5 00 00 00         JZ 0x005314bc
005313F7  8B 83 DD 01 00 00         MOV EAX,dword ptr [EBX + 0x1dd]
005313FD  85 C0                     TEST EAX,EAX
005313FF  74 11                     JZ 0x00531412
00531401  50                        PUSH EAX
00531402  FF 15 AC BC 85 00         CALL dword ptr [0x0085bcac]
00531408  C7 83 DD 01 00 00 00 00 00 00  MOV dword ptr [EBX + 0x1dd],0x0
LAB_00531412:
00531412  83 C9 FF                  OR ECX,0xffffffff
00531415  BF 80 76 80 00            MOV EDI,0x807680
0053141A  33 C0                     XOR EAX,EAX
0053141C  8D 53 6C                  LEA EDX,[EBX + 0x6c]
0053141F  F2 AE                     SCASB.REPNE ES:EDI
00531421  F7 D1                     NOT ECX
00531423  2B F9                     SUB EDI,ECX
00531425  8B C1                     MOV EAX,ECX
00531427  8B F7                     MOV ESI,EDI
00531429  8B FA                     MOV EDI,EDX
0053142B  C1 E9 02                  SHR ECX,0x2
0053142E  F3 A5                     MOVSD.REP ES:EDI,ESI
00531430  8B C8                     MOV ECX,EAX
00531432  33 C0                     XOR EAX,EAX
00531434  83 E1 03                  AND ECX,0x3
00531437  F3 A4                     MOVSB.REP ES:EDI,ESI
00531439  8B 3D EC AC 79 00         MOV EDI,dword ptr [0x0079acec]
0053143F  83 C9 FF                  OR ECX,0xffffffff
00531442  F2 AE                     SCASB.REPNE ES:EDI
00531444  F7 D1                     NOT ECX
00531446  2B F9                     SUB EDI,ECX
00531448  8B C1                     MOV EAX,ECX
0053144A  8B F7                     MOV ESI,EDI
0053144C  8B FA                     MOV EDI,EDX
0053144E  8B D0                     MOV EDX,EAX
00531450  83 C9 FF                  OR ECX,0xffffffff
00531453  33 C0                     XOR EAX,EAX
00531455  F2 AE                     SCASB.REPNE ES:EDI
00531457  8B CA                     MOV ECX,EDX
00531459  4F                        DEC EDI
0053145A  C1 E9 02                  SHR ECX,0x2
0053145D  F3 A5                     MOVSD.REP ES:EDI,ESI
0053145F  8B CA                     MOV ECX,EDX
00531461  83 E1 03                  AND ECX,0x3
00531464  F3 A4                     MOVSB.REP ES:EDI,ESI
00531466  BF DD 7D 80 00            MOV EDI,0x807ddd
0053146B  83 C9 FF                  OR ECX,0xffffffff
0053146E  F2 AE                     SCASB.REPNE ES:EDI
00531470  F7 D1                     NOT ECX
00531472  2B F9                     SUB EDI,ECX
00531474  8B F7                     MOV ESI,EDI
00531476  8B D1                     MOV EDX,ECX
00531478  8D 7B 6C                  LEA EDI,[EBX + 0x6c]
0053147B  83 C9 FF                  OR ECX,0xffffffff
0053147E  F2 AE                     SCASB.REPNE ES:EDI
00531480  8B CA                     MOV ECX,EDX
00531482  4F                        DEC EDI
00531483  C1 E9 02                  SHR ECX,0x2
00531486  F3 A5                     MOVSD.REP ES:EDI,ESI
00531488  8B CA                     MOV ECX,EDX
0053148A  8D 43 6C                  LEA EAX,[EBX + 0x6c]
0053148D  83 E1 03                  AND ECX,0x3
00531490  50                        PUSH EAX
00531491  F3 A4                     MOVSB.REP ES:EDI,ESI
00531493  50                        PUSH EAX
00531494  E8 27 64 18 00            CALL 0x006b78c0
00531499  6A 01                     PUSH 0x1
0053149B  8D 43 6C                  LEA EAX,[EBX + 0x6c]
0053149E  6A 00                     PUSH 0x0
005314A0  50                        PUSH EAX
005314A1  FF 15 FC BC 85 00         CALL dword ptr [0x0085bcfc]
005314A7  83 F8 FF                  CMP EAX,-0x1
005314AA  89 83 DD 01 00 00         MOV dword ptr [EBX + 0x1dd],EAX
005314B0  75 0A                     JNZ 0x005314bc
005314B2  C7 83 DD 01 00 00 00 00 00 00  MOV dword ptr [EBX + 0x1dd],0x0
LAB_005314bc:
005314BC  8B 53 5C                  MOV EDX,dword ptr [EBX + 0x5c]
005314BF  B9 35 01 00 00            MOV ECX,0x135
005314C4  33 C0                     XOR EAX,EAX
005314C6  8D BD 88 F8 FF FF         LEA EDI,[EBP + 0xfffff888]
005314CC  F3 AB                     STOSD.REP ES:EDI
005314CE  8B 4B 3C                  MOV ECX,dword ptr [EBX + 0x3c]
005314D1  33 FF                     XOR EDI,EDI
005314D3  3B D7                     CMP EDX,EDI
005314D5  89 BD 88 F8 FF FF         MOV dword ptr [EBP + 0xfffff888],EDI
005314DB  8D 41 26                  LEA EAX,[ECX + 0x26]
005314DE  89 85 90 F8 FF FF         MOV dword ptr [EBP + 0xfffff890],EAX
005314E4  75 07                     JNZ 0x005314ed
005314E6  8B 43 48                  MOV EAX,dword ptr [EBX + 0x48]
005314E9  F7 D8                     NEG EAX
005314EB  EB 03                     JMP 0x005314f0
LAB_005314ed:
005314ED  8B 43 44                  MOV EAX,dword ptr [EBX + 0x44]
LAB_005314f0:
005314F0  83 C0 31                  ADD EAX,0x31
005314F3  BE 02 00 00 00            MOV ESI,0x2
005314F8  89 85 94 F8 FF FF         MOV dword ptr [EBP + 0xfffff894],EAX
005314FE  8B 43 08                  MOV EAX,dword ptr [EBX + 0x8]
00531501  89 85 B0 F8 FF FF         MOV dword ptr [EBP + 0xfffff8b0],EAX
00531507  89 85 D0 F8 FF FF         MOV dword ptr [EBP + 0xfffff8d0],EAX
0053150D  89 85 F0 F8 FF FF         MOV dword ptr [EBP + 0xfffff8f0],EAX
00531513  89 85 10 F9 FF FF         MOV dword ptr [EBP + 0xfffff910],EAX
00531519  A0 4C 73 80 00            MOV AL,[0x0080734c]
0053151E  C7 85 98 F8 FF FF C8 00 00 00  MOV dword ptr [EBP + 0xfffff898],0xc8
00531528  84 C0                     TEST AL,AL
0053152A  C7 85 9C F8 FF FF 43 00 00 00  MOV dword ptr [EBP + 0xfffff89c],0x43
00531534  89 BD A0 F8 FF FF         MOV dword ptr [EBP + 0xfffff8a0],EDI
0053153A  89 BD A4 F8 FF FF         MOV dword ptr [EBP + 0xfffff8a4],EDI
00531540  89 B5 B4 F8 FF FF         MOV dword ptr [EBP + 0xfffff8b4],ESI
00531546  C7 85 B8 F8 FF FF 60 81 00 00  MOV dword ptr [EBP + 0xfffff8b8],0x8160
00531550  89 B5 D4 F8 FF FF         MOV dword ptr [EBP + 0xfffff8d4],ESI
00531556  C7 85 D8 F8 FF FF 61 81 00 00  MOV dword ptr [EBP + 0xfffff8d8],0x8161
00531560  89 B5 F4 F8 FF FF         MOV dword ptr [EBP + 0xfffff8f4],ESI
00531566  C7 85 F8 F8 FF FF 62 81 00 00  MOV dword ptr [EBP + 0xfffff8f8],0x8162
00531570  89 B5 14 F9 FF FF         MOV dword ptr [EBP + 0xfffff914],ESI
00531576  C7 85 18 F9 FF FF 63 81 00 00  MOV dword ptr [EBP + 0xfffff918],0x8163
00531580  B8 01 00 00 00            MOV EAX,0x1
00531585  74 06                     JZ 0x0053158d
00531587  89 85 58 FD FF FF         MOV dword ptr [EBP + 0xfffffd58],EAX
LAB_0053158d:
0053158D  81 C1 F2 00 00 00         ADD ECX,0xf2
00531593  3B D7                     CMP EDX,EDI
00531595  89 B5 B4 F9 FF FF         MOV dword ptr [EBP + 0xfffff9b4],ESI
0053159B  89 BD B8 F9 FF FF         MOV dword ptr [EBP + 0xfffff9b8],EDI
005315A1  89 B5 BC F9 FF FF         MOV dword ptr [EBP + 0xfffff9bc],ESI
005315A7  89 85 C0 FA FF FF         MOV dword ptr [EBP + 0xfffffac0],EAX
005315AD  89 85 C4 FA FF FF         MOV dword ptr [EBP + 0xfffffac4],EAX
005315B3  89 8D C0 F9 FF FF         MOV dword ptr [EBP + 0xfffff9c0],ECX
005315B9  75 07                     JNZ 0x005315c2
005315BB  8B 43 48                  MOV EAX,dword ptr [EBX + 0x48]
005315BE  F7 D8                     NEG EAX
005315C0  EB 03                     JMP 0x005315c5
LAB_005315c2:
005315C2  8B 43 44                  MOV EAX,dword ptr [EBX + 0x44]
LAB_005315c5:
005315C5  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
005315CB  6A 01                     PUSH 0x1
005315CD  6A 00                     PUSH 0x0
005315CF  83 C0 30                  ADD EAX,0x30
005315D2  BF 24 00 00 00            MOV EDI,0x24
005315D7  68 E0 39 7C 00            PUSH 0x7c39e0
005315DC  51                        PUSH ECX
005315DD  89 85 C4 F9 FF FF         MOV dword ptr [EBP + 0xfffff9c4],EAX
005315E3  C7 85 C8 F9 FF FF 11 00 00 00  MOV dword ptr [EBP + 0xfffff9c8],0x11
005315ED  89 BD CC F9 FF FF         MOV dword ptr [EBP + 0xfffff9cc],EDI
005315F3  E8 78 94 1D 00            CALL 0x0070aa70
005315F8  8B 15 90 67 80 00         MOV EDX,dword ptr [0x00806790]
005315FE  6A 01                     PUSH 0x1
00531600  68 E0 39 7C 00            PUSH 0x7c39e0
00531605  6A 12                     PUSH 0x12
00531607  52                        PUSH EDX
00531608  89 85 DC FA FF FF         MOV dword ptr [EBP + 0xfffffadc],EAX
0053160E  E8 DD 90 1D 00            CALL 0x0070a6f0
00531613  8B 4B 3C                  MOV ECX,dword ptr [EBX + 0x3c]
00531616  89 85 E0 FA FF FF         MOV dword ptr [EBP + 0xfffffae0],EAX
0053161C  8B 43 08                  MOV EAX,dword ptr [EBX + 0x8]
0053161F  83 C4 20                  ADD ESP,0x20
00531622  89 85 18 FA FF FF         MOV dword ptr [EBP + 0xfffffa18],EAX
00531628  B8 01 00 00 00            MOV EAX,0x1
0053162D  89 85 40 FC FF FF         MOV dword ptr [EBP + 0xfffffc40],EAX
00531633  89 85 44 FC FF FF         MOV dword ptr [EBP + 0xfffffc44],EAX
00531639  8B 43 5C                  MOV EAX,dword ptr [EBX + 0x5c]
0053163C  81 C1 F2 00 00 00         ADD ECX,0xf2
00531642  85 C0                     TEST EAX,EAX
00531644  C7 85 C8 FA FF FF F4 01 00 00  MOV dword ptr [EBP + 0xfffffac8],0x1f4
0053164E  C7 85 CC FA FF FF 32 00 00 00  MOV dword ptr [EBP + 0xfffffacc],0x32
00531658  89 B5 1C FA FF FF         MOV dword ptr [EBP + 0xfffffa1c],ESI
0053165E  C7 85 20 FA FF FF 64 81 00 00  MOV dword ptr [EBP + 0xfffffa20],0x8164
00531668  89 B5 34 FB FF FF         MOV dword ptr [EBP + 0xfffffb34],ESI
0053166E  C7 85 38 FB FF FF 00 00 00 00  MOV dword ptr [EBP + 0xfffffb38],0x0
00531678  89 B5 3C FB FF FF         MOV dword ptr [EBP + 0xfffffb3c],ESI
0053167E  89 8D 40 FB FF FF         MOV dword ptr [EBP + 0xfffffb40],ECX
00531684  75 07                     JNZ 0x0053168d
00531686  8B 43 48                  MOV EAX,dword ptr [EBX + 0x48]
00531689  F7 D8                     NEG EAX
0053168B  EB 03                     JMP 0x00531690
LAB_0053168d:
0053168D  8B 43 44                  MOV EAX,dword ptr [EBX + 0x44]
LAB_00531690:
00531690  8B 15 90 67 80 00         MOV EDX,dword ptr [0x00806790]
00531696  6A 01                     PUSH 0x1
00531698  6A 00                     PUSH 0x0
0053169A  83 C0 51                  ADD EAX,0x51
0053169D  68 D4 39 7C 00            PUSH 0x7c39d4
005316A2  52                        PUSH EDX
005316A3  89 85 44 FB FF FF         MOV dword ptr [EBP + 0xfffffb44],EAX
005316A9  C7 85 48 FB FF FF 11 00 00 00  MOV dword ptr [EBP + 0xfffffb48],0x11
005316B3  89 BD 4C FB FF FF         MOV dword ptr [EBP + 0xfffffb4c],EDI
005316B9  E8 B2 93 1D 00            CALL 0x0070aa70
005316BE  89 85 5C FC FF FF         MOV dword ptr [EBP + 0xfffffc5c],EAX
005316C4  A1 90 67 80 00            MOV EAX,[0x00806790]
005316C9  6A 01                     PUSH 0x1
005316CB  68 D4 39 7C 00            PUSH 0x7c39d4
005316D0  6A 12                     PUSH 0x12
005316D2  50                        PUSH EAX
005316D3  E8 18 90 1D 00            CALL 0x0070a6f0
005316D8  8B 4B 08                  MOV ECX,dword ptr [EBX + 0x8]
005316DB  83 C4 20                  ADD ESP,0x20
005316DE  89 85 60 FC FF FF         MOV dword ptr [EBP + 0xfffffc60],EAX
005316E4  89 8D 98 FB FF FF         MOV dword ptr [EBP + 0xfffffb98],ECX
005316EA  8B 4B 0C                  MOV ECX,dword ptr [EBX + 0xc]
005316ED  8D 85 88 F8 FF FF         LEA EAX,[EBP + 0xfffff888]
005316F3  6A 00                     PUSH 0x0
005316F5  50                        PUSH EAX
005316F6  8D BB B5 01 00 00         LEA EDI,[EBX + 0x1b5]
005316FC  C7 85 48 FC FF FF F4 01 00 00  MOV dword ptr [EBP + 0xfffffc48],0x1f4
00531706  C7 85 4C FC FF FF 32 00 00 00  MOV dword ptr [EBP + 0xfffffc4c],0x32
00531710  89 B5 9C FB FF FF         MOV dword ptr [EBP + 0xfffffb9c],ESI
00531716  C7 85 A0 FB FF FF 65 81 00 00  MOV dword ptr [EBP + 0xfffffba0],0x8165
00531720  8B 11                     MOV EDX,dword ptr [ECX]
00531722  6A 00                     PUSH 0x0
00531724  57                        PUSH EDI
00531725  6A 07                     PUSH 0x7
00531727  FF 52 08                  CALL dword ptr [EDX + 0x8]
0053172A  8B 43 5C                  MOV EAX,dword ptr [EBX + 0x5c]
0053172D  85 C0                     TEST EAX,EAX
0053172F  74 0E                     JZ 0x0053173f
00531731  A0 4C 73 80 00            MOV AL,[0x0080734c]
00531736  84 C0                     TEST AL,AL
00531738  B8 55 00 00 00            MOV EAX,0x55
0053173D  75 05                     JNZ 0x00531744
LAB_0053173f:
0053173F  B8 56 00 00 00            MOV EAX,0x56
LAB_00531744:
00531744  8B 3F                     MOV EDI,dword ptr [EDI]
00531746  89 43 28                  MOV dword ptr [EBX + 0x28],EAX
00531749  85 FF                     TEST EDI,EDI
0053174B  74 11                     JZ 0x0053175e
0053174D  8D 4B 18                  LEA ECX,[EBX + 0x18]
00531750  51                        PUSH ECX
00531751  57                        PUSH EDI
00531752  68 02 00 00 80            PUSH 0x80000002
00531757  8B CB                     MOV ECX,EBX
00531759  E8 22 49 1B 00            CALL 0x006e6080
LAB_0053175e:
0053175E  80 BB A4 01 00 00 03      CMP byte ptr [EBX + 0x1a4],0x3
00531765  0F 85 D6 00 00 00         JNZ 0x00531841
0053176B  B9 23 02 00 00            MOV ECX,0x223
00531770  33 C0                     XOR EAX,EAX
00531772  8D BD 7C E5 FF FF         LEA EDI,[EBP + 0xffffe57c]
00531778  8B 93 7C 01 00 00         MOV EDX,dword ptr [EBX + 0x17c]
0053177E  F3 AB                     STOSD.REP ES:EDI
00531780  89 85 7C E5 FF FF         MOV dword ptr [EBP + 0xffffe57c],EAX
00531786  8B 43 3C                  MOV EAX,dword ptr [EBX + 0x3c]
00531789  83 C0 26                  ADD EAX,0x26
0053178C  C7 85 80 E5 FF FF 09 00 00 00  MOV dword ptr [EBP + 0xffffe580],0x9
00531796  89 85 88 E5 FF FF         MOV dword ptr [EBP + 0xffffe588],EAX
0053179C  8B 43 5C                  MOV EAX,dword ptr [EBX + 0x5c]
0053179F  85 C0                     TEST EAX,EAX
005317A1  89 95 84 E5 FF FF         MOV dword ptr [EBP + 0xffffe584],EDX
005317A7  75 07                     JNZ 0x005317b0
005317A9  8B 43 48                  MOV EAX,dword ptr [EBX + 0x48]
005317AC  F7 D8                     NEG EAX
005317AE  EB 03                     JMP 0x005317b3
LAB_005317b0:
005317B0  8B 43 44                  MOV EAX,dword ptr [EBX + 0x44]
LAB_005317b3:
005317B3  8B 8B F1 01 00 00         MOV ECX,dword ptr [EBX + 0x1f1]
005317B9  BA 01 00 00 00            MOV EDX,0x1
005317BE  83 C0 1C                  ADD EAX,0x1c
005317C1  89 95 DC ED FF FF         MOV dword ptr [EBP + 0xffffeddc],EDX
005317C7  89 95 D8 ED FF FF         MOV dword ptr [EBP + 0xffffedd8],EDX
005317CD  52                        PUSH EDX
005317CE  8D 95 7C E5 FF FF         LEA EDX,[EBP + 0xffffe57c]
005317D4  89 85 8C E5 FF FF         MOV dword ptr [EBP + 0xffffe58c],EAX
005317DA  8B 43 08                  MOV EAX,dword ptr [EBX + 0x8]
005317DD  89 8D 9C E5 FF FF         MOV dword ptr [EBP + 0xffffe59c],ECX
005317E3  8B 4B 0C                  MOV ECX,dword ptr [EBX + 0xc]
005317E6  52                        PUSH EDX
005317E7  8D 93 B9 01 00 00         LEA EDX,[EBX + 0x1b9]
005317ED  C7 85 90 E5 FF FF DE 00 00 00  MOV dword ptr [EBP + 0xffffe590],0xde
005317F7  C7 85 94 E5 FF FF 0B 00 00 00  MOV dword ptr [EBP + 0xffffe594],0xb
00531801  C7 85 98 E5 FF FF 04 01 00 00  MOV dword ptr [EBP + 0xffffe598],0x104
0053180B  89 85 C8 E5 FF FF         MOV dword ptr [EBP + 0xffffe5c8],EAX
00531811  89 B5 CC E5 FF FF         MOV dword ptr [EBP + 0xffffe5cc],ESI
00531817  C7 85 D0 E5 FF FF B0 C0 00 00  MOV dword ptr [EBP + 0xffffe5d0],0xc0b0
00531821  89 85 08 E6 FF FF         MOV dword ptr [EBP + 0xffffe608],EAX
00531827  89 B5 0C E6 FF FF         MOV dword ptr [EBP + 0xffffe60c],ESI
0053182D  C7 85 10 E6 FF FF A0 C0 00 00  MOV dword ptr [EBP + 0xffffe610],0xc0a0
00531837  8B 01                     MOV EAX,dword ptr [ECX]
00531839  6A 00                     PUSH 0x0
0053183B  52                        PUSH EDX
0053183C  6A 06                     PUSH 0x6
0053183E  FF 50 08                  CALL dword ptr [EAX + 0x8]
LAB_00531841:
00531841  8A 83 A4 01 00 00         MOV AL,byte ptr [EBX + 0x1a4]
00531847  6A 00                     PUSH 0x0
00531849  6A 00                     PUSH 0x0
0053184B  6A 00                     PUSH 0x0
0053184D  6A 00                     PUSH 0x0
0053184F  6A 00                     PUSH 0x0
00531851  6A 00                     PUSH 0x0
00531853  68 B1 C0 00 00            PUSH 0xc0b1
00531858  68 A1 C0 00 00            PUSH 0xc0a1
0053185D  3C 0E                     CMP AL,0xe
0053185F  6A 00                     PUSH 0x0
00531861  68 94 38 7C 00            PUSH 0x7c3894
00531866  74 73                     JZ 0x005318db
00531868  E8 0F 3F ED FF            CALL 0x0040577c
0053186D  83 C4 08                  ADD ESP,0x8
00531870  8B CB                     MOV ECX,EBX
00531872  50                        PUSH EAX
00531873  6A 01                     PUSH 0x1
00531875  6A 7C                     PUSH 0x7c
00531877  6A 5D                     PUSH 0x5d
00531879  6A 01                     PUSH 0x1
0053187B  6A 00                     PUSH 0x0
0053187D  E8 09 21 ED FF            CALL 0x0040398b
00531882  6A 00                     PUSH 0x0
00531884  6A 00                     PUSH 0x0
00531886  6A 00                     PUSH 0x0
00531888  6A 00                     PUSH 0x0
0053188A  6A 00                     PUSH 0x0
0053188C  6A 00                     PUSH 0x0
0053188E  68 B2 C0 00 00            PUSH 0xc0b2
00531893  68 A2 C0 00 00            PUSH 0xc0a2
00531898  6A 00                     PUSH 0x0
0053189A  68 94 38 7C 00            PUSH 0x7c3894
0053189F  89 83 BD 01 00 00         MOV dword ptr [EBX + 0x1bd],EAX
005318A5  E8 D2 3E ED FF            CALL 0x0040577c
005318AA  83 C4 08                  ADD ESP,0x8
005318AD  8B CB                     MOV ECX,EBX
005318AF  50                        PUSH EAX
005318B0  6A 01                     PUSH 0x1
005318B2  6A 7C                     PUSH 0x7c
005318B4  68 94 00 00 00            PUSH 0x94
005318B9  6A 01                     PUSH 0x1
005318BB  6A 00                     PUSH 0x0
005318BD  E8 C9 20 ED FF            CALL 0x0040398b
005318C2  89 83 C1 01 00 00         MOV dword ptr [EBX + 0x1c1],EAX
005318C8  8B 83 E1 01 00 00         MOV EAX,dword ptr [EBX + 0x1e1]
005318CE  50                        PUSH EAX
005318CF  8B CB                     MOV ECX,EBX
005318D1  E8 E6 26 ED FF            CALL 0x00403fbc
005318D6  E9 AF 02 00 00            JMP 0x00531b8a
LAB_005318db:
005318DB  E8 9C 3E ED FF            CALL 0x0040577c
005318E0  83 C4 08                  ADD ESP,0x8
005318E3  8B CB                     MOV ECX,EBX
005318E5  50                        PUSH EAX
005318E6  6A 01                     PUSH 0x1
005318E8  6A 7D                     PUSH 0x7d
005318EA  6A 78                     PUSH 0x78
005318EC  6A 01                     PUSH 0x1
005318EE  6A 00                     PUSH 0x0
005318F0  E8 96 20 ED FF            CALL 0x0040398b
005318F5  8B CB                     MOV ECX,EBX
005318F7  89 83 BD 01 00 00         MOV dword ptr [EBX + 0x1bd],EAX
005318FD  E8 A6 FE EC FF            CALL 0x004017a8
00531902  E9 83 02 00 00            JMP 0x00531b8a
switchD_005305d4::caseD_c:
00531907  8B 53 3C                  MOV EDX,dword ptr [EBX + 0x3c]
0053190A  B9 1E 02 00 00            MOV ECX,0x21e
0053190F  33 C0                     XOR EAX,EAX
00531911  8D BD 08 EE FF FF         LEA EDI,[EBP + 0xffffee08]
00531917  F3 AB                     STOSD.REP ES:EDI
00531919  8B 43 5C                  MOV EAX,dword ptr [EBX + 0x5c]
0053191C  33 C9                     XOR ECX,ECX
0053191E  83 C2 26                  ADD EDX,0x26
00531921  3B C1                     CMP EAX,ECX
00531923  89 8D 08 EE FF FF         MOV dword ptr [EBP + 0xffffee08],ECX
00531929  C7 85 0C EE FF FF 02 00 00 00  MOV dword ptr [EBP + 0xffffee0c],0x2
00531933  89 95 28 EE FF FF         MOV dword ptr [EBP + 0xffffee28],EDX
00531939  75 07                     JNZ 0x00531942
0053193B  8B 43 48                  MOV EAX,dword ptr [EBX + 0x48]
0053193E  F7 D8                     NEG EAX
00531940  EB 03                     JMP 0x00531945
LAB_00531942:
00531942  8B 43 44                  MOV EAX,dword ptr [EBX + 0x44]
LAB_00531945:
00531945  8B B3 7C 01 00 00         MOV ESI,dword ptr [EBX + 0x17c]
0053194B  83 C0 1A                  ADD EAX,0x1a
0053194E  89 85 2C EE FF FF         MOV dword ptr [EBP + 0xffffee2c],EAX
00531954  8B 83 F9 02 00 00         MOV EAX,dword ptr [EBX + 0x2f9]
0053195A  BF 01 00 00 00            MOV EDI,0x1
0053195F  89 BD 10 EE FF FF         MOV dword ptr [EBP + 0xffffee10],EDI
00531965  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
00531968  89 95 14 EE FF FF         MOV dword ptr [EBP + 0xffffee14],EDX
0053196E  C7 85 18 EE FF FF CA 00 00 00  MOV dword ptr [EBP + 0xffffee18],0xca
00531978  39 8E A0 00 00 00         CMP dword ptr [ESI + 0xa0],ECX
0053197E  74 0B                     JZ 0x0053198b
00531980  56                        PUSH ESI
00531981  E8 0A EE 1D 00            CALL 0x00710790
00531986  83 C4 04                  ADD ESP,0x4
00531989  33 C9                     XOR ECX,ECX
LAB_0053198b:
0053198B  8B B6 8A 00 00 00         MOV ESI,dword ptr [ESI + 0x8a]
00531991  B8 6E 00 00 00            MOV EAX,0x6e
00531996  99                        CDQ
00531997  F7 FE                     IDIV ESI
00531999  80 3D 4C 73 80 00 00      CMP byte ptr [0x0080734c],0x0
005319A0  BA 02 00 00 00            MOV EDX,0x2
005319A5  89 B5 1C EE FF FF         MOV dword ptr [EBP + 0xffffee1c],ESI
005319AB  89 BD 20 EE FF FF         MOV dword ptr [EBP + 0xffffee20],EDI
005319B1  89 95 44 EE FF FF         MOV dword ptr [EBP + 0xffffee44],EDX
005319B7  C7 85 48 EE FF FF 32 63 00 00  MOV dword ptr [EBP + 0xffffee48],0x6332
005319C1  C7 85 B8 EE FF FF 04 00 00 00  MOV dword ptr [EBP + 0xffffeeb8],0x4
005319CB  89 8D BC EE FF FF         MOV dword ptr [EBP + 0xffffeebc],ECX
005319D1  89 85 24 EE FF FF         MOV dword ptr [EBP + 0xffffee24],EAX
005319D7  8B 43 08                  MOV EAX,dword ptr [EBX + 0x8]
005319DA  89 85 40 EE FF FF         MOV dword ptr [EBP + 0xffffee40],EAX
005319E0  74 06                     JZ 0x005319e8
005319E2  89 BD 84 F2 FF FF         MOV dword ptr [EBP + 0xfffff284],EDI
LAB_005319e8:
005319E8  89 95 C0 EE FF FF         MOV dword ptr [EBP + 0xffffeec0],EDX
005319EE  89 95 C8 EE FF FF         MOV dword ptr [EBP + 0xffffeec8],EDX
005319F4  8B 53 3C                  MOV EDX,dword ptr [EBX + 0x3c]
005319F7  89 8D C4 EE FF FF         MOV dword ptr [EBP + 0xffffeec4],ECX
005319FD  81 C2 F2 00 00 00         ADD EDX,0xf2
00531A03  89 95 CC EE FF FF         MOV dword ptr [EBP + 0xffffeecc],EDX
00531A09  8B 53 5C                  MOV EDX,dword ptr [EBX + 0x5c]
00531A0C  3B D1                     CMP EDX,ECX
00531A0E  75 07                     JNZ 0x00531a17
00531A10  8B 4B 48                  MOV ECX,dword ptr [EBX + 0x48]
00531A13  F7 D9                     NEG ECX
00531A15  EB 03                     JMP 0x00531a1a
LAB_00531a17:
00531A17  8B 4B 44                  MOV ECX,dword ptr [EBX + 0x44]
LAB_00531a1a:
00531A1A  BE 01 00 00 00            MOV ESI,0x1
00531A1F  89 85 24 EF FF FF         MOV dword ptr [EBP + 0xffffef24],EAX
00531A25  A1 90 67 80 00            MOV EAX,[0x00806790]
00531A2A  56                        PUSH ESI
00531A2B  6A 00                     PUSH 0x0
00531A2D  83 C1 64                  ADD ECX,0x64
00531A30  BF 02 00 00 00            MOV EDI,0x2
00531A35  68 D4 39 7C 00            PUSH 0x7c39d4
00531A3A  50                        PUSH EAX
00531A3B  89 8D D0 EE FF FF         MOV dword ptr [EBP + 0xffffeed0],ECX
00531A41  C7 85 D4 EE FF FF 11 00 00 00  MOV dword ptr [EBP + 0xffffeed4],0x11
00531A4B  C7 85 D8 EE FF FF 24 00 00 00  MOV dword ptr [EBP + 0xffffeed8],0x24
00531A55  C7 85 D4 EF FF FF F4 01 00 00  MOV dword ptr [EBP + 0xffffefd4],0x1f4
00531A5F  C7 85 D8 EF FF FF 32 00 00 00  MOV dword ptr [EBP + 0xffffefd8],0x32
00531A69  89 BD 28 EF FF FF         MOV dword ptr [EBP + 0xffffef28],EDI
00531A6F  C7 85 2C EF FF FF 65 81 00 00  MOV dword ptr [EBP + 0xffffef2c],0x8165
00531A79  E8 F2 8F 1D 00            CALL 0x0070aa70
00531A7E  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
00531A84  56                        PUSH ESI
00531A85  68 D4 39 7C 00            PUSH 0x7c39d4
00531A8A  6A 12                     PUSH 0x12
00531A8C  51                        PUSH ECX
00531A8D  89 85 E8 EF FF FF         MOV dword ptr [EBP + 0xffffefe8],EAX
00531A93  E8 58 8C 1D 00            CALL 0x0070a6f0
00531A98  8B 53 3C                  MOV EDX,dword ptr [EBX + 0x3c]
00531A9B  89 85 EC EF FF FF         MOV dword ptr [EBP + 0xffffefec],EAX
00531AA1  8B 43 5C                  MOV EAX,dword ptr [EBX + 0x5c]
00531AA4  89 B5 CC EF FF FF         MOV dword ptr [EBP + 0xffffefcc],ESI
00531AAA  89 B5 D0 EF FF FF         MOV dword ptr [EBP + 0xffffefd0],ESI
00531AB0  89 BD 40 F0 FF FF         MOV dword ptr [EBP + 0xfffff040],EDI
00531AB6  B9 5F 00 00 00            MOV ECX,0x5f
00531ABB  8D B5 C4 EE FF FF         LEA ESI,[EBP + 0xffffeec4]
00531AC1  8D BD 44 F0 FF FF         LEA EDI,[EBP + 0xfffff044]
00531AC7  83 C4 20                  ADD ESP,0x20
00531ACA  81 C2 F2 00 00 00         ADD EDX,0xf2
00531AD0  F3 A5                     MOVSD.REP ES:EDI,ESI
00531AD2  85 C0                     TEST EAX,EAX
00531AD4  89 95 4C F0 FF FF         MOV dword ptr [EBP + 0xfffff04c],EDX
00531ADA  75 07                     JNZ 0x00531ae3
00531ADC  8B 43 48                  MOV EAX,dword ptr [EBX + 0x48]
00531ADF  F7 D8                     NEG EAX
00531AE1  EB 03                     JMP 0x00531ae6
LAB_00531ae3:
00531AE3  8B 43 44                  MOV EAX,dword ptr [EBX + 0x44]
LAB_00531ae6:
00531AE6  83 C0 1B                  ADD EAX,0x1b
00531AE9  BF 01 00 00 00            MOV EDI,0x1
00531AEE  89 85 50 F0 FF FF         MOV dword ptr [EBP + 0xfffff050],EAX
00531AF4  A1 90 67 80 00            MOV EAX,[0x00806790]
00531AF9  57                        PUSH EDI
00531AFA  6A 00                     PUSH 0x0
00531AFC  68 E0 39 7C 00            PUSH 0x7c39e0
00531B01  50                        PUSH EAX
00531B02  C7 85 54 F0 FF FF 11 00 00 00  MOV dword ptr [EBP + 0xfffff054],0x11
00531B0C  C7 85 58 F0 FF FF 24 00 00 00  MOV dword ptr [EBP + 0xfffff058],0x24
00531B16  C7 85 AC F0 FF FF 64 81 00 00  MOV dword ptr [EBP + 0xfffff0ac],0x8164
00531B20  E8 4B 8F 1D 00            CALL 0x0070aa70
00531B25  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
00531B2B  57                        PUSH EDI
00531B2C  68 E0 39 7C 00            PUSH 0x7c39e0
00531B31  6A 12                     PUSH 0x12
00531B33  51                        PUSH ECX
00531B34  89 85 68 F1 FF FF         MOV dword ptr [EBP + 0xfffff168],EAX
00531B3A  E8 B1 8B 1D 00            CALL 0x0070a6f0
00531B3F  8B 4B 0C                  MOV ECX,dword ptr [EBX + 0xc]
00531B42  83 C4 20                  ADD ESP,0x20
00531B45  89 85 6C F1 FF FF         MOV dword ptr [EBP + 0xfffff16c],EAX
00531B4B  8D 85 08 EE FF FF         LEA EAX,[EBP + 0xffffee08]
00531B51  6A 00                     PUSH 0x0
00531B53  50                        PUSH EAX
00531B54  8D B3 B5 01 00 00         LEA ESI,[EBX + 0x1b5]
00531B5A  89 BD 74 F6 FF FF         MOV dword ptr [EBP + 0xfffff674],EDI
00531B60  89 BD 70 F6 FF FF         MOV dword ptr [EBP + 0xfffff670],EDI
00531B66  8B 11                     MOV EDX,dword ptr [ECX]
00531B68  6A 00                     PUSH 0x0
00531B6A  56                        PUSH ESI
00531B6B  6A 08                     PUSH 0x8
00531B6D  FF 52 08                  CALL dword ptr [EDX + 0x8]
00531B70  8B 16                     MOV EDX,dword ptr [ESI]
00531B72  8D 4B 18                  LEA ECX,[EBX + 0x18]
00531B75  51                        PUSH ECX
00531B76  52                        PUSH EDX
00531B77  6A 02                     PUSH 0x2
00531B79  8B CB                     MOV ECX,EBX
00531B7B  C7 43 28 20 00 00 00      MOV dword ptr [EBX + 0x28],0x20
00531B82  89 7B 2C                  MOV dword ptr [EBX + 0x2c],EDI
00531B85  E8 F6 44 1B 00            CALL 0x006e6080
switchD_005305d4::caseD_a:
00531B8A  80 BB A4 01 00 00 01      CMP byte ptr [EBX + 0x1a4],0x1
00531B91  74 13                     JZ 0x00531ba6
00531B93  8A 83 A9 01 00 00         MOV AL,byte ptr [EBX + 0x1a9]
00531B99  84 C0                     TEST AL,AL
00531B9B  74 09                     JZ 0x00531ba6
00531B9D  C7 43 2C 01 00 00 00      MOV dword ptr [EBX + 0x2c],0x1
00531BA4  EB 07                     JMP 0x00531bad
LAB_00531ba6:
00531BA6  C7 43 2C 00 00 00 00      MOV dword ptr [EBX + 0x2c],0x0
LAB_00531bad:
00531BAD  8B 83 B1 01 00 00         MOV EAX,dword ptr [EBX + 0x1b1]
00531BB3  8D 73 18                  LEA ESI,[EBX + 0x18]
00531BB6  56                        PUSH ESI
00531BB7  50                        PUSH EAX
00531BB8  6A 02                     PUSH 0x2
00531BBA  8B CB                     MOV ECX,EBX
00531BBC  C7 43 28 20 00 00 00      MOV dword ptr [EBX + 0x28],0x20
00531BC3  E8 B8 44 1B 00            CALL 0x006e6080
00531BC8  C7 43 28 05 00 00 00      MOV dword ptr [EBX + 0x28],0x5
00531BCF  C6 45 FC 00               MOV byte ptr [EBP + -0x4],0x0
LAB_00531bd3:
00531BD3  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00531BD6  81 E1 FF 00 00 00         AND ECX,0xff
00531BDC  8B 84 8B AD 01 00 00      MOV EAX,dword ptr [EBX + ECX*0x4 + 0x1ad]
00531BE3  85 C0                     TEST EAX,EAX
00531BE5  74 0B                     JZ 0x00531bf2
00531BE7  56                        PUSH ESI
00531BE8  50                        PUSH EAX
00531BE9  6A 02                     PUSH 0x2
00531BEB  8B CB                     MOV ECX,EBX
00531BED  E8 8E 44 1B 00            CALL 0x006e6080
LAB_00531bf2:
00531BF2  8A 45 FC                  MOV AL,byte ptr [EBP + -0x4]
00531BF5  FE C0                     INC AL
00531BF7  3C 02                     CMP AL,0x2
00531BF9  88 45 FC                  MOV byte ptr [EBP + -0x4],AL
00531BFC  72 D5                     JC 0x00531bd3
00531BFE  8B 95 F4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffef4]
00531C04  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00531C0A  5F                        POP EDI
00531C0B  5E                        POP ESI
00531C0C  5B                        POP EBX
00531C0D  8B E5                     MOV ESP,EBP
00531C0F  5D                        POP EBP
00531C10  C3                        RET
LAB_00531c11:
00531C11  8B 85 F4 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffef4]
00531C17  68 44 72 7C 00            PUSH 0x7c7244
00531C1C  68 CC 4C 7A 00            PUSH 0x7a4ccc
00531C21  56                        PUSH ESI
00531C22  6A 00                     PUSH 0x0
00531C24  68 50 03 00 00            PUSH 0x350
00531C29  68 A0 70 7C 00            PUSH 0x7c70a0
00531C2E  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00531C33  E8 98 B8 17 00            CALL 0x006ad4d0
00531C38  83 C4 18                  ADD ESP,0x18
00531C3B  85 C0                     TEST EAX,EAX
00531C3D  74 01                     JZ 0x00531c40
00531C3F  CC                        INT3
LAB_00531c40:
00531C40  68 50 03 00 00            PUSH 0x350
00531C45  68 A0 70 7C 00            PUSH 0x7c70a0
00531C4A  6A 00                     PUSH 0x0
00531C4C  56                        PUSH ESI
00531C4D  E8 EE 41 17 00            CALL 0x006a5e40
00531C52  5F                        POP EDI
00531C53  5E                        POP ESI
00531C54  5B                        POP EBX
00531C55  8B E5                     MOV ESP,EBP
00531C57  5D                        POP EBP
00531C58  C3                        RET
