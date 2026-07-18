FUN_004dc760:
004DC760  53                        PUSH EBX
004DC761  56                        PUSH ESI
004DC762  8B F1                     MOV ESI,ECX
004DC764  33 DB                     XOR EBX,EBX
004DC766  57                        PUSH EDI
004DC767  8B 86 D0 04 00 00         MOV EAX,dword ptr [ESI + 0x4d0]
004DC76D  2B C3                     SUB EAX,EBX
004DC76F  0F 84 30 02 00 00         JZ 0x004dc9a5
004DC775  48                        DEC EAX
004DC776  0F 84 32 01 00 00         JZ 0x004dc8ae
004DC77C  48                        DEC EAX
004DC77D  0F 85 65 02 00 00         JNZ 0x004dc9e8
004DC783  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
004DC786  8A 4E 24                  MOV CL,byte ptr [ESI + 0x24]
004DC789  50                        PUSH EAX
004DC78A  51                        PUSH ECX
004DC78B  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004DC791  BF 1E 00 00 00            MOV EDI,0x1e
004DC796  E8 FD 64 F2 FF            CALL 0x00402c98
004DC79B  85 C0                     TEST EAX,EAX
004DC79D  75 05                     JNZ 0x004dc7a4
004DC79F  BF 78 00 00 00            MOV EDI,0x78
LAB_004dc7a4:
004DC7A4  A1 38 2A 80 00            MOV EAX,[0x00802a38]
004DC7A9  8B 96 DC 04 00 00         MOV EDX,dword ptr [ESI + 0x4dc]
004DC7AF  03 D7                     ADD EDX,EDI
004DC7B1  39 90 E4 00 00 00         CMP dword ptr [EAX + 0xe4],EDX
004DC7B7  72 77                     JC 0x004dc830
004DC7B9  8B 96 D8 04 00 00         MOV EDX,dword ptr [ESI + 0x4d8]
004DC7BF  83 C2 64                  ADD EDX,0x64
004DC7C2  8B C2                     MOV EAX,EDX
004DC7C4  89 96 D8 04 00 00         MOV dword ptr [ESI + 0x4d8],EDX
004DC7CA  3D 10 27 00 00            CMP EAX,0x2710
004DC7CF  7C 4D                     JL 0x004dc81e
004DC7D1  53                        PUSH EBX
004DC7D2  8B CE                     MOV ECX,ESI
004DC7D4  C7 86 D8 04 00 00 10 27 00 00  MOV dword ptr [ESI + 0x4d8],0x2710
004DC7DE  89 9E D0 04 00 00         MOV dword ptr [ESI + 0x4d0],EBX
004DC7E4  E8 0E 65 F2 FF            CALL 0x00402cf7
004DC7E9  8B 16                     MOV EDX,dword ptr [ESI]
004DC7EB  8B CE                     MOV ECX,ESI
004DC7ED  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004DC7F0  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004DC7F6  50                        PUSH EAX
004DC7F7  8A 46 24                  MOV AL,byte ptr [ESI + 0x24]
004DC7FA  50                        PUSH EAX
004DC7FB  E8 0E 67 F2 FF            CALL 0x00402f0e
004DC800  8B 4E 10                  MOV ECX,dword ptr [ESI + 0x10]
004DC803  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004DC806  33 D2                     XOR EDX,EDX
004DC808  8A 91 2D 11 00 00         MOV DL,byte ptr [ECX + 0x112d]
004DC80E  3B C2                     CMP EAX,EDX
004DC810  75 0C                     JNZ 0x004dc81e
004DC812  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004DC818  50                        PUSH EAX
004DC819  E8 6F 83 F2 FF            CALL 0x00404b8d
LAB_004dc81e:
004DC81E  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004DC824  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
004DC82A  89 96 DC 04 00 00         MOV dword ptr [ESI + 0x4dc],EDX
LAB_004dc830:
004DC830  8B 8E D4 04 00 00         MOV ECX,dword ptr [ESI + 0x4d4]
004DC836  B8 01 00 00 00            MOV EAX,0x1
004DC83B  3B C8                     CMP ECX,EAX
004DC83D  0F 85 A5 01 00 00         JNZ 0x004dc9e8
004DC843  53                        PUSH EBX
004DC844  8B CE                     MOV ECX,ESI
004DC846  89 86 D0 04 00 00         MOV dword ptr [ESI + 0x4d0],EAX
004DC84C  89 9E D4 04 00 00         MOV dword ptr [ESI + 0x4d4],EBX
004DC852  E8 A0 64 F2 FF            CALL 0x00402cf7
004DC857  8B CE                     MOV ECX,ESI
004DC859  E8 EC 52 F2 FF            CALL 0x00401b4a
004DC85E  8B 06                     MOV EAX,dword ptr [ESI]
004DC860  68 39 03 00 00            PUSH 0x339
004DC865  6A 04                     PUSH 0x4
004DC867  8B CE                     MOV ECX,ESI
004DC869  FF 90 90 00 00 00         CALL dword ptr [EAX + 0x90]
004DC86F  8B 16                     MOV EDX,dword ptr [ESI]
004DC871  8B CE                     MOV ECX,ESI
004DC873  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004DC876  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004DC87C  50                        PUSH EAX
004DC87D  8A 46 24                  MOV AL,byte ptr [ESI + 0x24]
004DC880  50                        PUSH EAX
004DC881  E8 88 66 F2 FF            CALL 0x00402f0e
004DC886  8B 4E 10                  MOV ECX,dword ptr [ESI + 0x10]
004DC889  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004DC88C  33 D2                     XOR EDX,EDX
004DC88E  8A 91 2D 11 00 00         MOV DL,byte ptr [ECX + 0x112d]
004DC894  3B C2                     CMP EAX,EDX
004DC896  0F 85 4C 01 00 00         JNZ 0x004dc9e8
004DC89C  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004DC8A2  50                        PUSH EAX
004DC8A3  E8 E5 82 F2 FF            CALL 0x00404b8d
004DC8A8  5F                        POP EDI
004DC8A9  5E                        POP ESI
004DC8AA  33 C0                     XOR EAX,EAX
004DC8AC  5B                        POP EBX
004DC8AD  C3                        RET
LAB_004dc8ae:
004DC8AE  8B 86 D8 04 00 00         MOV EAX,dword ptr [ESI + 0x4d8]
004DC8B4  BF 02 00 00 00            MOV EDI,0x2
004DC8B9  3B C3                     CMP EAX,EBX
004DC8BB  74 61                     JZ 0x004dc91e
004DC8BD  39 BE D4 04 00 00         CMP dword ptr [ESI + 0x4d4],EDI
004DC8C3  74 59                     JZ 0x004dc91e
004DC8C5  39 9E 08 04 00 00         CMP dword ptr [ESI + 0x408],EBX
004DC8CB  75 18                     JNZ 0x004dc8e5
004DC8CD  8B CE                     MOV ECX,ESI
004DC8CF  E8 76 52 F2 FF            CALL 0x00401b4a
004DC8D4  8B 16                     MOV EDX,dword ptr [ESI]
004DC8D6  68 39 03 00 00            PUSH 0x339
004DC8DB  6A 04                     PUSH 0x4
004DC8DD  8B CE                     MOV ECX,ESI
004DC8DF  FF 92 90 00 00 00         CALL dword ptr [EDX + 0x90]
LAB_004dc8e5:
004DC8E5  A1 38 2A 80 00            MOV EAX,[0x00802a38]
004DC8EA  8B 8E DC 04 00 00         MOV ECX,dword ptr [ESI + 0x4dc]
004DC8F0  83 C1 2D                  ADD ECX,0x2d
004DC8F3  8B 80 E4 00 00 00         MOV EAX,dword ptr [EAX + 0xe4]
004DC8F9  3B C1                     CMP EAX,ECX
004DC8FB  0F 82 E7 00 00 00         JC 0x004dc9e8
004DC901  8B 96 D8 04 00 00         MOV EDX,dword ptr [ESI + 0x4d8]
004DC907  8B CE                     MOV ECX,ESI
004DC909  83 EA 64                  SUB EDX,0x64
004DC90C  89 86 DC 04 00 00         MOV dword ptr [ESI + 0x4dc],EAX
004DC912  52                        PUSH EDX
004DC913  E8 D0 8B F2 FF            CALL 0x004054e8
004DC918  5F                        POP EDI
004DC919  5E                        POP ESI
004DC91A  33 C0                     XOR EAX,EAX
004DC91C  5B                        POP EBX
004DC91D  C3                        RET
LAB_004dc91e:
004DC91E  6A 0E                     PUSH 0xe
004DC920  8D 8E D5 01 00 00         LEA ECX,[ESI + 0x1d5]
004DC926  E8 84 79 F2 FF            CALL 0x004042af
004DC92B  8B 8E F5 01 00 00         MOV ECX,dword ptr [ESI + 0x1f5]
004DC931  3B 81 0C 02 00 00         CMP EAX,dword ptr [ECX + 0x20c]
004DC937  0F 85 AB 00 00 00         JNZ 0x004dc9e8
004DC93D  89 BE D0 04 00 00         MOV dword ptr [ESI + 0x4d0],EDI
004DC943  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
004DC949  53                        PUSH EBX
004DC94A  8B CE                     MOV ECX,ESI
004DC94C  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
004DC952  89 9E D4 04 00 00         MOV dword ptr [ESI + 0x4d4],EBX
004DC958  89 86 DC 04 00 00         MOV dword ptr [ESI + 0x4dc],EAX
004DC95E  E8 94 63 F2 FF            CALL 0x00402cf7
004DC963  8B 16                     MOV EDX,dword ptr [ESI]
004DC965  8B CE                     MOV ECX,ESI
004DC967  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004DC96A  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004DC970  50                        PUSH EAX
004DC971  8A 46 24                  MOV AL,byte ptr [ESI + 0x24]
004DC974  50                        PUSH EAX
004DC975  E8 BF 94 F2 FF            CALL 0x00405e39
004DC97A  8B 4E 10                  MOV ECX,dword ptr [ESI + 0x10]
004DC97D  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004DC980  33 D2                     XOR EDX,EDX
004DC982  8A 91 2D 11 00 00         MOV DL,byte ptr [ECX + 0x112d]
004DC988  3B C2                     CMP EAX,EDX
004DC98A  75 0C                     JNZ 0x004dc998
004DC98C  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004DC992  50                        PUSH EAX
004DC993  E8 F5 81 F2 FF            CALL 0x00404b8d
LAB_004dc998:
004DC998  8B CE                     MOV ECX,ESI
004DC99A  E8 94 90 F2 FF            CALL 0x00405a33
004DC99F  5F                        POP EDI
004DC9A0  5E                        POP ESI
004DC9A1  33 C0                     XOR EAX,EAX
004DC9A3  5B                        POP EBX
004DC9A4  C3                        RET
LAB_004dc9a5:
004DC9A5  8B 8E E0 04 00 00         MOV ECX,dword ptr [ESI + 0x4e0]
004DC9AB  B8 01 00 00 00            MOV EAX,0x1
004DC9B0  3B CB                     CMP ECX,EBX
004DC9B2  75 08                     JNZ 0x004dc9bc
004DC9B4  39 86 D4 04 00 00         CMP dword ptr [ESI + 0x4d4],EAX
004DC9BA  75 2C                     JNZ 0x004dc9e8
LAB_004dc9bc:
004DC9BC  53                        PUSH EBX
004DC9BD  8B CE                     MOV ECX,ESI
004DC9BF  89 86 D0 04 00 00         MOV dword ptr [ESI + 0x4d0],EAX
004DC9C5  89 9E D4 04 00 00         MOV dword ptr [ESI + 0x4d4],EBX
004DC9CB  E8 27 63 F2 FF            CALL 0x00402cf7
004DC9D0  8B CE                     MOV ECX,ESI
004DC9D2  E8 73 51 F2 FF            CALL 0x00401b4a
004DC9D7  8B 16                     MOV EDX,dword ptr [ESI]
004DC9D9  68 39 03 00 00            PUSH 0x339
004DC9DE  6A 04                     PUSH 0x4
004DC9E0  8B CE                     MOV ECX,ESI
004DC9E2  FF 92 90 00 00 00         CALL dword ptr [EDX + 0x90]
LAB_004dc9e8:
004DC9E8  5F                        POP EDI
004DC9E9  5E                        POP ESI
004DC9EA  33 C0                     XOR EAX,EAX
004DC9EC  5B                        POP EBX
004DC9ED  C3                        RET
