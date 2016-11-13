# オブジェクトの配列にしようと思って途中です
class NewCar
  attr_accessor :name, :price
  @@n = 0

  def initialize
    @name  = ""
    @price = ""
  end

  def add_car(name, price)
  end
end

car = Array.new(10)

loop do # 無限ループ
  print('1:add 2:delete 3:show 4:finish > ' )

  case gets.chomp.to_i
  when 1 then
    print 'carname > '
    car[@@n].name = gets.chomp
    print 'price > '
    car[@@n].price = gets.to_i
    @@n += 1
#    car.add_car(carname, price)

  when 2 then
    car.show_car
    print('deletenumber > ')
    #car.delete_car(gets.chomp.to_i)
    car.delete_at(gets.to_i-1)

  when 3 then
    car.each_with_index do |item, number| #配列に対してのeach_with_index
      puts "#{number+1} 車名:#{item.name} 価格:#{item.price}"
    end

  when 4 then
    break

  else
    puts "範囲外の入力です"
  end

  puts
end
puts


=begin
class MyCar
  MAX = 5 # 定数

  def initialize
    @count = 0 # 要素数のカウンター
    @car = [] # Array.new()
    # Array.new(5) や Array.new(5){Hash.new()} は show_car でエラーになるためNG
  end

  # 入力された値番号で削除対象を決めるため配列にハッシュを追加
  def add_car(name, price)
    if @count < MAX
      @car[@count] = {name.to_sym => price} # ハッシュ追加
      @count += 1
    else
      # shiftで要素が減るが代入（追加）で要素が増えるため@countの値はそのまま
      @car.shift # 先頭要素削除
      @car[@count-1] = {name.to_sym => price} # 末尾にハッシュ追加 [@MAX-1]とどっちがいいのかね？
    end
  end

  def delete_car(select)
    if 0 < select && select <= @count #入力が0より大きく要素数以下なら
      puts "#{@car.delete_at(select-1)}を削除しました" # delete_at()の返り値は消した要素
      @count -= 1
    else
      puts "消せません"
    end
  end

  def show_car
    @car.each_with_index do |item, number| #配列に対してのeach_with_index
      item.each do |key,value| #配列の要素 = item = ハッシュに対してのeach
        puts "#{number+1} 車名:#{key} 価格:#{value}"
      end
    end
  end

end

car=Car.new()

loop do # 無限ループ
  print('1:add 2:delete 3:show 4:finish > ' )

  case gets.to_i
  when 1 then
    print 'carname > '
    carname = gets.chomp
    print 'price > '
    price = gets.to_i
    car.add_car(carname, price)

  when 2 then
    car.show_car
    print('deletenumber > ')
    car.delete_car(gets.to_i)

  when 3 then
    car.show_car

  when 4 then
    break

  else
    puts "範囲外の入力です"
  end

  puts
end
puts
=end



=begin
#あいつのやつ
module ArrayPack
  def arrayPack(deletenumber,*array)
    num = 4-deletenumber #配列を詰める回数
    num.times do |i|   #配列を前に詰める
      array[i+deletenumber] = array[i+1+deletenumber]
    end
    return *array
  end
end

class Car
  include ArrayPack
  @@ElementCount = 0

  def initialize()
    #配列初期化
    @CarName = Array.new(5)
    @Price   = Array.new(5)
  end

  def AddCar(carName,price)
    #配列がいっぱいだった場合
    if @@ElementCount===5
      #先頭配列を消去
      DeleteCar(0)
      #配列に要素を追加
      @CarName[@@ElementCount]=carName
      @Price[@@ElementCount]=price
      #要素数を1足す
      @@ElementCount=@@ElementCount+1
    else
      @CarName[@@ElementCount]=carName
      @Price[@@ElementCount]=price
      @@ElementCount=@@ElementCount+1
    end
  end

  def DeleteCar(arrayNumber)
    #入力した番号が存在する場合
    if(arrayNumber<@@ElementCount)
    #消去
    @CarName[arrayNumber]=""
    @Price[arrayNumber]=''
    #モジュールを呼ぶ
    *@CarName=arrayPack(arrayNumber,*@CarName)
    *@Price=arrayPack(arrayNumber,*@Price)
    #配列の要素数を1減らす
    @@ElementCount=@@ElementCount-1
  else
    end
  end

  def ShowCar()
    @@ElementCount.times do |i|
    print( i, " CarName:",@CarName[i]," Price:",@Price[i],"\n" )
    end
  end
end
=end
