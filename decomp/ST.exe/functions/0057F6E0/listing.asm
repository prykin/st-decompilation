STDcResourcC::CreateRes:
0057F6E0  55                        PUSH EBP
0057F6E1  8B EC                     MOV EBP,ESP
0057F6E3  83 EC 58                  SUB ESP,0x58
0057F6E6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0057F6EB  53                        PUSH EBX
0057F6EC  56                        PUSH ESI
0057F6ED  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
0057F6F0  33 DB                     XOR EBX,EBX
0057F6F2  57                        PUSH EDI
0057F6F3  8D 55 AC                  LEA EDX,[EBP + -0x54]
0057F6F6  8D 4D A8                  LEA ECX,[EBP + -0x58]
0057F6F9  53                        PUSH EBX
0057F6FA  52                        PUSH EDX
0057F6FB  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
0057F702  89 45 A8                  MOV dword ptr [EBP + -0x58],EAX
0057F705  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0057F70B  E8 E0 E0 1A 00            CALL 0x0072d7f0
0057F710  8B F0                     MOV ESI,EAX
0057F712  83 C4 08                  ADD ESP,0x8
0057F715  3B F3                     CMP ESI,EBX
0057F717  0F 85 63 07 00 00         JNZ 0x0057fe80
0057F71D  8B 75 EC                  MOV ESI,dword ptr [EBP + -0x14]
0057F720  8B 86 55 02 00 00         MOV EAX,dword ptr [ESI + 0x255]
0057F726  05 24 FF FF FF            ADD EAX,0xffffff24
0057F72B  83 F8 04                  CMP EAX,0x4
0057F72E  0F 87 3B 06 00 00         JA 0x0057fd6f
switchD_0057f734::switchD:
0057F734  FF 24 85 C8 FE 57 00      JMP dword ptr [EAX*0x4 + 0x57fec8]
switchD_0057f734::caseD_dd:
0057F73B  33 C9                     XOR ECX,ECX
0057F73D  C7 45 F8 FF FF FF FF      MOV dword ptr [EBP + -0x8],0xffffffff
0057F744  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
LAB_0057f747:
0057F747  8B 99 B8 B0 7C 00         MOV EBX,dword ptr [ECX + 0x7cb0b8]
0057F74D  8B 86 45 02 00 00         MOV EAX,dword ptr [ESI + 0x245]
0057F753  0F BF 3D 40 B2 7F 00      MOVSX EDI,word ptr [0x007fb240]
0057F75A  8B 91 DC B0 7C 00         MOV EDX,dword ptr [ECX + 0x7cb0dc]
0057F760  03 C3                     ADD EAX,EBX
0057F762  3B C7                     CMP EAX,EDI
0057F764  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
0057F767  0F 8D 6A 01 00 00         JGE 0x0057f8d7
0057F76D  85 C0                     TEST EAX,EAX
0057F76F  0F 8C 62 01 00 00         JL 0x0057f8d7
0057F775  8B 86 49 02 00 00         MOV EAX,dword ptr [ESI + 0x249]
0057F77B  03 C2                     ADD EAX,EDX
0057F77D  0F BF 15 42 B2 7F 00      MOVSX EDX,word ptr [0x007fb242]
0057F784  3B C2                     CMP EAX,EDX
0057F786  0F 8D 4B 01 00 00         JGE 0x0057f8d7
0057F78C  85 C0                     TEST EAX,EAX
0057F78E  0F 8C 43 01 00 00         JL 0x0057f8d7
0057F794  8B 86 4D 02 00 00         MOV EAX,dword ptr [ESI + 0x24d]
0057F79A  85 C0                     TEST EAX,EAX
0057F79C  0F 8C 35 01 00 00         JL 0x0057f8d7
0057F7A2  83 F8 05                  CMP EAX,0x5
0057F7A5  0F 8D 2C 01 00 00         JGE 0x0057f8d7
0057F7AB  85 F6                     TEST ESI,ESI
0057F7AD  74 08                     JZ 0x0057f7b7
0057F7AF  8D BE D5 01 00 00         LEA EDI,[ESI + 0x1d5]
0057F7B5  EB 02                     JMP 0x0057f7b9
LAB_0057f7b7:
0057F7B7  33 FF                     XOR EDI,EDI
LAB_0057f7b9:
0057F7B9  83 7D F0 04               CMP dword ptr [EBP + -0x10],0x4
0057F7BD  7C 11                     JL 0x0057f7d0
0057F7BF  8B CE                     MOV ECX,ESI
0057F7C1  E8 4B 61 E8 FF            CALL 0x00405911
0057F7C6  8B F8                     MOV EDI,EAX
0057F7C8  85 FF                     TEST EDI,EDI
0057F7CA  0F 84 D5 02 00 00         JZ 0x0057faa5
LAB_0057f7d0:
0057F7D0  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0057F7D3  6A 1D                     PUSH 0x1d
0057F7D5  6A 00                     PUSH 0x0
0057F7D7  50                        PUSH EAX
0057F7D8  8B CE                     MOV ECX,ESI
0057F7DA  E8 F5 57 E8 FF            CALL 0x00404fd4
0057F7DF  8B 0D 74 67 80 00         MOV ECX,dword ptr [0x00806774]
0057F7E5  50                        PUSH EAX
0057F7E6  51                        PUSH ECX
0057F7E7  6A 0E                     PUSH 0xe
0057F7E9  8B CF                     MOV ECX,EDI
0057F7EB  E8 93 49 E8 FF            CALL 0x00404183
0057F7F0  85 C0                     TEST EAX,EAX
0057F7F2  0F 85 AD 02 00 00         JNZ 0x0057faa5
0057F7F8  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0057F7FB  6A 1D                     PUSH 0x1d
0057F7FD  6A 01                     PUSH 0x1
0057F7FF  52                        PUSH EDX
0057F800  8B CE                     MOV ECX,ESI
0057F802  E8 CD 57 E8 FF            CALL 0x00404fd4
0057F807  50                        PUSH EAX
0057F808  A1 74 67 80 00            MOV EAX,[0x00806774]
0057F80D  50                        PUSH EAX
0057F80E  6A 0D                     PUSH 0xd
0057F810  8B CF                     MOV ECX,EDI
0057F812  E8 6C 49 E8 FF            CALL 0x00404183
0057F817  85 C0                     TEST EAX,EAX
0057F819  0F 85 86 02 00 00         JNZ 0x0057faa5
0057F81F  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0057F825  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
0057F82B  8B CF                     MOV ECX,EDI
0057F82D  52                        PUSH EDX
0057F82E  6A 0E                     PUSH 0xe
0057F830  E8 0B 5A E8 FF            CALL 0x00405240
0057F835  A1 CC 73 80 00            MOV EAX,[0x008073cc]
0057F83A  8B CF                     MOV ECX,EDI
0057F83C  50                        PUSH EAX
0057F83D  E8 67 64 E8 FF            CALL 0x00405ca9
0057F842  6A 0D                     PUSH 0xd
0057F844  8B CF                     MOV ECX,EDI
0057F846  E8 B2 42 E8 FF            CALL 0x00403afd
0057F84B  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0057F851  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
0057F857  8B CF                     MOV ECX,EDI
0057F859  52                        PUSH EDX
0057F85A  6A 0D                     PUSH 0xd
0057F85C  E8 DF 59 E8 FF            CALL 0x00405240
0057F861  DB 86 4D 02 00 00         FILD dword ptr [ESI + 0x24d]
0057F867  8B 86 49 02 00 00         MOV EAX,dword ptr [ESI + 0x249]
0057F86D  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0057F870  51                        PUSH ECX
0057F871  03 C2                     ADD EAX,EDX
0057F873  D8 0D 04 05 79 00         FMUL float ptr [0x00790504]
0057F879  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0057F87C  D8 05 00 05 79 00         FADD float ptr [0x00790500]
0057F882  D8 05 FC 04 79 00         FADD float ptr [0x007904fc]
0057F888  D9 1C 24                  FSTP float ptr [ESP]
0057F88B  DB 45 F4                  FILD dword ptr [EBP + -0xc]
0057F88E  51                        PUSH ECX
0057F88F  8B 8E 45 02 00 00         MOV ECX,dword ptr [ESI + 0x245]
0057F895  03 CB                     ADD ECX,EBX
0057F897  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0057F89D  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0057F8A0  D8 05 F4 04 79 00         FADD float ptr [0x007904f4]
0057F8A6  D9 1C 24                  FSTP float ptr [ESP]
0057F8A9  DB 45 F4                  FILD dword ptr [EBP + -0xc]
0057F8AC  51                        PUSH ECX
0057F8AD  8B CF                     MOV ECX,EDI
0057F8AF  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0057F8B5  D8 05 F4 04 79 00         FADD float ptr [0x007904f4]
0057F8BB  D9 1C 24                  FSTP float ptr [ESP]
0057F8BE  E8 16 4D E8 FF            CALL 0x004045d9
0057F8C3  8B 57 18                  MOV EDX,dword ptr [EDI + 0x18]
0057F8C6  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
0057F8CC  6A FF                     PUSH -0x1
0057F8CE  52                        PUSH EDX
0057F8CF  E8 0C AB 16 00            CALL 0x006ea3e0
0057F8D4  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
LAB_0057f8d7:
0057F8D7  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
0057F8DA  83 C1 04                  ADD ECX,0x4
0057F8DD  47                        INC EDI
0057F8DE  83 F9 20                  CMP ECX,0x20
0057F8E1  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
0057F8E4  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
0057F8E7  0F 8E 5A FE FF FF         JLE 0x0057f747
0057F8ED  E9 BA 01 00 00            JMP 0x0057faac
switchD_0057f734::caseD_dc:
0057F8F2  C7 45 F8 FF FF FF FF      MOV dword ptr [EBP + -0x8],0xffffffff
0057F8F9  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
0057F8FC  8B CB                     MOV ECX,EBX
LAB_0057f8fe:
0057F8FE  8B 99 B8 B0 7C 00         MOV EBX,dword ptr [ECX + 0x7cb0b8]
0057F904  8B 86 45 02 00 00         MOV EAX,dword ptr [ESI + 0x245]
0057F90A  0F BF 3D 40 B2 7F 00      MOVSX EDI,word ptr [0x007fb240]
0057F911  8B 91 DC B0 7C 00         MOV EDX,dword ptr [ECX + 0x7cb0dc]
0057F917  03 C3                     ADD EAX,EBX
0057F919  3B C7                     CMP EAX,EDI
0057F91B  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
0057F91E  0F 8D 69 01 00 00         JGE 0x0057fa8d
0057F924  85 C0                     TEST EAX,EAX
0057F926  0F 8C 61 01 00 00         JL 0x0057fa8d
0057F92C  8B 86 49 02 00 00         MOV EAX,dword ptr [ESI + 0x249]
0057F932  03 C2                     ADD EAX,EDX
0057F934  0F BF 15 42 B2 7F 00      MOVSX EDX,word ptr [0x007fb242]
0057F93B  3B C2                     CMP EAX,EDX
0057F93D  0F 8D 4A 01 00 00         JGE 0x0057fa8d
0057F943  85 C0                     TEST EAX,EAX
0057F945  0F 8C 42 01 00 00         JL 0x0057fa8d
0057F94B  8B 86 4D 02 00 00         MOV EAX,dword ptr [ESI + 0x24d]
0057F951  85 C0                     TEST EAX,EAX
0057F953  0F 8C 34 01 00 00         JL 0x0057fa8d
0057F959  83 F8 05                  CMP EAX,0x5
0057F95C  0F 8D 2B 01 00 00         JGE 0x0057fa8d
0057F962  85 F6                     TEST ESI,ESI
0057F964  74 08                     JZ 0x0057f96e
0057F966  8D BE D5 01 00 00         LEA EDI,[ESI + 0x1d5]
0057F96C  EB 02                     JMP 0x0057f970
LAB_0057f96e:
0057F96E  33 FF                     XOR EDI,EDI
LAB_0057f970:
0057F970  83 F9 04                  CMP ECX,0x4
0057F973  7C 11                     JL 0x0057f986
0057F975  8B CE                     MOV ECX,ESI
0057F977  E8 95 5F E8 FF            CALL 0x00405911
0057F97C  8B F8                     MOV EDI,EAX
0057F97E  85 FF                     TEST EDI,EDI
0057F980  0F 84 1F 01 00 00         JZ 0x0057faa5
LAB_0057f986:
0057F986  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0057F989  6A 1D                     PUSH 0x1d
0057F98B  6A 00                     PUSH 0x0
0057F98D  50                        PUSH EAX
0057F98E  8B CE                     MOV ECX,ESI
0057F990  E8 AF 1D E8 FF            CALL 0x00401744
0057F995  8B 0D 74 67 80 00         MOV ECX,dword ptr [0x00806774]
0057F99B  50                        PUSH EAX
0057F99C  51                        PUSH ECX
0057F99D  6A 0E                     PUSH 0xe
0057F99F  8B CF                     MOV ECX,EDI
0057F9A1  E8 DD 47 E8 FF            CALL 0x00404183
0057F9A6  85 C0                     TEST EAX,EAX
0057F9A8  0F 85 F7 00 00 00         JNZ 0x0057faa5
0057F9AE  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0057F9B1  6A 1D                     PUSH 0x1d
0057F9B3  6A 01                     PUSH 0x1
0057F9B5  52                        PUSH EDX
0057F9B6  8B CE                     MOV ECX,ESI
0057F9B8  E8 87 1D E8 FF            CALL 0x00401744
0057F9BD  50                        PUSH EAX
0057F9BE  A1 74 67 80 00            MOV EAX,[0x00806774]
0057F9C3  50                        PUSH EAX
0057F9C4  6A 0D                     PUSH 0xd
0057F9C6  8B CF                     MOV ECX,EDI
0057F9C8  E8 B6 47 E8 FF            CALL 0x00404183
0057F9CD  85 C0                     TEST EAX,EAX
0057F9CF  0F 85 D0 00 00 00         JNZ 0x0057faa5
0057F9D5  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0057F9DB  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
0057F9E1  8B CF                     MOV ECX,EDI
0057F9E3  52                        PUSH EDX
0057F9E4  6A 0E                     PUSH 0xe
0057F9E6  E8 55 58 E8 FF            CALL 0x00405240
0057F9EB  A1 CC 73 80 00            MOV EAX,[0x008073cc]
0057F9F0  8B CF                     MOV ECX,EDI
0057F9F2  50                        PUSH EAX
0057F9F3  E8 B1 62 E8 FF            CALL 0x00405ca9
0057F9F8  6A 0D                     PUSH 0xd
0057F9FA  8B CF                     MOV ECX,EDI
0057F9FC  E8 FC 40 E8 FF            CALL 0x00403afd
0057FA01  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0057FA07  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
0057FA0D  8B CF                     MOV ECX,EDI
0057FA0F  52                        PUSH EDX
0057FA10  6A 0D                     PUSH 0xd
0057FA12  E8 29 58 E8 FF            CALL 0x00405240
0057FA17  DB 86 4D 02 00 00         FILD dword ptr [ESI + 0x24d]
0057FA1D  8B 86 49 02 00 00         MOV EAX,dword ptr [ESI + 0x249]
0057FA23  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0057FA26  51                        PUSH ECX
0057FA27  03 C2                     ADD EAX,EDX
0057FA29  D8 0D 04 05 79 00         FMUL float ptr [0x00790504]
0057FA2F  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0057FA32  D8 05 00 05 79 00         FADD float ptr [0x00790500]
0057FA38  D8 05 FC 04 79 00         FADD float ptr [0x007904fc]
0057FA3E  D9 1C 24                  FSTP float ptr [ESP]
0057FA41  DB 45 F4                  FILD dword ptr [EBP + -0xc]
0057FA44  51                        PUSH ECX
0057FA45  8B 8E 45 02 00 00         MOV ECX,dword ptr [ESI + 0x245]
0057FA4B  03 CB                     ADD ECX,EBX
0057FA4D  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0057FA53  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0057FA56  D8 05 F4 04 79 00         FADD float ptr [0x007904f4]
0057FA5C  D9 1C 24                  FSTP float ptr [ESP]
0057FA5F  DB 45 F4                  FILD dword ptr [EBP + -0xc]
0057FA62  51                        PUSH ECX
0057FA63  8B CF                     MOV ECX,EDI
0057FA65  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0057FA6B  D8 05 F4 04 79 00         FADD float ptr [0x007904f4]
0057FA71  D9 1C 24                  FSTP float ptr [ESP]
0057FA74  E8 60 4B E8 FF            CALL 0x004045d9
0057FA79  8B 57 18                  MOV EDX,dword ptr [EDI + 0x18]
0057FA7C  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
0057FA82  6A FF                     PUSH -0x1
0057FA84  52                        PUSH EDX
0057FA85  E8 56 A9 16 00            CALL 0x006ea3e0
0057FA8A  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
LAB_0057fa8d:
0057FA8D  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
0057FA90  83 C1 04                  ADD ECX,0x4
0057FA93  47                        INC EDI
0057FA94  83 F9 20                  CMP ECX,0x20
0057FA97  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
0057FA9A  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
0057FA9D  0F 8E 5B FE FF FF         JLE 0x0057f8fe
0057FAA3  EB 07                     JMP 0x0057faac
STDcResourcC::CreateRes::cf_break_loop_0057FAA5:
0057FAA5  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
LAB_0057faac:
0057FAAC  83 7D F8 08               CMP dword ptr [EBP + -0x8],0x8
0057FAB0  0F 84 BC 02 00 00         JZ 0x0057fd72
0057FAB6  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0057FABD  E9 B0 02 00 00            JMP 0x0057fd72
switchD_0057f734::caseD_de:
0057FAC2  83 CB FF                  OR EBX,0xffffffff
LAB_0057fac5:
0057FAC5  83 FB 01                  CMP EBX,0x1
0057FAC8  75 02                     JNZ 0x0057facc
0057FACA  33 DB                     XOR EBX,EBX
LAB_0057facc:
0057FACC  8B 04 9D BC B0 7C 00      MOV EAX,dword ptr [EBX*0x4 + 0x7cb0bc]
0057FAD3  8B 96 45 02 00 00         MOV EDX,dword ptr [ESI + 0x245]
0057FAD9  8B 0C 9D E0 B0 7C 00      MOV ECX,dword ptr [EBX*0x4 + 0x7cb0e0]
0057FAE0  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0057FAE3  03 C2                     ADD EAX,EDX
0057FAE5  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0057FAE8  0F BF 15 40 B2 7F 00      MOVSX EDX,word ptr [0x007fb240]
0057FAEF  3B C2                     CMP EAX,EDX
0057FAF1  0F 8D 62 01 00 00         JGE 0x0057fc59
0057FAF7  85 C0                     TEST EAX,EAX
0057FAF9  0F 8C 5A 01 00 00         JL 0x0057fc59
0057FAFF  8B 86 49 02 00 00         MOV EAX,dword ptr [ESI + 0x249]
0057FB05  03 C1                     ADD EAX,ECX
0057FB07  0F BF 0D 42 B2 7F 00      MOVSX ECX,word ptr [0x007fb242]
0057FB0E  3B C1                     CMP EAX,ECX
0057FB10  0F 8D 43 01 00 00         JGE 0x0057fc59
0057FB16  85 C0                     TEST EAX,EAX
0057FB18  0F 8C 3B 01 00 00         JL 0x0057fc59
0057FB1E  8B 86 4D 02 00 00         MOV EAX,dword ptr [ESI + 0x24d]
0057FB24  85 C0                     TEST EAX,EAX
0057FB26  0F 8C 2D 01 00 00         JL 0x0057fc59
0057FB2C  83 F8 05                  CMP EAX,0x5
0057FB2F  0F 8D 24 01 00 00         JGE 0x0057fc59
0057FB35  85 F6                     TEST ESI,ESI
0057FB37  74 08                     JZ 0x0057fb41
0057FB39  8D BE D5 01 00 00         LEA EDI,[ESI + 0x1d5]
0057FB3F  EB 02                     JMP 0x0057fb43
LAB_0057fb41:
0057FB41  33 FF                     XOR EDI,EDI
LAB_0057fb43:
0057FB43  85 DB                     TEST EBX,EBX
0057FB45  7C 11                     JL 0x0057fb58
0057FB47  8B CE                     MOV ECX,ESI
0057FB49  E8 C3 5D E8 FF            CALL 0x00405911
0057FB4E  8B F8                     MOV EDI,EAX
0057FB50  85 FF                     TEST EDI,EDI
0057FB52  0F 84 0F 01 00 00         JZ 0x0057fc67
LAB_0057fb58:
0057FB58  6A 1D                     PUSH 0x1d
0057FB5A  6A 00                     PUSH 0x0
0057FB5C  53                        PUSH EBX
0057FB5D  8B CE                     MOV ECX,ESI
0057FB5F  E8 F8 1C E8 FF            CALL 0x0040185c
0057FB64  8B 15 74 67 80 00         MOV EDX,dword ptr [0x00806774]
0057FB6A  50                        PUSH EAX
0057FB6B  52                        PUSH EDX
0057FB6C  6A 0E                     PUSH 0xe
0057FB6E  8B CF                     MOV ECX,EDI
0057FB70  E8 0E 46 E8 FF            CALL 0x00404183
0057FB75  85 C0                     TEST EAX,EAX
0057FB77  0F 85 EA 00 00 00         JNZ 0x0057fc67
0057FB7D  6A 1D                     PUSH 0x1d
0057FB7F  6A 01                     PUSH 0x1
0057FB81  53                        PUSH EBX
0057FB82  8B CE                     MOV ECX,ESI
0057FB84  E8 D3 1C E8 FF            CALL 0x0040185c
0057FB89  50                        PUSH EAX
0057FB8A  A1 74 67 80 00            MOV EAX,[0x00806774]
0057FB8F  50                        PUSH EAX
0057FB90  6A 0D                     PUSH 0xd
0057FB92  8B CF                     MOV ECX,EDI
0057FB94  E8 EA 45 E8 FF            CALL 0x00404183
0057FB99  85 C0                     TEST EAX,EAX
0057FB9B  0F 85 C6 00 00 00         JNZ 0x0057fc67
0057FBA1  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0057FBA7  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
0057FBAD  8B CF                     MOV ECX,EDI
0057FBAF  52                        PUSH EDX
0057FBB0  6A 0E                     PUSH 0xe
0057FBB2  E8 89 56 E8 FF            CALL 0x00405240
0057FBB7  A1 CC 73 80 00            MOV EAX,[0x008073cc]
0057FBBC  8B CF                     MOV ECX,EDI
0057FBBE  50                        PUSH EAX
0057FBBF  E8 E5 60 E8 FF            CALL 0x00405ca9
0057FBC4  6A 0D                     PUSH 0xd
0057FBC6  8B CF                     MOV ECX,EDI
0057FBC8  E8 30 3F E8 FF            CALL 0x00403afd
0057FBCD  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0057FBD3  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
0057FBD9  8B CF                     MOV ECX,EDI
0057FBDB  52                        PUSH EDX
0057FBDC  6A 0D                     PUSH 0xd
0057FBDE  E8 5D 56 E8 FF            CALL 0x00405240
0057FBE3  DB 86 4D 02 00 00         FILD dword ptr [ESI + 0x24d]
0057FBE9  8B 86 49 02 00 00         MOV EAX,dword ptr [ESI + 0x249]
0057FBEF  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0057FBF2  51                        PUSH ECX
0057FBF3  03 C2                     ADD EAX,EDX
0057FBF5  D8 0D 04 05 79 00         FMUL float ptr [0x00790504]
0057FBFB  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0057FBFE  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0057FC01  D8 05 00 05 79 00         FADD float ptr [0x00790500]
0057FC07  D8 05 FC 04 79 00         FADD float ptr [0x007904fc]
0057FC0D  D9 1C 24                  FSTP float ptr [ESP]
0057FC10  DB 45 F0                  FILD dword ptr [EBP + -0x10]
0057FC13  51                        PUSH ECX
0057FC14  8B 8E 45 02 00 00         MOV ECX,dword ptr [ESI + 0x245]
0057FC1A  03 C8                     ADD ECX,EAX
0057FC1C  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0057FC22  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
0057FC25  D8 05 F4 04 79 00         FADD float ptr [0x007904f4]
0057FC2B  D9 1C 24                  FSTP float ptr [ESP]
0057FC2E  DB 45 F0                  FILD dword ptr [EBP + -0x10]
0057FC31  51                        PUSH ECX
0057FC32  8B CF                     MOV ECX,EDI
0057FC34  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0057FC3A  D8 05 F4 04 79 00         FADD float ptr [0x007904f4]
0057FC40  D9 1C 24                  FSTP float ptr [ESP]
0057FC43  E8 91 49 E8 FF            CALL 0x004045d9
0057FC48  8B 57 18                  MOV EDX,dword ptr [EDI + 0x18]
0057FC4B  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
0057FC51  6A FF                     PUSH -0x1
0057FC53  52                        PUSH EDX
0057FC54  E8 87 A7 16 00            CALL 0x006ea3e0
LAB_0057fc59:
0057FC59  83 C3 02                  ADD EBX,0x2
0057FC5C  83 FB 06                  CMP EBX,0x6
0057FC5F  0F 8E 60 FE FF FF         JLE 0x0057fac5
0057FC65  EB 07                     JMP 0x0057fc6e
LAB_0057fc67:
0057FC67  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
LAB_0057fc6e:
0057FC6E  83 FB 08                  CMP EBX,0x8
0057FC71  0F 84 FB 00 00 00         JZ 0x0057fd72
0057FC77  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0057FC7E  E9 EF 00 00 00            JMP 0x0057fd72
switchD_0057f734::caseD_e0:
0057FC83  0F BF 0D 40 B2 7F 00      MOVSX ECX,word ptr [0x007fb240]
0057FC8A  8B 86 45 02 00 00         MOV EAX,dword ptr [ESI + 0x245]
0057FC90  3B C1                     CMP EAX,ECX
0057FC92  0F 8D D7 00 00 00         JGE 0x0057fd6f
0057FC98  3B C3                     CMP EAX,EBX
0057FC9A  0F 8C CF 00 00 00         JL 0x0057fd6f
0057FCA0  0F BF 15 42 B2 7F 00      MOVSX EDX,word ptr [0x007fb242]
0057FCA7  8B 86 49 02 00 00         MOV EAX,dword ptr [ESI + 0x249]
0057FCAD  3B C2                     CMP EAX,EDX
0057FCAF  0F 8D BA 00 00 00         JGE 0x0057fd6f
0057FCB5  3B C3                     CMP EAX,EBX
0057FCB7  0F 8C B2 00 00 00         JL 0x0057fd6f
0057FCBD  8B 86 4D 02 00 00         MOV EAX,dword ptr [ESI + 0x24d]
0057FCC3  3B C3                     CMP EAX,EBX
0057FCC5  0F 8C A4 00 00 00         JL 0x0057fd6f
0057FCCB  83 F8 05                  CMP EAX,0x5
0057FCCE  0F 8D 9B 00 00 00         JGE 0x0057fd6f
0057FCD4  66 8B 8E 49 02 00 00      MOV CX,word ptr [ESI + 0x249]
0057FCDB  66 8B 96 45 02 00 00      MOV DX,word ptr [ESI + 0x245]
0057FCE2  50                        PUSH EAX
0057FCE3  51                        PUSH ECX
0057FCE4  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
0057FCEA  52                        PUSH EDX
0057FCEB  E8 4B 50 E8 FF            CALL 0x00404d3b
0057FCF0  85 C0                     TEST EAX,EAX
0057FCF2  74 7B                     JZ 0x0057fd6f
0057FCF4  66 8B 86 45 02 00 00      MOV AX,word ptr [ESI + 0x245]
0057FCFB  66 8B 8E 4D 02 00 00      MOV CX,word ptr [ESI + 0x24d]
0057FD02  66 8B 96 49 02 00 00      MOV DX,word ptr [ESI + 0x249]
0057FD09  66 3B C3                  CMP AX,BX
0057FD0C  7C 52                     JL 0x0057fd60
0057FD0E  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
0057FD15  66 3B C7                  CMP AX,DI
0057FD18  7D 46                     JGE 0x0057fd60
0057FD1A  66 3B D3                  CMP DX,BX
0057FD1D  7C 41                     JL 0x0057fd60
0057FD1F  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
0057FD26  7D 38                     JGE 0x0057fd60
0057FD28  66 3B CB                  CMP CX,BX
0057FD2B  7C 33                     JL 0x0057fd60
0057FD2D  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
0057FD34  7D 2A                     JGE 0x0057fd60
0057FD36  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
0057FD3D  0F BF C9                  MOVSX ECX,CX
0057FD40  0F AF D9                  IMUL EBX,ECX
0057FD43  0F BF CF                  MOVSX ECX,DI
0057FD46  0F BF D2                  MOVSX EDX,DX
0057FD49  0F AF CA                  IMUL ECX,EDX
0057FD4C  0F BF C0                  MOVSX EAX,AX
0057FD4F  03 D9                     ADD EBX,ECX
0057FD51  8B 0D 48 B2 7F 00         MOV ECX,dword ptr [0x007fb248]
0057FD57  03 D8                     ADD EBX,EAX
0057FD59  8B 04 D9                  MOV EAX,dword ptr [ECX + EBX*0x8]
0057FD5C  33 DB                     XOR EBX,EBX
0057FD5E  EB 02                     JMP 0x0057fd62
LAB_0057fd60:
0057FD60  33 C0                     XOR EAX,EAX
LAB_0057fd62:
0057FD62  3B C3                     CMP EAX,EBX
0057FD64  75 09                     JNZ 0x0057fd6f
0057FD66  8B CE                     MOV ECX,ESI
0057FD68  E8 F1 36 E8 FF            CALL 0x0040345e
0057FD6D  EB 03                     JMP 0x0057fd72
switchD_0057f734::caseD_df:
0057FD6F  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
LAB_0057fd72:
0057FD72  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0057FD75  85 C0                     TEST EAX,EAX
0057FD77  0F 84 F0 00 00 00         JZ 0x0057fe6d
0057FD7D  8B 0D A0 B2 7F 00         MOV ECX,dword ptr [0x007fb2a0]
0057FD83  E8 94 5A E8 FF            CALL 0x0040581c
0057FD88  8B 8E 65 02 00 00         MOV ECX,dword ptr [ESI + 0x265]
0057FD8E  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
0057FD95  D1 E0                     SHL EAX,0x1
0057FD97  85 C9                     TEST ECX,ECX
0057FD99  0F 8E CE 00 00 00         JLE 0x0057fe6d
0057FD9F  8D 78 01                  LEA EDI,[EAX + 0x1]
0057FDA2  8D 14 85 E4 FF FF FF      LEA EDX,[EAX*0x4 + 0xffffffe4]
0057FDA9  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
0057FDAC  8D 1C BD 00 00 00 00      LEA EBX,[EDI*0x4 + 0x0]
LAB_0057fdb3:
0057FDB3  83 FF 08                  CMP EDI,0x8
0057FDB6  8B C3                     MOV EAX,EBX
0057FDB8  7E 03                     JLE 0x0057fdbd
0057FDBA  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
LAB_0057fdbd:
0057FDBD  DB 86 4D 02 00 00         FILD dword ptr [ESI + 0x24d]
0057FDC3  8B 96 49 02 00 00         MOV EDX,dword ptr [ESI + 0x249]
0057FDC9  51                        PUSH ECX
0057FDCA  8B 88 DC B0 7C 00         MOV ECX,dword ptr [EAX + 0x7cb0dc]
0057FDD0  D8 0D 04 05 79 00         FMUL float ptr [0x00790504]
0057FDD6  03 CA                     ADD ECX,EDX
0057FDD8  8B 90 B8 B0 7C 00         MOV EDX,dword ptr [EAX + 0x7cb0b8]
0057FDDE  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
0057FDE1  8B 86 45 02 00 00         MOV EAX,dword ptr [ESI + 0x245]
0057FDE7  D8 05 00 05 79 00         FADD float ptr [0x00790500]
0057FDED  03 D0                     ADD EDX,EAX
0057FDEF  8B 86 6D 02 00 00         MOV EAX,dword ptr [ESI + 0x26d]
0057FDF5  D8 05 FC 04 79 00         FADD float ptr [0x007904fc]
0057FDFB  D9 1C 24                  FSTP float ptr [ESP]
0057FDFE  DB 45 F0                  FILD dword ptr [EBP + -0x10]
0057FE01  51                        PUSH ECX
0057FE02  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
0057FE05  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0057FE0B  D8 05 F4 04 79 00         FADD float ptr [0x007904f4]
0057FE11  D9 1C 24                  FSTP float ptr [ESP]
0057FE14  DB 45 F0                  FILD dword ptr [EBP + -0x10]
0057FE17  51                        PUSH ECX
0057FE18  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0057FE1B  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0057FE21  8B 0C 88                  MOV ECX,dword ptr [EAX + ECX*0x4]
0057FE24  D8 05 F4 04 79 00         FADD float ptr [0x007904f4]
0057FE2A  D9 1C 24                  FSTP float ptr [ESP]
0057FE2D  E8 A7 47 E8 FF            CALL 0x004045d9
0057FE32  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0057FE35  8B 86 55 02 00 00         MOV EAX,dword ptr [ESI + 0x255]
0057FE3B  83 C3 04                  ADD EBX,0x4
0057FE3E  83 C2 04                  ADD EDX,0x4
0057FE41  47                        INC EDI
0057FE42  3D DE 00 00 00            CMP EAX,0xde
0057FE47  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
0057FE4A  75 0C                     JNZ 0x0057fe58
0057FE4C  8B CA                     MOV ECX,EDX
0057FE4E  83 C3 04                  ADD EBX,0x4
0057FE51  83 C1 04                  ADD ECX,0x4
0057FE54  47                        INC EDI
0057FE55  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
LAB_0057fe58:
0057FE58  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0057FE5B  8B 8E 65 02 00 00         MOV ECX,dword ptr [ESI + 0x265]
0057FE61  40                        INC EAX
0057FE62  3B C1                     CMP EAX,ECX
0057FE64  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0057FE67  0F 8C 46 FF FF FF         JL 0x0057fdb3
LAB_0057fe6d:
0057FE6D  8B 55 A8                  MOV EDX,dword ptr [EBP + -0x58]
0057FE70  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0057FE73  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0057FE79  5F                        POP EDI
0057FE7A  5E                        POP ESI
0057FE7B  5B                        POP EBX
0057FE7C  8B E5                     MOV ESP,EBP
0057FE7E  5D                        POP EBP
0057FE7F  C3                        RET
LAB_0057fe80:
0057FE80  8B 45 A8                  MOV EAX,dword ptr [EBP + -0x58]
0057FE83  68 8C B2 7C 00            PUSH 0x7cb28c
0057FE88  68 CC 4C 7A 00            PUSH 0x7a4ccc
0057FE8D  56                        PUSH ESI
0057FE8E  53                        PUSH EBX
0057FE8F  68 B3 02 00 00            PUSH 0x2b3
0057FE94  68 9C B1 7C 00            PUSH 0x7cb19c
0057FE99  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0057FE9E  E8 2D D6 12 00            CALL 0x006ad4d0
0057FEA3  83 C4 18                  ADD ESP,0x18
0057FEA6  85 C0                     TEST EAX,EAX
0057FEA8  74 01                     JZ 0x0057feab
0057FEAA  CC                        INT3
LAB_0057feab:
0057FEAB  68 B4 02 00 00            PUSH 0x2b4
0057FEB0  68 9C B1 7C 00            PUSH 0x7cb19c
0057FEB5  53                        PUSH EBX
0057FEB6  56                        PUSH ESI
0057FEB7  E8 84 5F 12 00            CALL 0x006a5e40
0057FEBC  5F                        POP EDI
0057FEBD  5E                        POP ESI
0057FEBE  B8 FF FF 00 00            MOV EAX,0xffff
0057FEC3  5B                        POP EBX
0057FEC4  8B E5                     MOV ESP,EBP
0057FEC6  5D                        POP EBP
0057FEC7  C3                        RET
