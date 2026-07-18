FUN_004fa870:
004FA870  55                        PUSH EBP
004FA871  8B EC                     MOV EBP,ESP
004FA873  56                        PUSH ESI
004FA874  8B F1                     MOV ESI,ECX
004FA876  8B 86 2C 01 00 00         MOV EAX,dword ptr [ESI + 0x12c]
004FA87C  85 C0                     TEST EAX,EAX
004FA87E  74 15                     JZ 0x004fa895
004FA880  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004FA883  25 FF 00 00 00            AND EAX,0xff
004FA888  C6 84 30 4E 0B 00 00 01   MOV byte ptr [EAX + ESI*0x1 + 0xb4e],0x1
004FA890  5E                        POP ESI
004FA891  5D                        POP EBP
004FA892  C2 04 00                  RET 0x4
LAB_004fa895:
004FA895  8A 45 08                  MOV AL,byte ptr [EBP + 0x8]
004FA898  3C 01                     CMP AL,0x1
004FA89A  72 08                     JC 0x004fa8a4
004FA89C  3C 05                     CMP AL,0x5
004FA89E  0F 86 4F 01 00 00         JBE 0x004fa9f3
LAB_004fa8a4:
004FA8A4  3C 0E                     CMP AL,0xe
004FA8A6  0F 84 47 01 00 00         JZ 0x004fa9f3
004FA8AC  3C 0F                     CMP AL,0xf
004FA8AE  0F 84 3F 01 00 00         JZ 0x004fa9f3
004FA8B4  3C 06                     CMP AL,0x6
004FA8B6  75 18                     JNZ 0x004fa8d0
004FA8B8  8B 0D E8 16 80 00         MOV ECX,dword ptr [0x008016e8]
004FA8BE  85 C9                     TEST ECX,ECX
004FA8C0  0F 84 89 01 00 00         JZ 0x004faa4f
004FA8C6  8B 11                     MOV EDX,dword ptr [ECX]
004FA8C8  FF 52 1C                  CALL dword ptr [EDX + 0x1c]
004FA8CB  5E                        POP ESI
004FA8CC  5D                        POP EBP
004FA8CD  C2 04 00                  RET 0x4
LAB_004fa8d0:
004FA8D0  3C 07                     CMP AL,0x7
004FA8D2  75 18                     JNZ 0x004fa8ec
004FA8D4  8B 0D 7C 16 80 00         MOV ECX,dword ptr [0x0080167c]
004FA8DA  85 C9                     TEST ECX,ECX
004FA8DC  0F 84 6D 01 00 00         JZ 0x004faa4f
004FA8E2  8B 01                     MOV EAX,dword ptr [ECX]
004FA8E4  FF 50 1C                  CALL dword ptr [EAX + 0x1c]
004FA8E7  5E                        POP ESI
004FA8E8  5D                        POP EBP
004FA8E9  C2 04 00                  RET 0x4
LAB_004fa8ec:
004FA8EC  3C 08                     CMP AL,0x8
004FA8EE  75 18                     JNZ 0x004fa908
004FA8F0  8B 0D 84 16 80 00         MOV ECX,dword ptr [0x00801684]
004FA8F6  85 C9                     TEST ECX,ECX
004FA8F8  0F 84 51 01 00 00         JZ 0x004faa4f
004FA8FE  8B 11                     MOV EDX,dword ptr [ECX]
004FA900  FF 52 1C                  CALL dword ptr [EDX + 0x1c]
004FA903  5E                        POP ESI
004FA904  5D                        POP EBP
004FA905  C2 04 00                  RET 0x4
LAB_004fa908:
004FA908  3C 09                     CMP AL,0x9
004FA90A  75 18                     JNZ 0x004fa924
004FA90C  8B 0D 98 16 80 00         MOV ECX,dword ptr [0x00801698]
004FA912  85 C9                     TEST ECX,ECX
004FA914  0F 84 35 01 00 00         JZ 0x004faa4f
004FA91A  8B 01                     MOV EAX,dword ptr [ECX]
004FA91C  FF 50 20                  CALL dword ptr [EAX + 0x20]
004FA91F  5E                        POP ESI
004FA920  5D                        POP EBP
004FA921  C2 04 00                  RET 0x4
LAB_004fa924:
004FA924  3C 0A                     CMP AL,0xa
004FA926  75 18                     JNZ 0x004fa940
004FA928  8B 0D 44 2A 80 00         MOV ECX,dword ptr [0x00802a44]
004FA92E  85 C9                     TEST ECX,ECX
004FA930  0F 84 19 01 00 00         JZ 0x004faa4f
004FA936  8B 11                     MOV EDX,dword ptr [ECX]
004FA938  FF 52 20                  CALL dword ptr [EDX + 0x20]
004FA93B  5E                        POP ESI
004FA93C  5D                        POP EBP
004FA93D  C2 04 00                  RET 0x4
LAB_004fa940:
004FA940  3C 0B                     CMP AL,0xb
004FA942  75 18                     JNZ 0x004fa95c
004FA944  8B 0D 78 16 80 00         MOV ECX,dword ptr [0x00801678]
004FA94A  85 C9                     TEST ECX,ECX
004FA94C  0F 84 FD 00 00 00         JZ 0x004faa4f
004FA952  8B 01                     MOV EAX,dword ptr [ECX]
004FA954  FF 50 20                  CALL dword ptr [EAX + 0x20]
004FA957  5E                        POP ESI
004FA958  5D                        POP EBP
004FA959  C2 04 00                  RET 0x4
LAB_004fa95c:
004FA95C  3C 0C                     CMP AL,0xc
004FA95E  75 18                     JNZ 0x004fa978
004FA960  8B 0D 80 16 80 00         MOV ECX,dword ptr [0x00801680]
004FA966  85 C9                     TEST ECX,ECX
004FA968  0F 84 E1 00 00 00         JZ 0x004faa4f
004FA96E  8B 11                     MOV EDX,dword ptr [ECX]
004FA970  FF 52 1C                  CALL dword ptr [EDX + 0x1c]
004FA973  5E                        POP ESI
004FA974  5D                        POP EBP
004FA975  C2 04 00                  RET 0x4
LAB_004fa978:
004FA978  3C 10                     CMP AL,0x10
004FA97A  75 18                     JNZ 0x004fa994
004FA97C  8B 0D 48 2A 80 00         MOV ECX,dword ptr [0x00802a48]
004FA982  85 C9                     TEST ECX,ECX
004FA984  0F 84 C5 00 00 00         JZ 0x004faa4f
004FA98A  8B 01                     MOV EAX,dword ptr [ECX]
004FA98C  FF 50 20                  CALL dword ptr [EAX + 0x20]
004FA98F  5E                        POP ESI
004FA990  5D                        POP EBP
004FA991  C2 04 00                  RET 0x4
LAB_004fa994:
004FA994  3C 11                     CMP AL,0x11
004FA996  75 18                     JNZ 0x004fa9b0
004FA998  8B 0D 8C 16 80 00         MOV ECX,dword ptr [0x0080168c]
004FA99E  85 C9                     TEST ECX,ECX
004FA9A0  0F 84 A9 00 00 00         JZ 0x004faa4f
004FA9A6  8B 11                     MOV EDX,dword ptr [ECX]
004FA9A8  FF 52 20                  CALL dword ptr [EDX + 0x20]
004FA9AB  5E                        POP ESI
004FA9AC  5D                        POP EBP
004FA9AD  C2 04 00                  RET 0x4
LAB_004fa9b0:
004FA9B0  3C 12                     CMP AL,0x12
004FA9B2  75 18                     JNZ 0x004fa9cc
004FA9B4  8B 0D EC 16 80 00         MOV ECX,dword ptr [0x008016ec]
004FA9BA  85 C9                     TEST ECX,ECX
004FA9BC  0F 84 8D 00 00 00         JZ 0x004faa4f
004FA9C2  8B 01                     MOV EAX,dword ptr [ECX]
004FA9C4  FF 50 20                  CALL dword ptr [EAX + 0x20]
004FA9C7  5E                        POP ESI
004FA9C8  5D                        POP EBP
004FA9C9  C2 04 00                  RET 0x4
LAB_004fa9cc:
004FA9CC  3C 13                     CMP AL,0x13
004FA9CE  75 7F                     JNZ 0x004faa4f
004FA9D0  8B 0D 90 16 80 00         MOV ECX,dword ptr [0x00801690]
004FA9D6  85 C9                     TEST ECX,ECX
004FA9D8  74 75                     JZ 0x004faa4f
004FA9DA  6A 06                     PUSH 0x6
004FA9DC  E8 57 83 F0 FF            CALL 0x00402d38
004FA9E1  8B 0D 90 16 80 00         MOV ECX,dword ptr [0x00801690]
004FA9E7  6A 05                     PUSH 0x5
004FA9E9  E8 4A 83 F0 FF            CALL 0x00402d38
004FA9EE  5E                        POP ESI
004FA9EF  5D                        POP EBP
004FA9F0  C2 04 00                  RET 0x4
LAB_004fa9f3:
004FA9F3  FE C8                     DEC AL
004FA9F5  88 45 08                  MOV byte ptr [EBP + 0x8],AL
004FA9F8  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004FA9FB  81 E2 FF 00 00 00         AND EDX,0xff
004FAA01  83 FA 0E                  CMP EDX,0xe
004FAA04  77 49                     JA 0x004faa4f
004FAA06  33 C9                     XOR ECX,ECX
004FAA08  8A 8A 6C AA 4F 00         MOV CL,byte ptr [EDX + 0x4faa6c]
switchD_004faa0e::switchD:
004FAA0E  FF 24 8D 54 AA 4F 00      JMP dword ptr [ECX*0x4 + 0x4faa54]
switchD_004faa0e::caseD_1:
004FAA15  8B CE                     MOV ECX,ESI
004FAA17  E8 51 76 F0 FF            CALL 0x0040206d
004FAA1C  5E                        POP ESI
004FAA1D  5D                        POP EBP
004FAA1E  C2 04 00                  RET 0x4
switchD_004faa0e::caseD_2:
004FAA21  8B CE                     MOV ECX,ESI
004FAA23  E8 7B 9A F0 FF            CALL 0x004044a3
004FAA28  5E                        POP ESI
004FAA29  5D                        POP EBP
004FAA2A  C2 04 00                  RET 0x4
switchD_004faa0e::caseD_4:
004FAA2D  8B CE                     MOV ECX,ESI
004FAA2F  E8 55 6E F0 FF            CALL 0x00401889
004FAA34  5E                        POP ESI
004FAA35  5D                        POP EBP
004FAA36  C2 04 00                  RET 0x4
switchD_004faa0e::caseD_5:
004FAA39  8B CE                     MOV ECX,ESI
004FAA3B  E8 8C 7B F0 FF            CALL 0x004025cc
004FAA40  5E                        POP ESI
004FAA41  5D                        POP EBP
004FAA42  C2 04 00                  RET 0x4
switchD_004faa0e::caseD_e:
004FAA45  2C 0D                     SUB AL,0xd
004FAA47  8B CE                     MOV ECX,ESI
004FAA49  50                        PUSH EAX
004FAA4A  E8 0C 97 F0 FF            CALL 0x0040415b
switchD_004faa0e::caseD_3:
004FAA4F  5E                        POP ESI
004FAA50  5D                        POP EBP
004FAA51  C2 04 00                  RET 0x4
