def expert_system(weather, rain_chance):
    # Cơ sở tri thức (Knowledge Base)
    if weather == "mưa":
        return "👉 Bạn nên mang áo mưa."
    elif weather == "nhiều mây" and rain_chance == "có":
        return "👉 Bạn nên mang áo mưa."
    elif weather == "nắng" and rain_chance == "không":
        return "👉 Bạn không cần mang áo mưa."
    else:
        return "👉 Mang áo mưa cho an toàn."
    

def main():
    print("=== HỆ CHUYÊN GIA TƯ VẤN MANG ÁO MƯA ===")
    print("Chọn tình trạng thời tiết hiện tại:")
    print("1. Mưa")
    print("2. Nhiều mây")
    print("3. Nắng")
    choice = input("Nhập số (1-3): ")
    if choice == "1":
        weather = "mưa"
        rain_chance = "có"  # mặc định chắc chắn mưa
    elif choice == "2":
        weather = "nhiều mây"
        rain_chance = input("Có khả năng mưa không? (có/không): ")
    elif choice == "3":
        weather = "nắng"
        rain_chance = input("Có khả năng mưa không? (có/không): ")
    else:
        print("❌ Lựa chọn không hợp lệ.")
        return

    # Máy suy luận đưa ra quyết định
    result = expert_system(weather, rain_chance)
    print(result)


# Chạy hệ chuyên gia
if __name__ == "__main__":
    main()
