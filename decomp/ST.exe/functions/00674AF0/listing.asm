FUN_00674af0:
00674AF0  55                        PUSH EBP
00674AF1  8B EC                     MOV EBP,ESP
00674AF3  8B 0D 34 19 81 00         MOV ECX,dword ptr [0x00811934]
00674AF9  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00674AFC  85 C9                     TEST ECX,ECX
00674AFE  53                        PUSH EBX
00674AFF  B8 A0 16 80 00            MOV EAX,0x8016a0
00674B04  74 18                     JZ 0x00674b1e
00674B06  80 39 00                  CMP byte ptr [ECX],0x0
00674B09  74 13                     JZ 0x00674b1e
LAB_00674b0b:
00674B0B  39 51 04                  CMP dword ptr [ECX + 0x4],EDX
00674B0E  0F 84 A9 00 00 00         JZ 0x00674bbd
00674B14  8A 59 08                  MOV BL,byte ptr [ECX + 0x8]
00674B17  83 C1 08                  ADD ECX,0x8
00674B1A  84 DB                     TEST BL,BL
00674B1C  75 ED                     JNZ 0x00674b0b
LAB_00674b1e:
00674B1E  8B 0D 38 19 81 00         MOV ECX,dword ptr [0x00811938]
00674B24  85 C9                     TEST ECX,ECX
00674B26  74 18                     JZ 0x00674b40
00674B28  80 39 00                  CMP byte ptr [ECX],0x0
00674B2B  74 13                     JZ 0x00674b40
LAB_00674b2d:
00674B2D  39 51 04                  CMP dword ptr [ECX + 0x4],EDX
00674B30  0F 84 87 00 00 00         JZ 0x00674bbd
00674B36  8A 59 08                  MOV BL,byte ptr [ECX + 0x8]
00674B39  83 C1 08                  ADD ECX,0x8
00674B3C  84 DB                     TEST BL,BL
00674B3E  75 ED                     JNZ 0x00674b2d
LAB_00674b40:
00674B40  8B 0D 3C 19 81 00         MOV ECX,dword ptr [0x0081193c]
00674B46  85 C9                     TEST ECX,ECX
00674B48  74 14                     JZ 0x00674b5e
00674B4A  80 39 00                  CMP byte ptr [ECX],0x0
00674B4D  74 0F                     JZ 0x00674b5e
LAB_00674b4f:
00674B4F  39 51 04                  CMP dword ptr [ECX + 0x4],EDX
00674B52  74 69                     JZ 0x00674bbd
00674B54  8A 59 08                  MOV BL,byte ptr [ECX + 0x8]
00674B57  83 C1 08                  ADD ECX,0x8
00674B5A  84 DB                     TEST BL,BL
00674B5C  75 F1                     JNZ 0x00674b4f
LAB_00674b5e:
00674B5E  8B 0D 28 19 81 00         MOV ECX,dword ptr [0x00811928]
00674B64  85 C9                     TEST ECX,ECX
00674B66  74 14                     JZ 0x00674b7c
00674B68  83 39 00                  CMP dword ptr [ECX],0x0
00674B6B  74 0F                     JZ 0x00674b7c
LAB_00674b6d:
00674B6D  39 51 04                  CMP dword ptr [ECX + 0x4],EDX
00674B70  74 52                     JZ 0x00674bc4
00674B72  8B 59 08                  MOV EBX,dword ptr [ECX + 0x8]
00674B75  83 C1 08                  ADD ECX,0x8
00674B78  85 DB                     TEST EBX,EBX
00674B7A  75 F1                     JNZ 0x00674b6d
LAB_00674b7c:
00674B7C  8B 0D 2C 19 81 00         MOV ECX,dword ptr [0x0081192c]
00674B82  85 C9                     TEST ECX,ECX
00674B84  74 14                     JZ 0x00674b9a
00674B86  83 39 00                  CMP dword ptr [ECX],0x0
00674B89  74 0F                     JZ 0x00674b9a
LAB_00674b8b:
00674B8B  39 51 04                  CMP dword ptr [ECX + 0x4],EDX
00674B8E  74 34                     JZ 0x00674bc4
00674B90  8B 59 08                  MOV EBX,dword ptr [ECX + 0x8]
00674B93  83 C1 08                  ADD ECX,0x8
00674B96  85 DB                     TEST EBX,EBX
00674B98  75 F1                     JNZ 0x00674b8b
LAB_00674b9a:
00674B9A  8B 0D 30 19 81 00         MOV ECX,dword ptr [0x00811930]
00674BA0  85 C9                     TEST ECX,ECX
00674BA2  74 22                     JZ 0x00674bc6
00674BA4  83 39 00                  CMP dword ptr [ECX],0x0
00674BA7  74 1D                     JZ 0x00674bc6
LAB_00674ba9:
00674BA9  39 51 04                  CMP dword ptr [ECX + 0x4],EDX
00674BAC  74 16                     JZ 0x00674bc4
00674BAE  8B 59 08                  MOV EBX,dword ptr [ECX + 0x8]
00674BB1  83 C1 08                  ADD ECX,0x8
00674BB4  85 DB                     TEST EBX,EBX
00674BB6  75 F1                     JNZ 0x00674ba9
00674BB8  5B                        POP EBX
00674BB9  5D                        POP EBP
00674BBA  C2 04 00                  RET 0x4
LAB_00674bbd:
00674BBD  8B C1                     MOV EAX,ECX
00674BBF  5B                        POP EBX
00674BC0  5D                        POP EBP
00674BC1  C2 04 00                  RET 0x4
FUN_00674af0::cf_common_exit_00674BC4:
00674BC4  8B 01                     MOV EAX,dword ptr [ECX]
LAB_00674bc6:
00674BC6  5B                        POP EBX
00674BC7  5D                        POP EBP
00674BC8  C2 04 00                  RET 0x4
