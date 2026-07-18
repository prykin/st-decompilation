FUN_0059b820:
0059B820  53                        PUSH EBX
0059B821  56                        PUSH ESI
0059B822  8B F1                     MOV ESI,ECX
0059B824  33 C0                     XOR EAX,EAX
0059B826  BB 01 00 00 00            MOV EBX,0x1
0059B82B  57                        PUSH EDI
0059B82C  8A 86 5F 1A 00 00         MOV AL,byte ptr [ESI + 0x1a5f]
0059B832  89 9E 6B 1A 00 00         MOV dword ptr [ESI + 0x1a6b],EBX
0059B838  83 C0 FE                  ADD EAX,-0x2
0059B83B  C7 46 29 02 00 00 00      MOV dword ptr [ESI + 0x29],0x2
0059B842  83 F8 08                  CMP EAX,0x8
0059B845  0F 87 75 04 00 00         JA 0x0059bcc0
switchD_0059b84b::switchD:
0059B84B  FF 24 85 E4 BC 59 00      JMP dword ptr [EAX*0x4 + 0x59bce4]
switchD_0059b84b::caseD_2:
0059B852  8B 86 C4 1A 00 00         MOV EAX,dword ptr [ESI + 0x1ac4]
0059B858  BF 29 00 00 00            MOV EDI,0x29
0059B85D  85 C0                     TEST EAX,EAX
0059B85F  89 7E 2D                  MOV dword ptr [ESI + 0x2d],EDI
0059B862  C7 46 31 89 00 00 00      MOV dword ptr [ESI + 0x31],0x89
0059B869  74 0E                     JZ 0x0059b879
0059B86B  8D 4E 1D                  LEA ECX,[ESI + 0x1d]
0059B86E  51                        PUSH ECX
0059B86F  50                        PUSH EAX
0059B870  6A 02                     PUSH 0x2
0059B872  8B CE                     MOV ECX,ESI
0059B874  E8 07 A8 14 00            CALL 0x006e6080
LAB_0059b879:
0059B879  8B 86 D8 1A 00 00         MOV EAX,dword ptr [ESI + 0x1ad8]
0059B87F  85 C0                     TEST EAX,EAX
0059B881  74 0E                     JZ 0x0059b891
0059B883  8D 56 1D                  LEA EDX,[ESI + 0x1d]
0059B886  8B CE                     MOV ECX,ESI
0059B888  52                        PUSH EDX
0059B889  50                        PUSH EAX
0059B88A  6A 02                     PUSH 0x2
0059B88C  E8 EF A7 14 00            CALL 0x006e6080
LAB_0059b891:
0059B891  8B 86 DC 1A 00 00         MOV EAX,dword ptr [ESI + 0x1adc]
0059B897  85 C0                     TEST EAX,EAX
0059B899  74 0E                     JZ 0x0059b8a9
0059B89B  8D 4E 1D                  LEA ECX,[ESI + 0x1d]
0059B89E  51                        PUSH ECX
0059B89F  50                        PUSH EAX
0059B8A0  6A 02                     PUSH 0x2
0059B8A2  8B CE                     MOV ECX,ESI
0059B8A4  E8 D7 A7 14 00            CALL 0x006e6080
LAB_0059b8a9:
0059B8A9  8B 86 E0 1A 00 00         MOV EAX,dword ptr [ESI + 0x1ae0]
0059B8AF  85 C0                     TEST EAX,EAX
0059B8B1  74 0E                     JZ 0x0059b8c1
0059B8B3  8D 56 1D                  LEA EDX,[ESI + 0x1d]
0059B8B6  8B CE                     MOV ECX,ESI
0059B8B8  52                        PUSH EDX
0059B8B9  50                        PUSH EAX
0059B8BA  6A 02                     PUSH 0x2
0059B8BC  E8 BF A7 14 00            CALL 0x006e6080
LAB_0059b8c1:
0059B8C1  8B 86 C8 1A 00 00         MOV EAX,dword ptr [ESI + 0x1ac8]
0059B8C7  89 7E 31                  MOV dword ptr [ESI + 0x31],EDI
0059B8CA  85 C0                     TEST EAX,EAX
0059B8CC  74 0E                     JZ 0x0059b8dc
0059B8CE  8D 4E 1D                  LEA ECX,[ESI + 0x1d]
0059B8D1  51                        PUSH ECX
0059B8D2  50                        PUSH EAX
0059B8D3  6A 02                     PUSH 0x2
0059B8D5  8B CE                     MOV ECX,ESI
0059B8D7  E8 A4 A7 14 00            CALL 0x006e6080
LAB_0059b8dc:
0059B8DC  8B 86 CC 1A 00 00         MOV EAX,dword ptr [ESI + 0x1acc]
0059B8E2  85 C0                     TEST EAX,EAX
0059B8E4  74 0E                     JZ 0x0059b8f4
0059B8E6  8D 56 1D                  LEA EDX,[ESI + 0x1d]
0059B8E9  8B CE                     MOV ECX,ESI
0059B8EB  52                        PUSH EDX
0059B8EC  50                        PUSH EAX
0059B8ED  6A 02                     PUSH 0x2
0059B8EF  E8 8C A7 14 00            CALL 0x006e6080
LAB_0059b8f4:
0059B8F4  8B 86 D4 1A 00 00         MOV EAX,dword ptr [ESI + 0x1ad4]
0059B8FA  85 C0                     TEST EAX,EAX
0059B8FC  74 0E                     JZ 0x0059b90c
0059B8FE  8D 4E 1D                  LEA ECX,[ESI + 0x1d]
0059B901  51                        PUSH ECX
0059B902  50                        PUSH EAX
0059B903  6A 02                     PUSH 0x2
0059B905  8B CE                     MOV ECX,ESI
0059B907  E8 74 A7 14 00            CALL 0x006e6080
LAB_0059b90c:
0059B90C  8B 86 E4 1A 00 00         MOV EAX,dword ptr [ESI + 0x1ae4]
0059B912  C7 46 31 C8 00 00 00      MOV dword ptr [ESI + 0x31],0xc8
0059B919  85 C0                     TEST EAX,EAX
0059B91B  74 0E                     JZ 0x0059b92b
0059B91D  8D 56 1D                  LEA EDX,[ESI + 0x1d]
0059B920  8B CE                     MOV ECX,ESI
0059B922  52                        PUSH EDX
0059B923  50                        PUSH EAX
0059B924  6A 02                     PUSH 0x2
0059B926  E8 55 A7 14 00            CALL 0x006e6080
LAB_0059b92b:
0059B92B  8B 86 14 1B 00 00         MOV EAX,dword ptr [ESI + 0x1b14]
0059B931  C7 46 2D 20 00 00 00      MOV dword ptr [ESI + 0x2d],0x20
0059B938  85 C0                     TEST EAX,EAX
0059B93A  89 5E 31                  MOV dword ptr [ESI + 0x31],EBX
0059B93D  74 0E                     JZ 0x0059b94d
0059B93F  8D 4E 1D                  LEA ECX,[ESI + 0x1d]
0059B942  51                        PUSH ECX
0059B943  50                        PUSH EAX
0059B944  6A 02                     PUSH 0x2
0059B946  8B CE                     MOV ECX,ESI
0059B948  E8 33 A7 14 00            CALL 0x006e6080
LAB_0059b94d:
0059B94D  8B 86 D0 1A 00 00         MOV EAX,dword ptr [ESI + 0x1ad0]
0059B953  89 5E 31                  MOV dword ptr [ESI + 0x31],EBX
0059B956  85 C0                     TEST EAX,EAX
0059B958  74 0E                     JZ 0x0059b968
0059B95A  8D 56 1D                  LEA EDX,[ESI + 0x1d]
0059B95D  8B CE                     MOV ECX,ESI
0059B95F  52                        PUSH EDX
0059B960  50                        PUSH EAX
0059B961  6A 02                     PUSH 0x2
0059B963  E8 18 A7 14 00            CALL 0x006e6080
LAB_0059b968:
0059B968  8B 86 B6 1E 00 00         MOV EAX,dword ptr [ESI + 0x1eb6]
0059B96E  85 C0                     TEST EAX,EAX
0059B970  0F 84 4A 03 00 00         JZ 0x0059bcc0
0059B976  E9 37 03 00 00            JMP 0x0059bcb2
switchD_0059b84b::caseD_6:
0059B97B  8B 86 10 1B 00 00         MOV EAX,dword ptr [ESI + 0x1b10]
0059B981  C7 46 2D 29 00 00 00      MOV dword ptr [ESI + 0x2d],0x29
0059B988  85 C0                     TEST EAX,EAX
0059B98A  C7 46 31 09 00 00 00      MOV dword ptr [ESI + 0x31],0x9
0059B991  74 0E                     JZ 0x0059b9a1
0059B993  8D 56 1D                  LEA EDX,[ESI + 0x1d]
0059B996  8B CE                     MOV ECX,ESI
0059B998  52                        PUSH EDX
0059B999  50                        PUSH EAX
0059B99A  6A 02                     PUSH 0x2
0059B99C  E8 DF A6 14 00            CALL 0x006e6080
LAB_0059b9a1:
0059B9A1  8B 86 C4 1A 00 00         MOV EAX,dword ptr [ESI + 0x1ac4]
0059B9A7  C7 46 31 89 00 00 00      MOV dword ptr [ESI + 0x31],0x89
0059B9AE  85 C0                     TEST EAX,EAX
0059B9B0  74 0E                     JZ 0x0059b9c0
0059B9B2  8D 4E 1D                  LEA ECX,[ESI + 0x1d]
0059B9B5  51                        PUSH ECX
0059B9B6  50                        PUSH EAX
0059B9B7  6A 02                     PUSH 0x2
0059B9B9  8B CE                     MOV ECX,ESI
0059B9BB  E8 C0 A6 14 00            CALL 0x006e6080
LAB_0059b9c0:
0059B9C0  8B 86 C8 1A 00 00         MOV EAX,dword ptr [ESI + 0x1ac8]
0059B9C6  85 C0                     TEST EAX,EAX
0059B9C8  74 0E                     JZ 0x0059b9d8
0059B9CA  8D 56 1D                  LEA EDX,[ESI + 0x1d]
0059B9CD  8B CE                     MOV ECX,ESI
0059B9CF  52                        PUSH EDX
0059B9D0  50                        PUSH EAX
0059B9D1  6A 02                     PUSH 0x2
0059B9D3  E8 A8 A6 14 00            CALL 0x006e6080
LAB_0059b9d8:
0059B9D8  8B 86 14 1B 00 00         MOV EAX,dword ptr [ESI + 0x1b14]
0059B9DE  C7 46 2D 20 00 00 00      MOV dword ptr [ESI + 0x2d],0x20
0059B9E5  85 C0                     TEST EAX,EAX
0059B9E7  89 5E 31                  MOV dword ptr [ESI + 0x31],EBX
0059B9EA  74 0E                     JZ 0x0059b9fa
0059B9EC  8D 4E 1D                  LEA ECX,[ESI + 0x1d]
0059B9EF  51                        PUSH ECX
0059B9F0  50                        PUSH EAX
0059B9F1  6A 02                     PUSH 0x2
0059B9F3  8B CE                     MOV ECX,ESI
0059B9F5  E8 86 A6 14 00            CALL 0x006e6080
LAB_0059b9fa:
0059B9FA  8B 86 18 1B 00 00         MOV EAX,dword ptr [ESI + 0x1b18]
0059BA00  89 5E 31                  MOV dword ptr [ESI + 0x31],EBX
0059BA03  85 C0                     TEST EAX,EAX
0059BA05  74 18                     JZ 0x0059ba1f
0059BA07  8A 8E 60 1A 00 00         MOV CL,byte ptr [ESI + 0x1a60]
0059BA0D  84 C9                     TEST CL,CL
0059BA0F  75 0E                     JNZ 0x0059ba1f
0059BA11  8D 56 1D                  LEA EDX,[ESI + 0x1d]
0059BA14  8B CE                     MOV ECX,ESI
0059BA16  52                        PUSH EDX
0059BA17  50                        PUSH EAX
0059BA18  6A 02                     PUSH 0x2
0059BA1A  E8 61 A6 14 00            CALL 0x006e6080
LAB_0059ba1f:
0059BA1F  8B 86 24 1B 00 00         MOV EAX,dword ptr [ESI + 0x1b24]
0059BA25  85 C0                     TEST EAX,EAX
0059BA27  74 18                     JZ 0x0059ba41
0059BA29  8A 8E 60 1A 00 00         MOV CL,byte ptr [ESI + 0x1a60]
0059BA2F  84 C9                     TEST CL,CL
0059BA31  74 0E                     JZ 0x0059ba41
0059BA33  8D 4E 1D                  LEA ECX,[ESI + 0x1d]
0059BA36  51                        PUSH ECX
0059BA37  50                        PUSH EAX
0059BA38  6A 02                     PUSH 0x2
0059BA3A  8B CE                     MOV ECX,ESI
0059BA3C  E8 3F A6 14 00            CALL 0x006e6080
LAB_0059ba41:
0059BA41  8B 86 1C 1B 00 00         MOV EAX,dword ptr [ESI + 0x1b1c]
0059BA47  85 C0                     TEST EAX,EAX
0059BA49  74 0E                     JZ 0x0059ba59
0059BA4B  8D 56 1D                  LEA EDX,[ESI + 0x1d]
0059BA4E  8B CE                     MOV ECX,ESI
0059BA50  52                        PUSH EDX
0059BA51  50                        PUSH EAX
0059BA52  6A 02                     PUSH 0x2
0059BA54  E8 27 A6 14 00            CALL 0x006e6080
LAB_0059ba59:
0059BA59  8B 86 20 1B 00 00         MOV EAX,dword ptr [ESI + 0x1b20]
0059BA5F  89 5E 31                  MOV dword ptr [ESI + 0x31],EBX
0059BA62  85 C0                     TEST EAX,EAX
0059BA64  0F 84 56 02 00 00         JZ 0x0059bcc0
0059BA6A  E9 43 02 00 00            JMP 0x0059bcb2
switchD_0059b84b::caseD_8:
0059BA6F  8B 86 C4 1A 00 00         MOV EAX,dword ptr [ESI + 0x1ac4]
0059BA75  C7 46 2D 29 00 00 00      MOV dword ptr [ESI + 0x2d],0x29
0059BA7C  85 C0                     TEST EAX,EAX
0059BA7E  C7 46 31 99 00 00 00      MOV dword ptr [ESI + 0x31],0x99
0059BA85  74 0E                     JZ 0x0059ba95
0059BA87  8D 56 1D                  LEA EDX,[ESI + 0x1d]
0059BA8A  8B CE                     MOV ECX,ESI
0059BA8C  52                        PUSH EDX
0059BA8D  50                        PUSH EAX
0059BA8E  6A 02                     PUSH 0x2
0059BA90  E8 EB A5 14 00            CALL 0x006e6080
LAB_0059ba95:
0059BA95  8B 86 C8 1A 00 00         MOV EAX,dword ptr [ESI + 0x1ac8]
0059BA9B  C7 46 31 89 00 00 00      MOV dword ptr [ESI + 0x31],0x89
0059BAA2  85 C0                     TEST EAX,EAX
0059BAA4  74 0E                     JZ 0x0059bab4
0059BAA6  8D 4E 1D                  LEA ECX,[ESI + 0x1d]
0059BAA9  51                        PUSH ECX
0059BAAA  50                        PUSH EAX
0059BAAB  6A 02                     PUSH 0x2
0059BAAD  8B CE                     MOV ECX,ESI
0059BAAF  E8 CC A5 14 00            CALL 0x006e6080
LAB_0059bab4:
0059BAB4  8B 86 B6 1E 00 00         MOV EAX,dword ptr [ESI + 0x1eb6]
0059BABA  C7 46 2D 20 00 00 00      MOV dword ptr [ESI + 0x2d],0x20
0059BAC1  85 C0                     TEST EAX,EAX
0059BAC3  89 5E 31                  MOV dword ptr [ESI + 0x31],EBX
0059BAC6  74 0E                     JZ 0x0059bad6
0059BAC8  8D 56 1D                  LEA EDX,[ESI + 0x1d]
0059BACB  8B CE                     MOV ECX,ESI
0059BACD  52                        PUSH EDX
0059BACE  50                        PUSH EAX
0059BACF  6A 02                     PUSH 0x2
0059BAD1  E8 AA A5 14 00            CALL 0x006e6080
LAB_0059bad6:
0059BAD6  8B 86 24 1B 00 00         MOV EAX,dword ptr [ESI + 0x1b24]
0059BADC  85 C0                     TEST EAX,EAX
0059BADE  74 0E                     JZ 0x0059baee
0059BAE0  8D 4E 1D                  LEA ECX,[ESI + 0x1d]
0059BAE3  51                        PUSH ECX
0059BAE4  50                        PUSH EAX
0059BAE5  6A 02                     PUSH 0x2
0059BAE7  8B CE                     MOV ECX,ESI
0059BAE9  E8 92 A5 14 00            CALL 0x006e6080
LAB_0059baee:
0059BAEE  8B BE C2 1E 00 00         MOV EDI,dword ptr [ESI + 0x1ec2]
0059BAF4  8B 86 BA 1E 00 00         MOV EAX,dword ptr [ESI + 0x1eba]
0059BAFA  33 D2                     XOR EDX,EDX
0059BAFC  81 FF 00 01 00 00         CMP EDI,0x100
0059BB02  0F 94 C2                  SETZ DL
0059BB05  85 C0                     TEST EAX,EAX
0059BB07  89 56 31                  MOV dword ptr [ESI + 0x31],EDX
0059BB0A  74 0E                     JZ 0x0059bb1a
0059BB0C  8D 4E 1D                  LEA ECX,[ESI + 0x1d]
0059BB0F  51                        PUSH ECX
0059BB10  50                        PUSH EAX
0059BB11  6A 02                     PUSH 0x2
0059BB13  8B CE                     MOV ECX,ESI
0059BB15  E8 66 A5 14 00            CALL 0x006e6080
LAB_0059bb1a:
0059BB1A  8B 86 20 1B 00 00         MOV EAX,dword ptr [ESI + 0x1b20]
0059BB20  89 5E 31                  MOV dword ptr [ESI + 0x31],EBX
0059BB23  85 C0                     TEST EAX,EAX
0059BB25  0F 84 95 01 00 00         JZ 0x0059bcc0
0059BB2B  8D 56 1D                  LEA EDX,[ESI + 0x1d]
0059BB2E  52                        PUSH EDX
0059BB2F  E9 82 01 00 00            JMP 0x0059bcb6
switchD_0059b84b::caseD_a:
0059BB34  8B 86 0C 1B 00 00         MOV EAX,dword ptr [ESI + 0x1b0c]
0059BB3A  BF 1D 7E 80 00            MOV EDI,0x807e1d
LAB_0059bb3f:
0059BB3F  8A 10                     MOV DL,byte ptr [EAX]
0059BB41  8A 1F                     MOV BL,byte ptr [EDI]
0059BB43  8A CA                     MOV CL,DL
0059BB45  3A D3                     CMP DL,BL
0059BB47  75 1E                     JNZ 0x0059bb67
0059BB49  84 C9                     TEST CL,CL
0059BB4B  74 16                     JZ 0x0059bb63
0059BB4D  8A 50 01                  MOV DL,byte ptr [EAX + 0x1]
0059BB50  8A 5F 01                  MOV BL,byte ptr [EDI + 0x1]
0059BB53  8A CA                     MOV CL,DL
0059BB55  3A D3                     CMP DL,BL
0059BB57  75 0E                     JNZ 0x0059bb67
0059BB59  83 C0 02                  ADD EAX,0x2
0059BB5C  83 C7 02                  ADD EDI,0x2
0059BB5F  84 C9                     TEST CL,CL
0059BB61  75 DC                     JNZ 0x0059bb3f
LAB_0059bb63:
0059BB63  33 FF                     XOR EDI,EDI
0059BB65  EB 05                     JMP 0x0059bb6c
LAB_0059bb67:
0059BB67  1B FF                     SBB EDI,EDI
0059BB69  83 DF FF                  SBB EDI,-0x1
LAB_0059bb6c:
0059BB6C  85 FF                     TEST EDI,EDI
0059BB6E  C7 46 2D 29 00 00 00      MOV dword ptr [ESI + 0x2d],0x29
0059BB75  C7 46 31 89 00 00 00      MOV dword ptr [ESI + 0x31],0x89
0059BB7C  74 07                     JZ 0x0059bb85
0059BB7E  C7 46 31 99 00 00 00      MOV dword ptr [ESI + 0x31],0x99
LAB_0059bb85:
0059BB85  8B 86 D8 1A 00 00         MOV EAX,dword ptr [ESI + 0x1ad8]
0059BB8B  85 C0                     TEST EAX,EAX
0059BB8D  74 0E                     JZ 0x0059bb9d
0059BB8F  8D 4E 1D                  LEA ECX,[ESI + 0x1d]
0059BB92  51                        PUSH ECX
0059BB93  50                        PUSH EAX
0059BB94  6A 02                     PUSH 0x2
0059BB96  8B CE                     MOV ECX,ESI
0059BB98  E8 E3 A4 14 00            CALL 0x006e6080
LAB_0059bb9d:
0059BB9D  8B 86 DC 1A 00 00         MOV EAX,dword ptr [ESI + 0x1adc]
0059BBA3  85 C0                     TEST EAX,EAX
0059BBA5  74 0E                     JZ 0x0059bbb5
0059BBA7  8D 56 1D                  LEA EDX,[ESI + 0x1d]
0059BBAA  8B CE                     MOV ECX,ESI
0059BBAC  52                        PUSH EDX
0059BBAD  50                        PUSH EAX
0059BBAE  6A 02                     PUSH 0x2
0059BBB0  E8 CB A4 14 00            CALL 0x006e6080
LAB_0059bbb5:
0059BBB5  8B 86 E0 1A 00 00         MOV EAX,dword ptr [ESI + 0x1ae0]
0059BBBB  85 C0                     TEST EAX,EAX
0059BBBD  74 0E                     JZ 0x0059bbcd
0059BBBF  8D 4E 1D                  LEA ECX,[ESI + 0x1d]
0059BBC2  51                        PUSH ECX
0059BBC3  50                        PUSH EAX
0059BBC4  6A 02                     PUSH 0x2
0059BBC6  8B CE                     MOV ECX,ESI
0059BBC8  E8 B3 A4 14 00            CALL 0x006e6080
LAB_0059bbcd:
0059BBCD  85 FF                     TEST EDI,EDI
0059BBCF  C7 46 31 C8 00 00 00      MOV dword ptr [ESI + 0x31],0xc8
0059BBD6  74 07                     JZ 0x0059bbdf
0059BBD8  C7 46 31 CC 00 00 00      MOV dword ptr [ESI + 0x31],0xcc
LAB_0059bbdf:
0059BBDF  8B 86 E4 1A 00 00         MOV EAX,dword ptr [ESI + 0x1ae4]
0059BBE5  85 C0                     TEST EAX,EAX
0059BBE7  0F 84 D3 00 00 00         JZ 0x0059bcc0
0059BBED  8D 56 1D                  LEA EDX,[ESI + 0x1d]
0059BBF0  52                        PUSH EDX
0059BBF1  E9 C0 00 00 00            JMP 0x0059bcb6
switchD_0059b84b::caseD_9:
0059BBF6  8B 96 DF 1E 00 00         MOV EDX,dword ptr [ESI + 0x1edf]
0059BBFC  33 C0                     XOR EAX,EAX
0059BBFE  85 D2                     TEST EDX,EDX
0059BC00  0F 95 C0                  SETNZ AL
0059BC03  89 46 31                  MOV dword ptr [ESI + 0x31],EAX
0059BC06  8B 86 D3 1E 00 00         MOV EAX,dword ptr [ESI + 0x1ed3]
0059BC0C  85 C0                     TEST EAX,EAX
0059BC0E  C7 46 2D 20 00 00 00      MOV dword ptr [ESI + 0x2d],0x20
0059BC15  74 0E                     JZ 0x0059bc25
0059BC17  8D 4E 1D                  LEA ECX,[ESI + 0x1d]
0059BC1A  51                        PUSH ECX
0059BC1B  50                        PUSH EAX
0059BC1C  6A 02                     PUSH 0x2
0059BC1E  8B CE                     MOV ECX,ESI
0059BC20  E8 5B A4 14 00            CALL 0x006e6080
LAB_0059bc25:
0059BC25  8B 86 DF 1E 00 00         MOV EAX,dword ptr [ESI + 0x1edf]
0059BC2B  3D 30 42 0F 00            CMP EAX,0xf4230
0059BC30  8B 86 D7 1E 00 00         MOV EAX,dword ptr [ESI + 0x1ed7]
0059BC36  1B D2                     SBB EDX,EDX
0059BC38  F7 DA                     NEG EDX
0059BC3A  85 C0                     TEST EAX,EAX
0059BC3C  89 56 31                  MOV dword ptr [ESI + 0x31],EDX
0059BC3F  74 0E                     JZ 0x0059bc4f
0059BC41  8D 4E 1D                  LEA ECX,[ESI + 0x1d]
0059BC44  51                        PUSH ECX
0059BC45  50                        PUSH EAX
0059BC46  6A 02                     PUSH 0x2
0059BC48  8B CE                     MOV ECX,ESI
0059BC4A  E8 31 A4 14 00            CALL 0x006e6080
LAB_0059bc4f:
0059BC4F  8B 86 B6 1E 00 00         MOV EAX,dword ptr [ESI + 0x1eb6]
0059BC55  89 5E 31                  MOV dword ptr [ESI + 0x31],EBX
0059BC58  85 C0                     TEST EAX,EAX
0059BC5A  74 0E                     JZ 0x0059bc6a
0059BC5C  8D 56 1D                  LEA EDX,[ESI + 0x1d]
0059BC5F  8B CE                     MOV ECX,ESI
0059BC61  52                        PUSH EDX
0059BC62  50                        PUSH EAX
0059BC63  6A 02                     PUSH 0x2
0059BC65  E8 16 A4 14 00            CALL 0x006e6080
LAB_0059bc6a:
0059BC6A  8B 86 BA 1E 00 00         MOV EAX,dword ptr [ESI + 0x1eba]
0059BC70  85 C0                     TEST EAX,EAX
0059BC72  74 0E                     JZ 0x0059bc82
0059BC74  8D 4E 1D                  LEA ECX,[ESI + 0x1d]
0059BC77  51                        PUSH ECX
0059BC78  50                        PUSH EAX
0059BC79  6A 02                     PUSH 0x2
0059BC7B  8B CE                     MOV ECX,ESI
0059BC7D  E8 FE A3 14 00            CALL 0x006e6080
LAB_0059bc82:
0059BC82  8B 86 24 1B 00 00         MOV EAX,dword ptr [ESI + 0x1b24]
0059BC88  85 C0                     TEST EAX,EAX
0059BC8A  74 0E                     JZ 0x0059bc9a
0059BC8C  8D 56 1D                  LEA EDX,[ESI + 0x1d]
0059BC8F  8B CE                     MOV ECX,ESI
0059BC91  52                        PUSH EDX
0059BC92  50                        PUSH EAX
0059BC93  6A 02                     PUSH 0x2
0059BC95  E8 E6 A3 14 00            CALL 0x006e6080
LAB_0059bc9a:
0059BC9A  8B 86 C4 1A 00 00         MOV EAX,dword ptr [ESI + 0x1ac4]
0059BCA0  C7 46 2D 29 00 00 00      MOV dword ptr [ESI + 0x2d],0x29
0059BCA7  85 C0                     TEST EAX,EAX
0059BCA9  C7 46 31 89 00 00 00      MOV dword ptr [ESI + 0x31],0x89
0059BCB0  74 0E                     JZ 0x0059bcc0
LAB_0059bcb2:
0059BCB2  8D 4E 1D                  LEA ECX,[ESI + 0x1d]
0059BCB5  51                        PUSH ECX
LAB_0059bcb6:
0059BCB6  50                        PUSH EAX
0059BCB7  6A 02                     PUSH 0x2
0059BCB9  8B CE                     MOV ECX,ESI
0059BCBB  E8 C0 A3 14 00            CALL 0x006e6080
switchD_0059b84b::default:
0059BCC0  8D 56 1D                  LEA EDX,[ESI + 0x1d]
0059BCC3  8B CE                     MOV ECX,ESI
0059BCC5  52                        PUSH EDX
0059BCC6  6A 00                     PUSH 0x0
0059BCC8  6A 0F                     PUSH 0xf
0059BCCA  C7 46 2D 61 00 00 00      MOV dword ptr [ESI + 0x2d],0x61
0059BCD1  C7 46 35 00 00 00 00      MOV dword ptr [ESI + 0x35],0x0
0059BCD8  E8 A3 A3 14 00            CALL 0x006e6080
0059BCDD  5F                        POP EDI
0059BCDE  5E                        POP ESI
0059BCDF  5B                        POP EBX
0059BCE0  C3                        RET
